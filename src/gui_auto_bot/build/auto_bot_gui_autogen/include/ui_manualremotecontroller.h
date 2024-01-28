/********************************************************************************
** Form generated from reading UI file 'manualremotecontroller.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALREMOTECONTROLLER_H
#define UI_MANUALREMOTECONTROLLER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_manualRemoteController
{
public:
    QGridLayout *gridLayout;
    QPushButton *pb_rotatePlus;
    QPushButton *pb_forward;
    QPushButton *pb_unload;
    QPushButton *pb_back;
    QPushButton *pb_rotateMinus;

    void setupUi(QDialog *manualRemoteController)
    {
        if (manualRemoteController->objectName().isEmpty())
            manualRemoteController->setObjectName(QString::fromUtf8("manualRemoteController"));
        manualRemoteController->resize(500, 500);
        manualRemoteController->setMaximumSize(QSize(16777215, 54546));
        manualRemoteController->setStyleSheet(QString::fromUtf8("/*Copyright (c) DevSec Studio. All rights reserved.\n"
"\n"
"MIT License\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"of this software and associated documentation files (the \"Software\"), to deal\n"
"in the Software without restriction, including without limitation the rights\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
"copies of the Software, and to permit persons to whom the Software is\n"
"furnished to do so, subject to the following conditions:\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"copies or substantial portions of the Software.\n"
"\n"
"THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"LIABILITY, WHETHER IN AN ACT"
                        "ION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n"
"*/\n"
"\n"
"/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"	color: #000000;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
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
"	font-size: 8pt;\n"
"	font-weight: bold;\n"
"	width: 8"
                        "0px;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
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
"    top: 1px;\n"
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
"    margi"
                        "n-bottom: 0px;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"\n"
"}"));
        gridLayout = new QGridLayout(manualRemoteController);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pb_rotatePlus = new QPushButton(manualRemoteController);
        pb_rotatePlus->setObjectName(QString::fromUtf8("pb_rotatePlus"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(200);
        sizePolicy.setHeightForWidth(pb_rotatePlus->sizePolicy().hasHeightForWidth());
        pb_rotatePlus->setSizePolicy(sizePolicy);
        pb_rotatePlus->setMinimumSize(QSize(50, 50));
        pb_rotatePlus->setMaximumSize(QSize(150, 120));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/left_rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_rotatePlus->setIcon(icon);
        pb_rotatePlus->setIconSize(QSize(100, 100));

        gridLayout->addWidget(pb_rotatePlus, 1, 0, 1, 1);

        pb_forward = new QPushButton(manualRemoteController);
        pb_forward->setObjectName(QString::fromUtf8("pb_forward"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(255);
        sizePolicy1.setVerticalStretch(150);
        sizePolicy1.setHeightForWidth(pb_forward->sizePolicy().hasHeightForWidth());
        pb_forward->setSizePolicy(sizePolicy1);
        pb_forward->setMinimumSize(QSize(50, 0));
        pb_forward->setMaximumSize(QSize(150, 150));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_forward->setIcon(icon1);
        pb_forward->setIconSize(QSize(100, 100));

        gridLayout->addWidget(pb_forward, 0, 2, 1, 1);

        pb_unload = new QPushButton(manualRemoteController);
        pb_unload->setObjectName(QString::fromUtf8("pb_unload"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pb_unload->sizePolicy().hasHeightForWidth());
        pb_unload->setSizePolicy(sizePolicy2);
        pb_unload->setMaximumSize(QSize(154, 120));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/rolik.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_unload->setIcon(icon2);
        pb_unload->setIconSize(QSize(100, 100));

        gridLayout->addWidget(pb_unload, 1, 2, 1, 1);

        pb_back = new QPushButton(manualRemoteController);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pb_back->sizePolicy().hasHeightForWidth());
        pb_back->setSizePolicy(sizePolicy3);
        pb_back->setMinimumSize(QSize(50, 50));
        pb_back->setMaximumSize(QSize(150, 150));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_back->setIcon(icon3);
        pb_back->setIconSize(QSize(100, 100));

        gridLayout->addWidget(pb_back, 2, 2, 1, 1);

        pb_rotateMinus = new QPushButton(manualRemoteController);
        pb_rotateMinus->setObjectName(QString::fromUtf8("pb_rotateMinus"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(100);
        sizePolicy4.setVerticalStretch(100);
        sizePolicy4.setHeightForWidth(pb_rotateMinus->sizePolicy().hasHeightForWidth());
        pb_rotateMinus->setSizePolicy(sizePolicy4);
        pb_rotateMinus->setMinimumSize(QSize(50, 50));
        pb_rotateMinus->setMaximumSize(QSize(150, 120));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/right_rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_rotateMinus->setIcon(icon4);
        pb_rotateMinus->setIconSize(QSize(100, 100));

        gridLayout->addWidget(pb_rotateMinus, 1, 3, 1, 1);


        retranslateUi(manualRemoteController);

        QMetaObject::connectSlotsByName(manualRemoteController);
    } // setupUi

    void retranslateUi(QDialog *manualRemoteController)
    {
        manualRemoteController->setWindowTitle(QCoreApplication::translate("manualRemoteController", "\320\237\321\203\320\273\321\214\321\202 \320\264\320\270\321\201\321\202\320\260\320\275\321\206\320\270\320\276\320\275\320\275\320\276\320\263\320\276 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\274\320\276\320\261\320\270\320\273\321\214\320\275\321\213\320\274 \321\200\320\276\320\261\320\276\321\202\320\276\320\274", nullptr));
        pb_rotatePlus->setText(QString());
        pb_forward->setText(QString());
        pb_unload->setText(QString());
        pb_back->setText(QString());
        pb_rotateMinus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class manualRemoteController: public Ui_manualRemoteController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALREMOTECONTROLLER_H
