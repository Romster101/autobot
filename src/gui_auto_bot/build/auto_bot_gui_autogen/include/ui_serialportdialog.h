/********************************************************************************
** Form generated from reading UI file 'serialportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORTDIALOG_H
#define UI_SERIALPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_SerialPortDialog
{
public:
    QCustomPlot *customPlot;
    QComboBox *cb_ports;
    QPushButton *pb_openPort;
    QPushButton *pb_closePort;
    QLabel *label;
    QTextEdit *te_info;

    void setupUi(QDialog *SerialPortDialog)
    {
        if (SerialPortDialog->objectName().isEmpty())
            SerialPortDialog->setObjectName(QString::fromUtf8("SerialPortDialog"));
        SerialPortDialog->resize(800, 600);
        customPlot = new QCustomPlot(SerialPortDialog);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(10, 180, 781, 411));
        cb_ports = new QComboBox(SerialPortDialog);
        cb_ports->setObjectName(QString::fromUtf8("cb_ports"));
        cb_ports->setEnabled(true);
        cb_ports->setGeometry(QRect(650, 70, 91, 31));
        pb_openPort = new QPushButton(SerialPortDialog);
        pb_openPort->setObjectName(QString::fromUtf8("pb_openPort"));
        pb_openPort->setGeometry(QRect(490, 30, 121, 41));
        pb_closePort = new QPushButton(SerialPortDialog);
        pb_closePort->setObjectName(QString::fromUtf8("pb_closePort"));
        pb_closePort->setGeometry(QRect(490, 90, 121, 41));
        label = new QLabel(SerialPortDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(640, 30, 121, 31));
        te_info = new QTextEdit(SerialPortDialog);
        te_info->setObjectName(QString::fromUtf8("te_info"));
        te_info->setGeometry(QRect(10, 20, 461, 141));

        retranslateUi(SerialPortDialog);

        QMetaObject::connectSlotsByName(SerialPortDialog);
    } // setupUi

    void retranslateUi(QDialog *SerialPortDialog)
    {
        SerialPortDialog->setWindowTitle(QCoreApplication::translate("SerialPortDialog", "SerialPortDialog", nullptr));
        pb_openPort->setText(QCoreApplication::translate("SerialPortDialog", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        pb_closePort->setText(QCoreApplication::translate("SerialPortDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        label->setText(QCoreApplication::translate("SerialPortDialog", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 \320\277\320\276\321\200\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialPortDialog: public Ui_SerialPortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTDIALOG_H
