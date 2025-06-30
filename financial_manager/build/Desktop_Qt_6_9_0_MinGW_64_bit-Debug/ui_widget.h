/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *lb1;
    QLabel *lb2;
    QLabel *lb3;
    QPushButton *pb11;
    QPushButton *pb12;
    QPushButton *pb13;
    QPushButton *pb14;
    QPushButton *pb15;
    QPushButton *pb21;
    QPushButton *pb22;
    QPushButton *pb31;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(750, 500);
        Widget->setMinimumSize(QSize(750, 500));
        Widget->setMaximumSize(QSize(750, 500));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 91, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        lb1 = new QLabel(Widget);
        lb1->setObjectName("lb1");
        lb1->setGeometry(QRect(90, 10, 131, 31));
        lb2 = new QLabel(Widget);
        lb2->setObjectName("lb2");
        lb2->setGeometry(QRect(210, 10, 151, 31));
        lb3 = new QLabel(Widget);
        lb3->setObjectName("lb3");
        lb3->setGeometry(QRect(340, 10, 111, 31));
        pb11 = new QPushButton(Widget);
        pb11->setObjectName("pb11");
        pb11->setGeometry(QRect(60, 40, 121, 41));
        pb12 = new QPushButton(Widget);
        pb12->setObjectName("pb12");
        pb12->setGeometry(QRect(60, 80, 121, 41));
        pb13 = new QPushButton(Widget);
        pb13->setObjectName("pb13");
        pb13->setGeometry(QRect(60, 120, 121, 41));
        pb14 = new QPushButton(Widget);
        pb14->setObjectName("pb14");
        pb14->setGeometry(QRect(60, 160, 121, 41));
        pb15 = new QPushButton(Widget);
        pb15->setObjectName("pb15");
        pb15->setGeometry(QRect(60, 200, 121, 41));
        pb21 = new QPushButton(Widget);
        pb21->setObjectName("pb21");
        pb21->setGeometry(QRect(180, 40, 121, 41));
        pb22 = new QPushButton(Widget);
        pb22->setObjectName("pb22");
        pb22->setGeometry(QRect(180, 80, 121, 41));
        pb31 = new QPushButton(Widget);
        pb31->setObjectName("pb31");
        pb31->setGeometry(QRect(300, 40, 121, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Financial manager", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\360\237\221\211", nullptr));
        lb1->setText(QCoreApplication::translate("Widget", "\350\256\260\345\275\225\346\223\215\344\275\234", nullptr));
        lb2->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266\346\223\215\344\275\234", nullptr));
        lb3->setText(QCoreApplication::translate("Widget", "\345\270\256\345\212\251", nullptr));
        pb11->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
        pb12->setText(QCoreApplication::translate("Widget", "\347\274\226\350\276\221\350\256\260\345\275\225", nullptr));
        pb13->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        pb14->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213\350\256\260\345\275\225", nullptr));
        pb15->setText(QCoreApplication::translate("Widget", "\347\224\237\346\210\220\346\212\245\345\221\212", nullptr));
        pb21->setText(QCoreApplication::translate("Widget", "\344\273\216\346\226\207\344\273\266\350\257\273\345\205\245", nullptr));
        pb22->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\345\210\260\346\226\207\344\273\266", nullptr));
        pb31->setText(QCoreApplication::translate("Widget", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
