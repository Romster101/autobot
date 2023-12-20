#include "serialportdialog.h"
#include "ui_serialportdialog.h"

SerialPortDialog::SerialPortDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::SerialPortDialog)
{
    ui->setupUi(this);
    portsInfoList = QSerialPortInfo::availablePorts();
    for (QSerialPortInfo &info : portsInfoList)
    {
        ui->cb_ports->addItem(info.portName());
    }
    serial = new QSerialPort();
    ui->customPlot->addGraph(0);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    QSharedPointer<QCPAxisTickerDateTime> dateTicker(new QCPAxisTickerDateTime);
    dateTicker->setDateTimeFormat("hh::mm::ss");
    ui->customPlot->xAxis->setTicker(dateTicker);
   
    connect(serial, &QSerialPort::readyRead, this, &SerialPortDialog::serialReceive);
    connect(serial, &QSerialPort::errorOccurred, this, &SerialPortDialog::serialError);
}

SerialPortDialog::~SerialPortDialog()
{
    delete ui;
    delete serial;
}

void SerialPortDialog::on_pb_openPort_clicked()
{
    if (portsInfoList.isEmpty())
    {
        ui->te_info->setText("ports not found");
        return;
    }
    serial->setPort(portsInfoList.at(ui->cb_ports->currentIndex()));
    serial->open(QIODevice::ReadOnly);
    if (serial->isOpen())
        ui->te_info->setText("Порт открыт");
    else
        ui->te_info->setText("Не удалось установить соединение");
}

void SerialPortDialog::serialReceive()
{
    QByteArray barray;
    barray = serial->readAll();
    double ti1 = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000;
    if (barray.toDouble()!=0){
    ui->customPlot->graph(0)->addData(ti1, barray.toDouble());
    qDebug() << barray.toDouble();
    ui->customPlot->replot();
    ui->customPlot->rescaleAxes();
    }
}

void SerialPortDialog::serialError(QSerialPort::SerialPortError err)
{
    switch (err)
    {
    case QSerialPort::PermissionError:
    case QSerialPort::ParityError:
    case QSerialPort::BreakConditionError:
    case QSerialPort::FramingError:
    case QSerialPort::WriteError:
    case QSerialPort::ReadError:
    case QSerialPort::UnsupportedOperationError:
    case QSerialPort::UnknownError:
    case QSerialPort::TimeoutError:
    {
        ui->te_info->setText("warp error");
        break;
    }
    case QSerialPort::NoError:
    {
        ui->te_info->setText("");
        break;
    }
    case QSerialPort::OpenError:
    {
        ui->te_info->setText("port open error");
        break;
    }
    case QSerialPort::DeviceNotFoundError:
    {
        ui->te_info->setText("port not found");
        break;
    }
    case QSerialPort::NotOpenError:
    {
        ui->te_info->setText("port already close");
        break;
    }
    case QSerialPort::ResourceError:
    {
        ui->te_info->setText("port connection lose");
        break;
    }
    }
}

void SerialPortDialog::on_pb_closePort_clicked()
{
    serial->close();
    ui->te_info->setText("Порт закрыт");
}
