#include "manualremotecontroller.h"
#include "ui_manualremotecontroller.h"

ManualRemoteController::ManualRemoteController(ros::NodeHandle *nh, QWidget *parent) : QDialog(parent),
                                                                                       ui(new Ui::manualRemoteController)
{
    ui->setupUi(this);

    cmd_vel = nh->subscribe("/cmd_vel", 1000, &ManualRemoteController::twistCallback, this);
    vel_target = nh->advertise<geometry_msgs::Twist>("/twist", 1000);

    connect(this, &ManualRemoteController::finished, this, &ManualRemoteController::finishCallback);
}

ManualRemoteController::~ManualRemoteController()
{
    delete ui;
}

void ManualRemoteController::show()
{
    openWindow = true;
    this->exec();
}

void ManualRemoteController::twistCallback(const geometry_msgs::Twist::ConstPtr &msg)
{
    if (!openWindow)
        vel_target.publish(msg);
}

void ManualRemoteController::sendSpeed(double linear, double angular)
{
    geometry_msgs::Twist msg;
    msg.linear.x = linear;
    msg.angular.z = angular;
    vel_target.publish(msg);
}

void ManualRemoteController::finishCallback(int result)
{
    openWindow = false;
}

void ManualRemoteController::on_pb_back_clicked()
{
    this->sendSpeed(-0.15, 0);
}

void ManualRemoteController::on_pb_forward_clicked()
{
    this->sendSpeed(0.15, 0);
}

void ManualRemoteController::on_pb_rotatePlus_clicked()
{
    this->sendSpeed(0, 0.15);
}

void ManualRemoteController::on_pb_rotateMinus_clicked()
{
    this->sendSpeed(0, -0.15);
}

void ManualRemoteController::on_pb_back_pressed()
{
    this->sendSpeed(0, 0);
}
void ManualRemoteController::on_pb_forward_pressed()
{
    this->sendSpeed(0, 0);
}

void ManualRemoteController::on_pb_rotatePlus_pressed()
{
    this->sendSpeed(0, 0);
}

void ManualRemoteController::on_pb_rotateMinus_pressed()
{
    this->sendSpeed(0, 0);
}
