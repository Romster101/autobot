#include "include/stm_translator/main.h"
#include "QSerialPort"
#include "QSerialPortInfo"
#include "qdebug.h"

QSerialPort serial;
QSerialPortInfo serialInfo;

void Callback(const std_msgs::String::ConstPtr &msg)
{
    if (serial.isOpen())
    {
        qDebug()<<msg->data.c_str();
        serial.write(msg->data.c_str());
    }
    //ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char *argv[])
{
    QList<QSerialPortInfo> portsInfoList;
    portsInfoList = QSerialPortInfo::availablePorts();

    for (QSerialPortInfo &info : portsInfoList)
    {
        qDebug()<<info.description();
       if (info.description() == QString("hamster controller"))
       {
            serialInfo = info;
            qDebug()<<serial.isOpen();
            serial.setPort(serialInfo);
            serial.open(QIODevice::ReadWrite);
            qDebug()<<serial.isOpen();
       }
    }

 //   serial.setPort();

    ros::init(argc, argv, "stm_transponder");
    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("wheel_Vel_Target", 10, Callback);

    ros::spin();
    return 0;
}