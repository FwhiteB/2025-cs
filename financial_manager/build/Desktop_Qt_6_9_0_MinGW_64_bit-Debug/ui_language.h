/********************************************************************************
** Form generated from reading UI file 'language.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGE_H
#define UI_LANGUAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Language
{
public:
    QLabel *select_label;
    QGroupBox *groupBox;
    QRadioButton *Chi;
    QRadioButton *Eng;
    QPushButton *commit_button;
    QPushButton *leave_button;

    void setupUi(QWidget *Language)
    {
        if (Language->objectName().isEmpty())
            Language->setObjectName("Language");
        Language->resize(750, 500);
        select_label = new QLabel(Language);
        select_label->setObjectName("select_label");
        select_label->setGeometry(QRect(60, 30, 411, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        select_label->setFont(font);
        groupBox = new QGroupBox(Language);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 140, 241, 151));
        groupBox->setStyleSheet(QString::fromUtf8("border: 0;"));
        Chi = new QRadioButton(groupBox);
        Chi->setObjectName("Chi");
        Chi->setGeometry(QRect(30, 30, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        Chi->setFont(font1);
        Eng = new QRadioButton(groupBox);
        Eng->setObjectName("Eng");
        Eng->setGeometry(QRect(30, 90, 118, 23));
        Eng->setFont(font1);
        commit_button = new QPushButton(Language);
        commit_button->setObjectName("commit_button");
        commit_button->setGeometry(QRect(80, 360, 131, 41));
        QFont font2;
        font2.setPointSize(12);
        commit_button->setFont(font2);
        leave_button = new QPushButton(Language);
        leave_button->setObjectName("leave_button");
        leave_button->setGeometry(QRect(510, 360, 131, 41));
        leave_button->setFont(font2);

        retranslateUi(Language);

        QMetaObject::connectSlotsByName(Language);
    } // setupUi

    void retranslateUi(QWidget *Language)
    {
        Language->setWindowTitle(QCoreApplication::translate("Language", "Form", nullptr));
        select_label->setText(QCoreApplication::translate("Language", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\257\267\351\200\211\346\213\251\350\257\255\350\250\200</span></p><p><span style=\" font-size:14pt;\">please select the language</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        Chi->setText(QCoreApplication::translate("Language", "\344\270\255\346\226\207", nullptr));
        Eng->setText(QCoreApplication::translate("Language", "English", nullptr));
        commit_button->setText(QCoreApplication::translate("Language", "\347\241\256\350\256\244", nullptr));
        leave_button->setText(QCoreApplication::translate("Language", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Language: public Ui_Language {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGE_H
