/********************************************************************************
** Form generated from reading UI file 'serialportwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORTWIDGET_H
#define UI_SERIALPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QCustomPlot *widget;
    QComboBox *cb_ports;
    QPushButton *pb_openPort;
    QPushButton *pb_closePort;
    QTextEdit *te_info;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new QCustomPlot(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 140, 761, 431));
        cb_ports = new QComboBox(Widget);
        cb_ports->setObjectName(QString::fromUtf8("cb_ports"));
        cb_ports->setGeometry(QRect(660, 70, 101, 31));
        pb_openPort = new QPushButton(Widget);
        pb_openPort->setObjectName(QString::fromUtf8("pb_openPort"));
        pb_openPort->setGeometry(QRect(530, 30, 111, 31));
        pb_closePort = new QPushButton(Widget);
        pb_closePort->setObjectName(QString::fromUtf8("pb_closePort"));
        pb_closePort->setGeometry(QRect(530, 70, 111, 31));
        te_info = new QTextEdit(Widget);
        te_info->setObjectName(QString::fromUtf8("te_info"));
        te_info->setGeometry(QRect(20, 20, 491, 101));
        te_info->setReadOnly(true);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(660, 30, 131, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pb_openPort->setText(QApplication::translate("Widget", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        pb_closePort->setText(QApplication::translate("Widget", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        label->setText(QApplication::translate("Widget", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 \320\277\320\276\321\200\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTWIDGET_H
