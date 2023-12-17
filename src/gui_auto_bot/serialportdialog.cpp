#include "serialportdialog.h"
#include "ui_serialportdialog.h"

SerialPortDialog::SerialPortDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SerialPortDialog)
{
    ui->setupUi(this);
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos) {
        QStringList list;
        list << info.portName();
        ui->cb_ports->addItem(list.first());
        qDebug() << list;
    }
}

SerialPortDialog::~SerialPortDialog()
{
    delete ui;
}

void SerialPortDialog::on_pb_openPort_clicked()
{
    qDebug() << "ggggggggggg";
}

void SerialPortDialog::on_pb_closePort_clicked()
{
    qDebug() << "ggggggggggg";
}

