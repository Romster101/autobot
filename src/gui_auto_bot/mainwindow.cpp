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
    ui->gv_builtMap->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->gv_builtMap->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

    connect(scene, &ExtendedScene::targetCoordinate, this, &MainWindow::slotTarget);
    connect(scene, &ExtendedScene::dblClicked, this, &MainWindow::dblClicked);
    connect(scene, &ExtendedScene::selectionChanged, this, &MainWindow::newItemSelected);
}

MainWindow::~MainWindow()
{
    delete JSON;
    delete scene;
    delete ui;
    delete ros_timer;
    ros::shutdown();
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
    qDebug() << "on_a_createNewFile_triggered";
}

void MainWindow::on_a_openFile_triggered()
{
    QString file_path("/home/roman/projects/json.bor");
    if (file_path != "")
    {
        JSON->setSavePath(file_path);
        auto obj = JSON->readFromJsonObj(JSON->getSavePath());
        JSON->loadJsonObjectIntoProgramm(obj,scene);
    }
}

void MainWindow::on_a_save_triggered()
{
    // auto file_path = QFileDialog::getSaveFileName(this, tr("Выбрать путь"),
    //                                               QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), "*.bor");

    // qDebug() << "save " << file_path;
    QFileDialog fileDialog(this, "Choose file to save");
    fileDialog.setDefaultSuffix("json");
    fileDialog.setOption(QFileDialog::DontUseNativeDialog,true);
    fileDialog.setNameFilter("json-files (*.json)");
    fileDialog.exec();

    QFile f(fileDialog.selectedFiles().first());
    QFileInfo fileInfo(f);
    QString FILE_NAME(fileInfo.fileName());
}

void MainWindow::on_a_save_as_triggered()
{
    // auto file_path = QFileDialog::getSaveFileName(this, tr("Выбрать путь"),
    //                                               QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), "*.bor");
    QString file_path("/home/roman/projects/json.bor");
    if (file_path != "")
    {
        JSON->setSavePath(file_path);
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
    item->update();
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