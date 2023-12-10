#include "manualremotecontroller.h"
#include "ui_manualremotecontroller.h"

ManualRemoteController::ManualRemoteController(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manualRemoteController)
{
    ui->setupUi(this);
}

ManualRemoteController::~ManualRemoteController()
{
    delete ui;
}

void ManualRemoteController::on_pb_back_clicked()
{
    
}

void ManualRemoteController::on_pb_forward_clicked()
{
    
}

void ManualRemoteController::on_pb_rotatePlus_clicked()
{
    
}

void ManualRemoteController::on_pb_rotateMinus_clicked()
{
    
}