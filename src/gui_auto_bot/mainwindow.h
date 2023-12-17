#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <memory>
#include "manualremotecontroller.h"
#include "extendedscene.h"
#include "graphicsrobitem.h"
#include "iteminputinfo.h"
#include "creatorinfo.h"
#include "serialportdialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void dblClicked(QPointF point);
    void slotTarget(QPointF point);

private slots:
    void on_a_remote_controller_triggered();
    void on_a_buildGraphic_triggered();
    void on_pb_addPoint_clicked();

private:
    Ui::MainWindow *ui;
    ExtendedScene* scene;
    CreatorInfo* creatorInfo;
};
#endif // MAINWINDOW_H
