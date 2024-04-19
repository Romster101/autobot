#!/usr/bin/env python3

import re, sys
import rospy
import roslib
from PyQt5.QtSerialPort import QSerialPort, QSerialPortInfo
from PyQt5.QtCore import *
from std_msgs.msg import String, Int16

#mySerialPort = serial.Serial(port) 
serialPort = QSerialPort()
rospy.init_node("stm_transmit")
pubr = rospy.Publisher('rencoder', Int16, queue_size = 10)
publ = rospy.Publisher('lencoder', Int16, queue_size = 10)
triggerMSG = False
dataMSG = "0.0 0.0;"

def callbackSerial():
    msg = serialPort.readLine()
    data = str(msg, 'utf-8').strip()
    arrMsg = re.split(" ", data)
    #rospy.loginfo(data)
    pubr.publish(int(arrMsg[0]))
    publ.publish(int(arrMsg[1]))

def callback(data):
    global dataMSG
    global triggerMSG
    dataMSG = data.data
    triggerMSG = True
    #rospy.loginfo(data.data)

def main():
    app = QCoreApplication(sys.argv)
    ports = QSerialPortInfo().availablePorts()
    portlist = []
    for port in ports:
        portlist.append(port.portName())
    rospy.loginfo(portlist)

    port = "/dev/ttyACM1"
    serialPort.setPortName(port)
    serialPort.open(QIODevice.ReadWrite)
    if not serialPort.isOpen():
        rospy.loginfo(f"{serialPort.isOpen()} port not open")

    serialPort.readyRead.connect(callbackSerial)
    rospy.Subscriber("wheel_Vel_Target", String, callback)

    while not rospy.is_shutdown():
        QCoreApplication.processEvents()
        global triggerMSG
        global dataMSG
        if triggerMSG == True:
            triggerMSG = False
            serialPort.write(dataMSG.encode())

    serialPort.close()

main()
