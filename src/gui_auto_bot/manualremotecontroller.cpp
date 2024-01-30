#include "manualremotecontroller.h"
#include "ui_manualremotecontroller.h"

ManualRemoteController::ManualRemoteController(QWidget *parent) : QDialog(parent),
                                                                  ui(new Ui::manualRemoteController)
{
    ui->setupUi(this);
}

ManualRemoteController::~ManualRemoteController()
{
    delete ui;
}

void ManualRemoteController::setSerialObject(QSerialPort *port)
{
    this->serial = port;
}

void ManualRemoteController::on_pb_back_clicked()
{
    serial->write("0 0;");
}

void ManualRemoteController::on_pb_forward_clicked()
{
    serial->write("0 0;");
}

void ManualRemoteController::on_pb_rotatePlus_clicked()
{
    serial->write("0 0;");
}

void ManualRemoteController::on_pb_rotateMinus_clicked()
{
    serial->write("0 0;");
}

void ManualRemoteController::on_pb_back_pressed()
{
    serial->write("-0.2 -0.2;");
}
void ManualRemoteController::on_pb_forward_pressed()
{
    serial->write("0.2 0.2;");
}

void ManualRemoteController::on_pb_rotatePlus_pressed()
{
    serial->write("0.2 0;");
}

void ManualRemoteController::on_pb_rotateMinus_pressed()
{
    serial->write("0 0.2;");
}
