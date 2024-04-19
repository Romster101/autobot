#!/usr/bin/env python3

import re, sys
import rospy
import roslib
from PyQt5.QtSerialPort import QSerialPort, QSerialPortInfo
from PyQt5.QtWidgets import *
from PyQt5 import *
from PyQt5.QtGui import *
from PyQt5.QtCore import *
from std_msgs.msg import String, Int16

#mySerialPort = serial.Serial(port) 
serialPort = QSerialPort()

def callbackSerial():
    msg = serialPort.readLine()
    rospy.loginfo(str(msg, 'utf-8').strip())
    #arrMsg = re.split("_|;", msg)
        #pubr.publish(arrMsg[0])
        #publ.publish(arrMsg[1])

def callback(data):
    serialPort.write(data.data.encode())
    rospy.loginfo(data.data.encode())

def main():
    app = QCoreApplication(sys.argv)

    rospy.init_node("stm_transmit")
    rospy.Subscriber("wheel_Vel_Target", String, callback)
    pubr = rospy.Publisher('rencoder', Int16, queue_size = 10)
    publ = rospy.Publisher('lencoder', Int16, queue_size = 10)
    rate = rospy.Rate(10)

    ports = QSerialPortInfo().availablePorts()

    portlist = []
    for port in ports:
        portlist.append(port.portName())
    rospy.loginfo(portlist)

    port = "/dev/ttyACM4"
    serialPort.setPortName(port)
    serialPort.open(QIODevice.ReadWrite)
    if not serialPort.isOpen():
        rospy.loginfo(f"{serialPort.isOpen()} port not open")
    rospy.loginfo("port connect")
    serialPort.readyRead.connect(callbackSerial)

   # line = []
    #while not rospy.is_shutdown:
        
     #   msg = mySerialPort.readline()#.decode('utf-8')
      #  rospy.loginfo(msg)
        #arrMsg = re.split("_|;", msg)
        #pubr.publish(arrMsg[0])
        #publ.publish(arrMsg[1])
       # rate.sleep()
        #time.sleep(0.1)

    
    rospy.spin()
   # sys.exit(app.exec_())
    serialPort.close()

main()
