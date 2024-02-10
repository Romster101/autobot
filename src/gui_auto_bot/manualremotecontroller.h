#ifndef MANUALREMOTECONTROLLER_H
#define MANUALREMOTECONTROLLER_H

#include <QDialog>
#include <QDebug>

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

namespace Ui
{
    class manualRemoteController;
}

class ManualRemoteController : public QDialog
{
    Q_OBJECT

public:
    explicit ManualRemoteController(ros::NodeHandle *nh, QWidget *parent = nullptr);
    ~ManualRemoteController();

    void show();

private:
    Ui::manualRemoteController *ui;
    ros::Subscriber cmd_vel;
    ros::Publisher vel_target;
    bool openWindow;

    void twistCallback(const geometry_msgs::Twist::ConstPtr &msg);
    void sendSpeed(double linear, double angular);

private slots:
    void finishCallback(int result);
    void on_pb_back_clicked();
    void on_pb_back_pressed();
    void on_pb_forward_clicked();
    void on_pb_rotatePlus_clicked();
    void on_pb_rotateMinus_clicked();
    void on_pb_forward_pressed();
    void on_pb_rotatePlus_pressed();
    void on_pb_rotateMinus_pressed();
};

#endif // MANUALREMOTECONTROLLER_H
