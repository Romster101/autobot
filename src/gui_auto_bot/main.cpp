#include "mainwindow.h"
#include <QApplication>
#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "gui");
    ros::NodeHandle nh;

    QApplication a(argc, argv);
    MainWindow w(&nh);
    w.setWindowTitle("Программа управления автономным роботом");
    w.show();
    return a.exec();
}
