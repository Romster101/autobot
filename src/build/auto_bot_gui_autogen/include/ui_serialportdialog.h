/********************************************************************************
** Form generated from reading UI file 'serialportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORTDIALOG_H
#define UI_SERIALPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_SerialPortDialog
{
public:
    QGridLayout *gridLayout;
    QListView *lv_output;
    QPushButton *pb_openPort;
    QLabel *label;
    QPushButton *pb_closePort;
    QComboBox *cb_ports;
    QCustomPlot *customPlot;

    void setupUi(QDialog *SerialPortDialog)
    {
        if (SerialPortDialog->objectName().isEmpty())
            SerialPortDialog->setObjectName(QString::fromUtf8("SerialPortDialog"));
        SerialPortDialog->resize(734, 527);
        gridLayout = new QGridLayout(SerialPortDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lv_output = new QListView(SerialPortDialog);
        lv_output->setObjectName(QString::fromUtf8("lv_output"));
        lv_output->setAutoScroll(false);
        lv_output->setMovement(QListView::Free);

        gridLayout->addWidget(lv_output, 0, 0, 2, 1);

        pb_openPort = new QPushButton(SerialPortDialog);
        pb_openPort->setObjectName(QString::fromUtf8("pb_openPort"));
        pb_openPort->setEnabled(true);

        gridLayout->addWidget(pb_openPort, 0, 1, 1, 1);

        label = new QLabel(SerialPortDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        pb_closePort = new QPushButton(SerialPortDialog);
        pb_closePort->setObjectName(QString::fromUtf8("pb_closePort"));

        gridLayout->addWidget(pb_closePort, 1, 1, 1, 1);

        cb_ports = new QComboBox(SerialPortDialog);
        cb_ports->setObjectName(QString::fromUtf8("cb_ports"));
        cb_ports->setEnabled(true);

        gridLayout->addWidget(cb_ports, 1, 2, 1, 1);

        customPlot = new QCustomPlot(SerialPortDialog);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));

        gridLayout->addWidget(customPlot, 2, 0, 1, 3);


        retranslateUi(SerialPortDialog);

        QMetaObject::connectSlotsByName(SerialPortDialog);
    } // setupUi

    void retranslateUi(QDialog *SerialPortDialog)
    {
        SerialPortDialog->setWindowTitle(QApplication::translate("SerialPortDialog", "\320\236\320\272\320\275\320\276 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 PID-\321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200\320\260", nullptr));
        pb_openPort->setText(QApplication::translate("SerialPortDialog", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        label->setText(QApplication::translate("SerialPortDialog", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 \320\277\320\276\321\200\321\202\321\213", nullptr));
        pb_closePort->setText(QApplication::translate("SerialPortDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialPortDialog: public Ui_SerialPortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTDIALOG_H
