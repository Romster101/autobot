/********************************************************************************
** Form generated from reading UI file 'iteminputinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMINPUTINFO_H
#define UI_ITEMINPUTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemInputInfo
{
public:
    QPushButton *pb_confirm;
    QPushButton *pb_cancel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *sb_X;
    QLabel *label;
    QSpinBox *sb_Y;
    QLabel *label_2;
    QSpinBox *sb_angle;
    QLabel *label_3;
    QCheckBox *chb_cargo_out;
    QLabel *label_4;

    void setupUi(QDialog *ItemInputInfo)
    {
        if (ItemInputInfo->objectName().isEmpty())
            ItemInputInfo->setObjectName(QString::fromUtf8("ItemInputInfo"));
        ItemInputInfo->resize(350, 218);
        ItemInputInfo->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: #212121;\n"
"	color: white;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        pb_confirm = new QPushButton(ItemInputInfo);
        pb_confirm->setObjectName(QString::fromUtf8("pb_confirm"));
        pb_confirm->setGeometry(QRect(140, 180, 102, 25));
        pb_cancel = new QPushButton(ItemInputInfo);
        pb_cancel->setObjectName(QString::fromUtf8("pb_cancel"));
        pb_cancel->setGeometry(QRect(260, 180, 80, 25));
        gridLayoutWidget = new QWidget(ItemInputInfo);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 10, 271, 160));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sb_X = new QSpinBox(gridLayoutWidget);
        sb_X->setObjectName(QString::fromUtf8("sb_X"));
        QFont font;
        font.setPointSize(14);
        sb_X->setFont(font);
        sb_X->setMinimum(-10000);
        sb_X->setMaximum(10000);

        gridLayout->addWidget(sb_X, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        sb_Y = new QSpinBox(gridLayoutWidget);
        sb_Y->setObjectName(QString::fromUtf8("sb_Y"));
        sb_Y->setFont(font);
        sb_Y->setMinimum(-10000);
        sb_Y->setMaximum(10000);

        gridLayout->addWidget(sb_Y, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        sb_angle = new QSpinBox(gridLayoutWidget);
        sb_angle->setObjectName(QString::fromUtf8("sb_angle"));
        sb_angle->setFont(font);
        sb_angle->setMinimum(-360);
        sb_angle->setMaximum(360);

        gridLayout->addWidget(sb_angle, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        chb_cargo_out = new QCheckBox(gridLayoutWidget);
        chb_cargo_out->setObjectName(QString::fromUtf8("chb_cargo_out"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chb_cargo_out->sizePolicy().hasHeightForWidth());
        chb_cargo_out->setSizePolicy(sizePolicy);
        chb_cargo_out->setMinimumSize(QSize(50, 50));
        chb_cargo_out->setLayoutDirection(Qt::LeftToRight);
        chb_cargo_out->setStyleSheet(QString::fromUtf8("QCheckBox::indicator{height: 25px; width: 25px;}"));

        gridLayout->addWidget(chb_cargo_out, 3, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);


        retranslateUi(ItemInputInfo);

        QMetaObject::connectSlotsByName(ItemInputInfo);
    } // setupUi

    void retranslateUi(QDialog *ItemInputInfo)
    {
        ItemInputInfo->setWindowTitle(QApplication::translate("ItemInputInfo", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\271 \321\202\320\276\321\207\320\272\320\270 \320\275\320\260\320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \321\200\320\276\320\261\320\276\321\202\320\260", nullptr));
        pb_confirm->setText(QApplication::translate("ItemInputInfo", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        pb_cancel->setText(QApplication::translate("ItemInputInfo", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QApplication::translate("ItemInputInfo", "\320\243\320\263\320\276\320\273 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260", nullptr));
        label_2->setText(QApplication::translate("ItemInputInfo", "X", nullptr));
        label_3->setText(QApplication::translate("ItemInputInfo", "Y", nullptr));
        chb_cargo_out->setText(QString());
        label_4->setText(QApplication::translate("ItemInputInfo", "\320\222\321\213\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemInputInfo: public Ui_ItemInputInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMINPUTINFO_H
