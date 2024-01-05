/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *a_save;
    QAction *a_save_as;
    QAction *a_remote_controller;
    QAction *a_buildGraphic;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tbw_maps;
    QWidget *tab_drawnMap;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *gv_builtMap;
    QWidget *tab_realMap;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gb_orientationData;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QDoubleSpinBox *dsb_X;
    QDoubleSpinBox *dsb_theta;
    QDoubleSpinBox *dsb_Y;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pb_addPoint;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *m_file;
    QMenu *m_manual_guide;
    QMenu *m_PID;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1491, 1027);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/wIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("/*-----QWidget-----*/\n"
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
"QGraphicsView{\n"
"	background-color:rgba(25, 25, 25, 159);\n"
"}\n"
""));
        a_save = new QAction(MainWindow);
        a_save->setObjectName(QString::fromUtf8("a_save"));
        a_save_as = new QAction(MainWindow);
        a_save_as->setObjectName(QString::fromUtf8("a_save_as"));
        a_remote_controller = new QAction(MainWindow);
        a_remote_controller->setObjectName(QString::fromUtf8("a_remote_controller"));
        a_buildGraphic = new QAction(MainWindow);
        a_buildGraphic->setObjectName(QString::fromUtf8("a_buildGraphic"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tbw_maps = new QTabWidget(centralwidget);
        tbw_maps->setObjectName(QString::fromUtf8("tbw_maps"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(tbw_maps->sizePolicy().hasHeightForWidth());
        tbw_maps->setSizePolicy(sizePolicy);
        tbw_maps->setMinimumSize(QSize(803, 502));
        tbw_maps->setSizeIncrement(QSize(0, 0));
        tbw_maps->setBaseSize(QSize(0, 0));
        tbw_maps->setIconSize(QSize(16, 16));
        tab_drawnMap = new QWidget();
        tab_drawnMap->setObjectName(QString::fromUtf8("tab_drawnMap"));
        tab_drawnMap->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab_drawnMap->sizePolicy().hasHeightForWidth());
        tab_drawnMap->setSizePolicy(sizePolicy1);
        tab_drawnMap->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(tab_drawnMap);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gv_builtMap = new QGraphicsView(tab_drawnMap);
        gv_builtMap->setObjectName(QString::fromUtf8("gv_builtMap"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gv_builtMap->sizePolicy().hasHeightForWidth());
        gv_builtMap->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(gv_builtMap);

        tbw_maps->addTab(tab_drawnMap, QString());
        tab_realMap = new QWidget();
        tab_realMap->setObjectName(QString::fromUtf8("tab_realMap"));
        tbw_maps->addTab(tab_realMap, QString());

        horizontalLayout_2->addWidget(tbw_maps);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gb_orientationData = new QGroupBox(centralwidget);
        gb_orientationData->setObjectName(QString::fromUtf8("gb_orientationData"));
        gridLayout = new QGridLayout(gb_orientationData);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(gb_orientationData);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        dsb_X = new QDoubleSpinBox(gb_orientationData);
        dsb_X->setObjectName(QString::fromUtf8("dsb_X"));
        QFont font;
        font.setPointSize(12);
        dsb_X->setFont(font);
        dsb_X->setMinimum(-100000000000000000000.000000000000000);
        dsb_X->setMaximum(999999999999.000000000000000);

        gridLayout->addWidget(dsb_X, 0, 1, 1, 1);

        dsb_theta = new QDoubleSpinBox(gb_orientationData);
        dsb_theta->setObjectName(QString::fromUtf8("dsb_theta"));
        dsb_theta->setFont(font);
        dsb_theta->setMinimum(-99999999999999991433150857216.000000000000000);
        dsb_theta->setMaximum(10000000000000000905969664.000000000000000);

        gridLayout->addWidget(dsb_theta, 3, 1, 1, 1);

        dsb_Y = new QDoubleSpinBox(gb_orientationData);
        dsb_Y->setObjectName(QString::fromUtf8("dsb_Y"));
        dsb_Y->setFont(font);
        dsb_Y->setMinimum(-999999999999999945575230987042816.000000000000000);
        dsb_Y->setMaximum(99999999999999996863366107917975552.000000000000000);

        gridLayout->addWidget(dsb_Y, 1, 1, 1, 1);

        label = new QLabel(gb_orientationData);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(gb_orientationData);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout_2->addWidget(gb_orientationData);

        pb_addPoint = new QPushButton(centralwidget);
        pb_addPoint->setObjectName(QString::fromUtf8("pb_addPoint"));

        verticalLayout_2->addWidget(pb_addPoint);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1491, 22));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar{\n"
"font-color:white;\n"
"\n"
"}"));
        m_file = new QMenu(menubar);
        m_file->setObjectName(QString::fromUtf8("m_file"));
        m_manual_guide = new QMenu(menubar);
        m_manual_guide->setObjectName(QString::fromUtf8("m_manual_guide"));
        m_PID = new QMenu(menubar);
        m_PID->setObjectName(QString::fromUtf8("m_PID"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(m_file->menuAction());
        menubar->addAction(m_manual_guide->menuAction());
        menubar->addAction(m_PID->menuAction());
        m_file->addSeparator();
        m_file->addAction(a_save);
        m_file->addAction(a_save_as);
        m_manual_guide->addAction(a_remote_controller);
        m_PID->addAction(a_buildGraphic);

        retranslateUi(MainWindow);

        tbw_maps->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\274\320\276\320\261\320\270\320\273\321\214\320\275\321\213\320\274 \321\200\320\276\320\261\320\276\321\202\320\276\320\274", nullptr));
        a_save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        a_save_as->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272 ...", nullptr));
        a_remote_controller->setText(QApplication::translate("MainWindow", "\320\237\321\203\320\273\321\214\321\202 \320\264\320\270\321\201\321\202\320\260\320\275\321\206\320\270\320\276\320\275\320\275\320\276\320\263\320\276 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        a_buildGraphic->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\262\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        tbw_maps->setTabText(tbw_maps->indexOf(tab_drawnMap), QApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\266\320\265\320\273\320\260\320\265\320\274\320\276\320\263\320\276 \320\277\321\203\321\202\320\270", nullptr));
        tbw_maps->setTabText(tbw_maps->indexOf(tab_realMap), QApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \321\200\320\265\320\260\320\273\321\214\320\275\320\276\320\271 \320\272\320\260\321\200\321\202\321\213", nullptr));
        gb_orientationData->setTitle(QApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\276 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\270", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\316\270", nullptr));
        label->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "X", nullptr));
        pb_addPoint->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        m_file->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        m_manual_guide->setTitle(QApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        m_PID->setTitle(QApplication::translate("MainWindow", "\320\237\320\230\320\224-\321\200\320\265\320\263\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
