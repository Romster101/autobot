#include "serialportdialog.h"
#include "ui_serialportdialog.h"

SerialPortDialog::SerialPortDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SerialPortDialog)
{
    ui->setupUi(this);
}

SerialPortDialog::~SerialPortDialog()
{
    delete ui;
}

