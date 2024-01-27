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
    QComboBox *cb_ports;
    QPushButton *pb_closePort;
    QListView *lv_output;
    QLabel *label;
    QPushButton *pb_openPort;
    QPushButton *pb_updatePorts;
    QCustomPlot *customPlot;

    void setupUi(QDialog *SerialPortDialog)
    {
        if (SerialPortDialog->objectName().isEmpty())
            SerialPortDialog->setObjectName(QString::fromUtf8("SerialPortDialog"));
        SerialPortDialog->resize(734, 527);
        SerialPortDialog->setStyleSheet(QString::fromUtf8("/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: rgba(36, 36, 36);\n"
"	color: white;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"QMenuBar{\n"
"	color: white;\n"
"}\n"
"\n"
"QDoubleSpinBox{\n"
"	color:white;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	color:white;\n"
"}\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"	font-size: 14pt;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QToolButton-----*/\n"
"QToolButton\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(254, 171, 66, 255),stop:1 rgba(255, 153, 0, 255));\n"
"	color: #000;\n"
"	font-size: 14pt;\n"
"	border-radius: 4px;\n"
"	padding: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::pressed\n"
"{\n"
"	background-color: #6b960f;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTabWidget-----*/\n"
"QTabBar::tab\n"
"{\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"	width: 250px;\n"
"	height: 30px;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
""
                        "	border-top-style: none;\n"
"    background-color: #323232;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"\n"
"}\n"
"\n"
"QTabWidget::pane \n"
"{\n"
"    border: 1px solid qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(254, 171, 66, 255),stop:1 rgba(255, 153, 0, 255));\n"
" \n"
"\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; \n"
"\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
"	margin-left: 0px; \n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #fff;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(254, 171, 66, 255),stop:1 rgba(255, 153, 0, 255));\n"
"	color: #000;\n"
"    margin-bottom: 0px;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    background"
                        "-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"\n"
"}\n"
"\n"
"QListView\n"
"{\n"
" background-color:rgb(85, 87, 83);\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
" background-color:rgb(85, 87, 83);\n"
"}\n"
""));
        gridLayout = new QGridLayout(SerialPortDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cb_ports = new QComboBox(SerialPortDialog);
        cb_ports->setObjectName(QString::fromUtf8("cb_ports"));
        cb_ports->setEnabled(true);

        gridLayout->addWidget(cb_ports, 1, 2, 1, 1);

        pb_closePort = new QPushButton(SerialPortDialog);
        pb_closePort->setObjectName(QString::fromUtf8("pb_closePort"));

        gridLayout->addWidget(pb_closePort, 2, 1, 1, 1);

        lv_output = new QListView(SerialPortDialog);
        lv_output->setObjectName(QString::fromUtf8("lv_output"));
        lv_output->setAutoScroll(false);
        lv_output->setMovement(QListView::Free);

        gridLayout->addWidget(lv_output, 0, 0, 3, 1);

        label = new QLabel(SerialPortDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        pb_openPort = new QPushButton(SerialPortDialog);
        pb_openPort->setObjectName(QString::fromUtf8("pb_openPort"));
        pb_openPort->setEnabled(true);

        gridLayout->addWidget(pb_openPort, 0, 1, 1, 1);

        pb_updatePorts = new QPushButton(SerialPortDialog);
        pb_updatePorts->setObjectName(QString::fromUtf8("pb_updatePorts"));

        gridLayout->addWidget(pb_updatePorts, 1, 1, 1, 1);

        customPlot = new QCustomPlot(SerialPortDialog);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));

        gridLayout->addWidget(customPlot, 3, 0, 1, 3);


        retranslateUi(SerialPortDialog);

        QMetaObject::connectSlotsByName(SerialPortDialog);
    } // setupUi

    void retranslateUi(QDialog *SerialPortDialog)
    {
        SerialPortDialog->setWindowTitle(QApplication::translate("SerialPortDialog", "\320\236\320\272\320\275\320\276 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 PID-\321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200\320\260", nullptr));
        pb_closePort->setText(QApplication::translate("SerialPortDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        label->setText(QApplication::translate("SerialPortDialog", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 \320\277\320\276\321\200\321\202\321\213", nullptr));
        pb_openPort->setText(QApplication::translate("SerialPortDialog", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        pb_updatePorts->setText(QApplication::translate("SerialPortDialog", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \320\277\320\276\321\200\321\202\321\213 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialPortDialog: public Ui_SerialPortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTDIALOG_H
