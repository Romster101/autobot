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
    dateTicker->setDateTimeFormat("hh::mm::ss.zzz");
    ui->customPlot->xAxis->setTicker(dateTicker);
    model = new QStringListModel();
    model->setStringList(outputList);
    ui->lv_output->setModel(model);
    connect(serial, &QSerialPort::readyRead, this, &SerialPortDialog::serialReceive);
    connect(serial, &QSerialPort::errorOccurred, this, &SerialPortDialog::serialError);
}

SerialPortDialog::~SerialPortDialog()
{
    delete ui;
    delete serial;
    delete model;
}

void SerialPortDialog::addOutPutMsg(QString msg)
{
    QDateTime ti = QDateTime::currentDateTime();
    outputList.push_front(ti.toString("hh:mm:ss.zzz") + " " + msg);
    ui->lv_output->update();
    model->setStringList(outputList);
}

void SerialPortDialog::on_pb_openPort_clicked()
{
    if (portsInfoList.isEmpty())
    {
        addOutPutMsg("Порты не найдены");
        return;
    }
    serial->setPort(portsInfoList.at(ui->cb_ports->currentIndex()));
    serial->open(QIODevice::ReadOnly);
    if (serial->isOpen())
        addOutPutMsg("Порт открыт");
    else
        addOutPutMsg("Не удалось установить соединение");
}

void SerialPortDialog::on_pb_updatePorts_clicked()
{
    ui->cb_ports->clear();
    portsInfoList = QSerialPortInfo::availablePorts();
    for (QSerialPortInfo &info : portsInfoList)
    {
        ui->cb_ports->addItem(info.portName());
    }
}

void SerialPortDialog::serialReceive()
{
    QByteArray barray;
    barray = serial->readAll();
    double ti1 = QDateTime::currentDateTime().toMSecsSinceEpoch() / 1000;
    if (barray.toDouble() != 0)
    {
        qDebug() << barray.toDouble();
        ui->customPlot->graph(0)->addData(ti1, barray.toDouble());
        ui->customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, Qt::red, Qt::white, 7));        
        ui->customPlot->replot();
        ui->customPlot->rescaleAxes();
    }
}

void SerialPortDialog::serialError(QSerialPort::SerialPortError err)
{
    switch (err)
    {
    case QSerialPort::PermissionError:
    {
        addOutPutMsg("Ошибка разрешения.Напишите в терминал команду sudo chmod 666 /dev/ttyACM0");
        break;
    }
    case QSerialPort::ParityError:
    case QSerialPort::BreakConditionError:
    case QSerialPort::FramingError:
    case QSerialPort::WriteError:
    case QSerialPort::ReadError:
    case QSerialPort::UnsupportedOperationError:
    case QSerialPort::UnknownError:
    case QSerialPort::TimeoutError:
    {
        addOutPutMsg("warp error");
        break;
    }
    case QSerialPort::NoError:
    {
        break;
    }
    case QSerialPort::OpenError:
    {
        addOutPutMsg("Ошибка открытия порта");
        break;
    }
    case QSerialPort::DeviceNotFoundError:
    {
        addOutPutMsg("Порт не найден");
        break;
    }
    case QSerialPort::NotOpenError:
    {
        addOutPutMsg("Порт уже закрыт");
        break;
    }
    case QSerialPort::ResourceError:
    {
        addOutPutMsg("Потеряно соединение с портом");
        break;
    }
    }
}

void SerialPortDialog::on_pb_closePort_clicked()
{
    serial->close();
    if (!serial->isOpen())
        addOutPutMsg("Порт закрыт");
}
