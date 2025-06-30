/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *ar;
    QPushButton *er;
    QPushButton *dr;
    QPushButton *vr;
    QPushButton *he;
    QPushButton *lf;
    QPushButton *sf;
    QPushButton *gr;
    QPushButton *leave;
    QLabel *Meni;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(750, 500);
        QFont font;
        font.setPointSize(12);
        Menu->setFont(font);
        ar = new QPushButton(Menu);
        ar->setObjectName("ar");
        ar->setGeometry(QRect(50, 160, 131, 51));
        er = new QPushButton(Menu);
        er->setObjectName("er");
        er->setGeometry(QRect(210, 160, 131, 51));
        dr = new QPushButton(Menu);
        dr->setObjectName("dr");
        dr->setGeometry(QRect(380, 160, 131, 51));
        vr = new QPushButton(Menu);
        vr->setObjectName("vr");
        vr->setGeometry(QRect(550, 160, 131, 51));
        he = new QPushButton(Menu);
        he->setObjectName("he");
        he->setGeometry(QRect(550, 250, 131, 51));
        lf = new QPushButton(Menu);
        lf->setObjectName("lf");
        lf->setGeometry(QRect(380, 250, 131, 51));
        sf = new QPushButton(Menu);
        sf->setObjectName("sf");
        sf->setGeometry(QRect(210, 250, 131, 51));
        gr = new QPushButton(Menu);
        gr->setObjectName("gr");
        gr->setGeometry(QRect(50, 250, 131, 51));
        leave = new QPushButton(Menu);
        leave->setObjectName("leave");
        leave->setGeometry(QRect(600, 430, 101, 31));
        leave->setFont(font);
        Meni = new QLabel(Menu);
        Meni->setObjectName("Meni");
        Meni->setGeometry(QRect(50, 30, 91, 31));
        QFont font1;
        font1.setPointSize(14);
        Meni->setFont(font1);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        ar->setText(QCoreApplication::translate("Menu", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
        er->setText(QCoreApplication::translate("Menu", "\347\274\226\350\276\221\350\256\260\345\275\225", nullptr));
        dr->setText(QCoreApplication::translate("Menu", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        vr->setText(QCoreApplication::translate("Menu", "\346\237\245\347\234\213\350\256\260\345\275\225", nullptr));
        he->setText(QCoreApplication::translate("Menu", "\345\270\256\345\212\251", nullptr));
        lf->setText(QCoreApplication::translate("Menu", "\344\273\216\346\226\207\344\273\266\350\257\273\345\217\226", nullptr));
        sf->setText(QCoreApplication::translate("Menu", "\344\277\235\345\255\230\345\210\260\346\226\207\344\273\266", nullptr));
        gr->setText(QCoreApplication::translate("Menu", "\347\224\237\346\210\220\346\212\245\345\221\212", nullptr));
        leave->setText(QCoreApplication::translate("Menu", "\351\200\200\345\207\272 ", nullptr));
        Meni->setText(QCoreApplication::translate("Menu", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
