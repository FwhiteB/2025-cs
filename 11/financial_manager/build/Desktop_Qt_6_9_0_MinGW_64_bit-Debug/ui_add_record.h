/********************************************************************************
** Form generated from reading UI file 'add_record.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_RECORD_H
#define UI_ADD_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_record
{
public:
    QLabel *edit_record;
    QLabel *Transaction_type;
    QLabel *amount;
    QLabel *time;
    QLabel *category;
    QLabel *discription;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *add;
    QPushButton *back;
    QLabel *year;
    QLabel *month;
    QLabel *day;

    void setupUi(QWidget *Add_record)
    {
        if (Add_record->objectName().isEmpty())
            Add_record->setObjectName("Add_record");
        Add_record->resize(750, 500);
        edit_record = new QLabel(Add_record);
        edit_record->setObjectName("edit_record");
        edit_record->setGeometry(QRect(50, 30, 241, 41));
        QFont font;
        font.setPointSize(14);
        edit_record->setFont(font);
        Transaction_type = new QLabel(Add_record);
        Transaction_type->setObjectName("Transaction_type");
        Transaction_type->setGeometry(QRect(50, 100, 131, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        Transaction_type->setFont(font1);
        amount = new QLabel(Add_record);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(50, 160, 131, 31));
        QFont font2;
        font2.setPointSize(12);
        amount->setFont(font2);
        time = new QLabel(Add_record);
        time->setObjectName("time");
        time->setGeometry(QRect(50, 220, 71, 31));
        time->setFont(font2);
        category = new QLabel(Add_record);
        category->setObjectName("category");
        category->setGeometry(QRect(50, 290, 81, 31));
        category->setFont(font2);
        discription = new QLabel(Add_record);
        discription->setObjectName("discription");
        discription->setGeometry(QRect(50, 351, 81, 31));
        discription->setFont(font2);
        comboBox = new QComboBox(Add_record);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(240, 100, 151, 31));
        lineEdit = new QLineEdit(Add_record);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(242, 159, 151, 31));
        lineEdit_2 = new QLineEdit(Add_record);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(300, 220, 101, 31));
        lineEdit_3 = new QLineEdit(Add_record);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(242, 289, 151, 31));
        lineEdit_4 = new QLineEdit(Add_record);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(240, 350, 151, 31));
        lineEdit_5 = new QLineEdit(Add_record);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(460, 220, 101, 31));
        lineEdit_6 = new QLineEdit(Add_record);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(140, 220, 101, 31));
        add = new QPushButton(Add_record);
        add->setObjectName("add");
        add->setGeometry(QRect(70, 410, 121, 41));
        add->setFont(font2);
        back = new QPushButton(Add_record);
        back->setObjectName("back");
        back->setGeometry(QRect(580, 407, 121, 41));
        back->setFont(font2);
        year = new QLabel(Add_record);
        year->setObjectName("year");
        year->setGeometry(QRect(250, 220, 31, 31));
        QFont font3;
        font3.setPointSize(9);
        year->setFont(font3);
        month = new QLabel(Add_record);
        month->setObjectName("month");
        month->setGeometry(QRect(410, 220, 21, 31));
        month->setFont(font3);
        day = new QLabel(Add_record);
        day->setObjectName("day");
        day->setGeometry(QRect(570, 220, 21, 31));
        day->setFont(font3);

        retranslateUi(Add_record);

        QMetaObject::connectSlotsByName(Add_record);
    } // setupUi

    void retranslateUi(QWidget *Add_record)
    {
        Add_record->setWindowTitle(QCoreApplication::translate("Add_record", "Form", nullptr));
        edit_record->setText(QCoreApplication::translate("Add_record", "\347\274\226\350\276\221\350\256\260\345\275\225", nullptr));
        Transaction_type->setText(QCoreApplication::translate("Add_record", "\346\224\266\345\205\245\347\261\273\345\236\213\357\274\232", nullptr));
        amount->setText(QCoreApplication::translate("Add_record", "\351\207\221\351\242\235\357\274\232", nullptr));
        time->setText(QCoreApplication::translate("Add_record", "\346\227\266\351\227\264\357\274\232", nullptr));
        category->setText(QCoreApplication::translate("Add_record", "\347\261\273\345\210\253\357\274\232", nullptr));
        discription->setText(QCoreApplication::translate("Add_record", "\346\217\217\350\277\260\357\274\232", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("Add_record", "\346\224\257\345\207\272/Income", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Add_record", "\346\224\266\345\205\245/Expense", nullptr));

        lineEdit_2->setText(QString());
        lineEdit_5->setText(QString());
        lineEdit_6->setText(QString());
        add->setText(QCoreApplication::translate("Add_record", "\346\267\273\345\212\240", nullptr));
        back->setText(QCoreApplication::translate("Add_record", "\350\277\224\345\233\236", nullptr));
        year->setText(QCoreApplication::translate("Add_record", "\345\271\264", nullptr));
        month->setText(QCoreApplication::translate("Add_record", "\346\234\210", nullptr));
        day->setText(QCoreApplication::translate("Add_record", "\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_record: public Ui_Add_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_RECORD_H
