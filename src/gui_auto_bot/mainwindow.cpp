#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new ExtendedScene();
    scene->setItemIndexMethod(QGraphicsScene::NoIndex); // настраиваем индексацию элементов
    ui->gv_builtMap->setScene(scene);
    scene->setSceneRect(0, 0, 200, 200);
    ui->gv_builtMap->setMouseTracking(true);
    ui->gv_builtMap->setRenderHint(QPainter::Antialiasing);    // Настраиваем рендер
    ui->gv_builtMap->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->gv_builtMap->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    connect(scene, &ExtendedScene::targetCoordinate, this, &MainWindow::slotTarget);
    connect(scene, &ExtendedScene::dblClicked, this, &MainWindow::dblClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
  //  delete creatorInfo;
}

void MainWindow::dblClicked(QPointF point)
{
    ItemInputInfo info;
    info.setX(point.x());
    info.setY(point.y());
    switch (info.exec())
    {
    case QDialog::Accepted:
    {
        GraphicsRobItem* item = new GraphicsRobItem(info.getX(),info.getY(),info.getAngle());
        scene->addItem(item);
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
    ui->dsb_X->setValue(point.x());
    ui->dsb_Y->setValue(point.y());
}

void MainWindow::on_pb_addPoint_clicked()
{
    GraphicsRobItem* item = new GraphicsRobItem(ui->dsb_X->value(),ui->dsb_Y->value(),ui->dsb_theta->value());
    scene->addItem(item);
}

void MainWindow::on_a_remote_controller_triggered()
{
    ManualRemoteController remoteController;
    remoteController.exec();
}

void MainWindow::on_a_buildGraphic_triggered()
{
    SerialPortDialog spw;
    spw.exec();
}