#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ros/ros.h"
#include "QTimer"
#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <memory>
#include "manualremotecontroller.h"
#include "extendedscene.h"
#include "graphicsrobitem.h"
#include "iteminputinfo.h"
#include "serialportdialog.h"
#include "jsonmodule.h"
#include <QMessageBox>
#include "executorwidget.h"
#include "messager.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(ros::NodeHandle *nh, QWidget *parent = nullptr);
    ~MainWindow();

    void addInfo(QString &str);

public slots:
    void dblClicked(QPointF point);
    void slotTarget(QPointF point);

private slots:
    //______________Окна_______________________
    void on_a_remote_controller_triggered();
    void on_a_buildGraphic_triggered();

    //_____________Кнопки_____________________
    void on_pb_addPoint_clicked();
    void on_pb_apply_clicked();

    //_____________Работа с файлами______________
    void on_a_createNewFile_triggered();
    void autosave();
    void on_a_openFile_triggered();
    void on_a_save_as_triggered();

    //____________Личные слоты______________
    void newItemSelected();
    void spinOnce();

private:
    Ui::MainWindow *ui;
    ExtendedScene *scene;
    JSONmodule *JSON;
    ExecutorWidget* execWidget;
    QStringListModel* infoModel;
    QStringList infoList;
     
    ManualRemoteController *StmController;
    QTimer *ros_timer;

    void displayParameters(QGraphicsItem *item);
    void setSettingsForItem(QGraphicsItem *item);
    void clearScene();

protected:
    void closeEvent(QCloseEvent *event);

};
#endif // MAINWINDOW_H
