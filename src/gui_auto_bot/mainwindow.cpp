#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(ros::NodeHandle *nh, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new ExtendedScene();
    JSON = new JSONmodule();

    StmController = new ManualRemoteController(nh);
    ros_timer = new QTimer(this);
    connect(ros_timer, SIGNAL(timeout()), this, SLOT(spinOnce()));
    ros_timer->start(25); 
    
    GraphicsRobItem *item = new GraphicsRobItem(0, 0, 0, false);
    scene->addRobItem(item);
    ui->gv_builtMap->setScene(scene);
    scene->setSceneRect(0, 0, 100, 100);
    ui->gv_builtMap->setMouseTracking(true);
    ui->gv_builtMap->setRenderHint(QPainter::Antialiasing);        // Настраиваем рендер
    ui->gv_builtMap->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
    ui->gv_builtMap->setDragMode(QGraphicsView::RubberBandDrag);
    installEventFilter(this);

    execWidget = new ExecutorWidget(scene,this);
    ui->hl_executor->addWidget(execWidget);

    connect(scene, &ExtendedScene::targetCoordinate, this, &MainWindow::slotTarget);
    connect(scene, &ExtendedScene::dblClicked, this, &MainWindow::dblClicked);
    connect(scene, &ExtendedScene::selectionChanged, this, &MainWindow::newItemSelected);

    connect(execWidget,&ExecutorWidget::beginMoving,[this](){
        ui->menubar->setEnabled(false);
    });

        connect(execWidget,&ExecutorWidget::endMoving,[this](){
        ui->menubar->setEnabled(true);
    });

    connect(scene, &ExtendedScene::propertiesChanged,[this](int x,int y,int angle,bool cargoOut)
    {
        ui->dsb_X->setValue(x);
        ui->dsb_Y->setValue(-y);
        ui->dsb_theta->setValue(angle);
        ui->chb_cargo_out->setChecked(cargoOut);
    });
    infoModel = new QStringListModel();
    infoModel->setStringList(infoList);
    ui->listView->setModel(infoModel);
    
    connect(Messager::instance(),&Messager::infoMessage,[this](QString msg){
        addInfo(msg);
    });
}

MainWindow::~MainWindow()
{
    delete JSON;
    delete scene;
    delete ui;
    delete ros_timer;
    delete execWidget;
    delete infoModel;
    ros::shutdown();
}

void MainWindow::addInfo(QString &str)
{
    this->infoList.append(str);
    infoModel->setStringList(infoList);
    ui->listView->setModel(infoModel);
}

void MainWindow::dblClicked(QPointF point)
{
    ItemInputInfo info;
    info.setX(point.x());
    info.setY(-point.y());
    switch (info.exec())
    {
    case QDialog::Accepted:
    {
        GraphicsRobItem *item = new GraphicsRobItem(info.getX(), info.getY(), info.getAngle(), info.getCargo_out());
        scene->addRobItem(item);
        break;
    }
    case QDialog::Rejected:
    {
        break;
    }
    default:
        break;
    }
}

void MainWindow::slotTarget(QPointF point)
{
    if (scene->selectedItems().size() == 0)
    {
        ui->dsb_X->setValue(point.x());
        ui->dsb_Y->setValue(-point.y());
    }
}

void MainWindow::on_pb_addPoint_clicked()
{
    GraphicsRobItem *item = new GraphicsRobItem(ui->dsb_X->value(), ui->dsb_Y->value(), ui->dsb_theta->value());
    scene->addRobItem(item);
    item->setCargoOut(ui->chb_cargo_out->isChecked());
}

void MainWindow::on_pb_apply_clicked()
{
    auto selItems = scene->selectedItems();
    auto size = selItems.size();
    switch (size)
    {
    case 0: // если 0 элементов выбрано - кнопка заблокирована
        break;
    case 1: // если выбран 1 элемент - применяем все настройки
    {
        setSettingsForItem(selItems[0]);
    }
    default: // если выбрано много элементов - меняем только угол поворота и выгрузку
    {
        auto t = ui->dsb_theta->value();
        auto c = ui->chb_cargo_out->isChecked();
        for (QGraphicsItem *item : selItems)
        {
            item->setData(RotationField, t);
            item->setData(CargoOutField, c);
            item->update();
        }
    }
    break;
    }
}

void MainWindow::on_a_createNewFile_triggered()
{
    QFileDialog fileDialog(this, "Choose file to save");
    fileDialog.setDefaultSuffix("MK7");
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation));
    fileDialog.setOption(QFileDialog::DontUseNativeDialog,true);
    fileDialog.setNameFilter("*.MK7");
    auto exec = fileDialog.exec();
    QFile f(fileDialog.selectedFiles().first());
    QFileInfo fileInfo(f);
    QString filePath(fileInfo.absoluteFilePath());
    if (exec == QFileDialog::Accepted)
    {
        // если был открыт какой-то файл - его сохраняем
        autosave();
        // чистим сцену 
        clearScene();
        //добавляем начальное положение робота
        GraphicsRobItem *item = new GraphicsRobItem(0, 0, 0, false);
        scene->addRobItem(item);
        // обновляем данные о новом файле
        JSON->setSavePath(filePath);
        ui->lbl_file_name->setText(filePath);
    }
}

void MainWindow::autosave()
{
    if (JSON->getSavePath() != "")
    {
        int res = QMessageBox::warning(this, tr("Внимание"),
                                tr("Сохранить изменения в ранее открытом файле?"),
                                QMessageBox::Save|QMessageBox::Cancel);
        if (res == QMessageBox::Save){
            auto objToSave = JSON->getJsonObj(scene);
            JSON->saveToJsonObj(objToSave);
        }
    } else {
        int res = QMessageBox::warning(this, tr("Внимание"),
                                 tr("Вы не сохранили файл. Сохранить?"),
                                 QMessageBox::Save|QMessageBox::Cancel);
        if(res == QMessageBox::Save)
            on_a_save_as_triggered();
    }
}

void MainWindow::on_a_openFile_triggered()
{
    QString f("*.MK7");
    auto filePath = QFileDialog::getOpenFileName(this, tr("Выбрать путь"),
                                                  QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),  "*.MK7",
                                                  &f,QFileDialog::DontUseNativeDialog);
    if (filePath == "") return;

    // сохраняем старый файл
    autosave();
    // чистим сцену
    clearScene();

    // загружаем новый 
    JSON->setSavePath(filePath);
    ui->lbl_file_name->setText(JSON->getSavePath());
    auto obj = JSON->readFromJsonObj(JSON->getSavePath());
    JSON->loadJsonObjectIntoProgramm(obj,scene);
}

void MainWindow::clearScene()
{
    auto items = scene->getRobItemsVector();
    for (GraphicsRobItem *item : items)
    {
        scene->removeItem(item);
        if (item->getArrowExists())
            scene->removeItem(item->getArrowINptr());
        delete item;
    }
    scene->clearItemsVector();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    autosave();
}

void MainWindow::on_a_save_as_triggered()
{
    QFileDialog fileDialog(this, "Choose file to save");
    fileDialog.setDefaultSuffix("MK7");
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.setDirectory(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation));
    fileDialog.setOption(QFileDialog::DontUseNativeDialog,true);
    fileDialog.setNameFilter("*.MK7");
    auto exec = fileDialog.exec();
    QFile f(fileDialog.selectedFiles().first());
    QFileInfo fileInfo(f);
    QString filePath(fileInfo.absoluteFilePath());
    if (exec == QFileDialog::Accepted)
    {
        JSON->setSavePath(filePath);
        ui->lbl_file_name->setText(filePath);
        auto objToSave = JSON->getJsonObj(scene);
        JSON->saveToJsonObj(objToSave);
    }
}

void MainWindow::newItemSelected()
{
    auto selItems = scene->selectedItems();
    auto size = selItems.size();
    switch (size)
    {
    case 0: // если 0 элементов выбрано - недоступны поля кнопки применить, x,  y
    {
        ui->pb_apply->setEnabled(false);
        ui->dsb_X->setEnabled(true);
        ui->dsb_Y->setEnabled(true);
    }
    break;
    case 1: // если 1 выбран - доступны + отображаем все
    {
        displayParameters(selItems[0]);
        ui->pb_apply->setEnabled(true);
        ui->dsb_X->setEnabled(true);
        ui->dsb_Y->setEnabled(true);
    }
    break;
    default: // если много выбрано - недоступны только х и у
    {
        ui->pb_apply->setEnabled(true);
        ui->dsb_X->setEnabled(false);
        ui->dsb_Y->setEnabled(false);
    }
    break;
    }
}

void MainWindow::displayParameters(QGraphicsItem *item)
{
    ui->dsb_X->setValue(item->pos().x());
    ui->dsb_Y->setValue(-item->pos().y());
    ui->dsb_theta->setValue(item->data(RotationField).toInt());
    ui->chb_cargo_out->setChecked(item->data(CargoOutField).toBool());
}

void MainWindow::setSettingsForItem(QGraphicsItem *item)
{
    auto x = ui->dsb_X->value();
    auto y = ui->dsb_Y->value();
    auto t = ui->dsb_theta->value();
    auto c = ui->chb_cargo_out->isChecked();
    item->setPos(x, -y);
    item->setData(RotationField, t);
    item->setData(CargoOutField, c);
    scene->adjustLinesForElement(item->data(NumberField).toInt(),x,-y);
}

void MainWindow::spinOnce()
{
    if (ros::ok())
    {
        ros::spinOnce();
    }
    else
        QApplication::quit();
}

void MainWindow::on_a_remote_controller_triggered()
{
    StmController->show();
}

void MainWindow::on_a_buildGraphic_triggered()
{
    // spd->show();
}