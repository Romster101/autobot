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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ItemInputInfo
{
public:
    QLabel *label;
    QPushButton *pb_confirm;
    QPushButton *pb_cancel;
    QSpinBox *sb_angle;

    void setupUi(QDialog *ItemInputInfo)
    {
        if (ItemInputInfo->objectName().isEmpty())
            ItemInputInfo->setObjectName(QString::fromUtf8("ItemInputInfo"));
        ItemInputInfo->resize(345, 106);
        ItemInputInfo->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"	color: white;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label = new QLabel(ItemInputInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 20, 141, 31));
        pb_confirm = new QPushButton(ItemInputInfo);
        pb_confirm->setObjectName(QString::fromUtf8("pb_confirm"));
        pb_confirm->setGeometry(QRect(120, 70, 102, 25));
        pb_cancel = new QPushButton(ItemInputInfo);
        pb_cancel->setObjectName(QString::fromUtf8("pb_cancel"));
        pb_cancel->setGeometry(QRect(240, 70, 80, 25));
        sb_angle = new QSpinBox(ItemInputInfo);
        sb_angle->setObjectName(QString::fromUtf8("sb_angle"));
        sb_angle->setGeometry(QRect(170, 20, 71, 31));
        sb_angle->setMinimum(-10000);
        sb_angle->setMaximum(10000);

        retranslateUi(ItemInputInfo);

        QMetaObject::connectSlotsByName(ItemInputInfo);
    } // setupUi

    void retranslateUi(QDialog *ItemInputInfo)
    {
        ItemInputInfo->setWindowTitle(QApplication::translate("ItemInputInfo", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \321\200\320\276\320\261\320\276\321\202\320\260", nullptr));
        label->setText(QApplication::translate("ItemInputInfo", "\320\243\320\263\320\276\320\273 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260", nullptr));
        pb_confirm->setText(QApplication::translate("ItemInputInfo", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        pb_cancel->setText(QApplication::translate("ItemInputInfo", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemInputInfo: public Ui_ItemInputInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMINPUTINFO_H
