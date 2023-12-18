#include "serialportdialog.h"
#include "ui_serialportdialog.h"

SerialPortDialog::SerialPortDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SerialPortDialog)
{
    ui->setupUi(this);
    portsInfoList = QSerialPortInfo::availablePorts();
    for (QSerialPortInfo &info:portsInfoList){
        ui->cb_ports->addItem(info.portName());
    }
    serial = new QSerialPort(this);
    ui->customPlot->addGraph();
    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    QDateTime ti = QDateTime::currentDateTime();
    QString tim = ti.toString("hh:mm:ss");
    timeTicker->setTimeFormat(tim);
    ui->customPlot->xAxis->setTicker(timeTicker);
    connect(serial, &QSerialPort::readyRead,this,&SerialPortDialog::serialReceive);
}

SerialPortDialog::~SerialPortDialog()
{
    delete ui;
    delete serial;
}

void SerialPortDialog::on_pb_openPort_clicked()
{
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    for (int i = 0; i < portsInfoList.size(); i++)
    {
        if (portsInfoList[i].portName() == ui->cb_ports->currentText())
        {
            qDebug() << "установили" << portsInfoList[i].portName(); 
            serial->setPort(portsInfoList[i]);
            break;
        }
    }
    serial->open(QIODevice::ReadWrite);
    if (serial->isOpen())
         ui->te_info->setText("Порт открыт");
    else 
         ui->te_info->setText("Не удалось установить соединение");
        
}

void SerialPortDialog::serialReceive()
{
    QByteArray barray;
    barray = serial->readAll();
    double ti = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000;
    ui->customPlot->graph(0)->addData(ti,barray.toDouble());
}

void SerialPortDialog::on_pb_closePort_clicked()
{
    serial->close();
    ui->te_info->setText("Порт закрыт");
}

