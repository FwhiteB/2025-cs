/********************************************************************************
** Form generated from reading UI file 'delete_record.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_RECORD_H
#define UI_DELETE_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Delete_record
{
public:
    QLineEdit *lineEdit;
    QLabel *delete_record;
    QLabel *number;
    QPushButton *delete_2;
    QPushButton *back;

    void setupUi(QWidget *Delete_record)
    {
        if (Delete_record->objectName().isEmpty())
            Delete_record->setObjectName("Delete_record");
        Delete_record->resize(750, 500);
        lineEdit = new QLineEdit(Delete_record);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(230, 170, 211, 31));
        delete_record = new QLabel(Delete_record);
        delete_record->setObjectName("delete_record");
        delete_record->setGeometry(QRect(50, 30, 111, 51));
        QFont font;
        font.setPointSize(14);
        delete_record->setFont(font);
        number = new QLabel(Delete_record);
        number->setObjectName("number");
        number->setGeometry(QRect(50, 170, 141, 21));
        QFont font1;
        font1.setPointSize(12);
        number->setFont(font1);
        delete_2 = new QPushButton(Delete_record);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(50, 410, 121, 41));
        delete_2->setFont(font1);
        back = new QPushButton(Delete_record);
        back->setObjectName("back");
        back->setGeometry(QRect(580, 410, 121, 41));
        back->setFont(font1);

        retranslateUi(Delete_record);

        QMetaObject::connectSlotsByName(Delete_record);
    } // setupUi

    void retranslateUi(QWidget *Delete_record)
    {
        Delete_record->setWindowTitle(QCoreApplication::translate("Delete_record", "Form", nullptr));
        delete_record->setText(QCoreApplication::translate("Delete_record", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        number->setText(QCoreApplication::translate("Delete_record", "\345\210\240\351\231\244\350\256\260\345\275\225\347\274\226\345\217\267\357\274\232", nullptr));
        delete_2->setText(QCoreApplication::translate("Delete_record", "\345\210\240\351\231\244", nullptr));
        back->setText(QCoreApplication::translate("Delete_record", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete_record: public Ui_Delete_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_RECORD_H
