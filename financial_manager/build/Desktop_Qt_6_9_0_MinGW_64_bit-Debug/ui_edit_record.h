/********************************************************************************
** Form generated from reading UI file 'edit_record.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_RECORD_H
#define UI_EDIT_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit_record
{
public:
    QLineEdit *year;
    QPushButton *edit_button;
    QLabel *discription_2;
    QLabel *time;
    QLineEdit *day;
    QLabel *category;
    QLineEdit *amount;
    QLineEdit *type;
    QLabel *amount_2;
    QLineEdit *month;
    QLabel *edit;
    QLineEdit *discription;
    QComboBox *in_or_out;
    QLabel *Transaction_type;
    QPushButton *back;
    QLineEdit *index;
    QLabel *index_2;
    QPushButton *get_report;
    QLabel *year_2;
    QLabel *month_2;
    QLabel *day_2;

    void setupUi(QWidget *Edit_record)
    {
        if (Edit_record->objectName().isEmpty())
            Edit_record->setObjectName("Edit_record");
        Edit_record->resize(750, 500);
        year = new QLineEdit(Edit_record);
        year->setObjectName("year");
        year->setGeometry(QRect(140, 260, 101, 31));
        edit_button = new QPushButton(Edit_record);
        edit_button->setObjectName("edit_button");
        edit_button->setGeometry(QRect(310, 420, 121, 41));
        QFont font;
        font.setPointSize(12);
        edit_button->setFont(font);
        discription_2 = new QLabel(Edit_record);
        discription_2->setObjectName("discription_2");
        discription_2->setGeometry(QRect(50, 375, 131, 20));
        discription_2->setFont(font);
        time = new QLabel(Edit_record);
        time->setObjectName("time");
        time->setGeometry(QRect(50, 260, 61, 21));
        time->setFont(font);
        day = new QLineEdit(Edit_record);
        day->setObjectName("day");
        day->setGeometry(QRect(450, 259, 101, 31));
        category = new QLabel(Edit_record);
        category->setObjectName("category");
        category->setGeometry(QRect(50, 320, 71, 21));
        category->setFont(font);
        amount = new QLineEdit(Edit_record);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(230, 200, 151, 31));
        type = new QLineEdit(Edit_record);
        type->setObjectName("type");
        type->setGeometry(QRect(230, 320, 151, 31));
        amount_2 = new QLabel(Edit_record);
        amount_2->setObjectName("amount_2");
        amount_2->setGeometry(QRect(50, 200, 81, 21));
        amount_2->setFont(font);
        month = new QLineEdit(Edit_record);
        month->setObjectName("month");
        month->setGeometry(QRect(290, 260, 101, 31));
        edit = new QLabel(Edit_record);
        edit->setObjectName("edit");
        edit->setGeometry(QRect(50, 30, 121, 31));
        QFont font1;
        font1.setPointSize(14);
        edit->setFont(font1);
        discription = new QLineEdit(Edit_record);
        discription->setObjectName("discription");
        discription->setGeometry(QRect(230, 370, 151, 31));
        in_or_out = new QComboBox(Edit_record);
        in_or_out->addItem(QString());
        in_or_out->addItem(QString());
        in_or_out->addItem(QString());
        in_or_out->setObjectName("in_or_out");
        in_or_out->setGeometry(QRect(230, 140, 151, 31));
        Transaction_type = new QLabel(Edit_record);
        Transaction_type->setObjectName("Transaction_type");
        Transaction_type->setGeometry(QRect(50, 140, 91, 31));
        Transaction_type->setFont(font);
        back = new QPushButton(Edit_record);
        back->setObjectName("back");
        back->setGeometry(QRect(580, 420, 121, 41));
        back->setFont(font);
        index = new QLineEdit(Edit_record);
        index->setObjectName("index");
        index->setGeometry(QRect(230, 80, 151, 31));
        index_2 = new QLabel(Edit_record);
        index_2->setObjectName("index_2");
        index_2->setGeometry(QRect(50, 80, 91, 31));
        index_2->setFont(font);
        get_report = new QPushButton(Edit_record);
        get_report->setObjectName("get_report");
        get_report->setGeometry(QRect(50, 420, 121, 41));
        get_report->setFont(font);
        year_2 = new QLabel(Edit_record);
        year_2->setObjectName("year_2");
        year_2->setGeometry(QRect(250, 260, 31, 31));
        QFont font2;
        font2.setPointSize(9);
        year_2->setFont(font2);
        month_2 = new QLabel(Edit_record);
        month_2->setObjectName("month_2");
        month_2->setGeometry(QRect(400, 260, 31, 31));
        month_2->setFont(font2);
        day_2 = new QLabel(Edit_record);
        day_2->setObjectName("day_2");
        day_2->setGeometry(QRect(560, 260, 31, 31));
        day_2->setFont(font2);

        retranslateUi(Edit_record);

        QMetaObject::connectSlotsByName(Edit_record);
    } // setupUi

    void retranslateUi(QWidget *Edit_record)
    {
        Edit_record->setWindowTitle(QCoreApplication::translate("Edit_record", "Form", nullptr));
        year->setText(QString());
        edit_button->setText(QCoreApplication::translate("Edit_record", "\347\274\226\350\276\221", nullptr));
        discription_2->setText(QCoreApplication::translate("Edit_record", "\346\217\217\350\277\260:", nullptr));
        time->setText(QCoreApplication::translate("Edit_record", "\346\227\266\351\227\264:", nullptr));
        day->setText(QString());
        category->setText(QCoreApplication::translate("Edit_record", "\347\261\273\345\210\253:", nullptr));
        amount_2->setText(QCoreApplication::translate("Edit_record", "\351\207\221\351\242\235:", nullptr));
        month->setText(QString());
        edit->setText(QCoreApplication::translate("Edit_record", "\347\274\226\350\276\221\350\256\260\345\275\225", nullptr));
        in_or_out->setItemText(0, QString());
        in_or_out->setItemText(1, QCoreApplication::translate("Edit_record", "\346\224\257\345\207\272/Expense", nullptr));
        in_or_out->setItemText(2, QCoreApplication::translate("Edit_record", "\346\224\266\345\205\245/Income", nullptr));

        Transaction_type->setText(QCoreApplication::translate("Edit_record", "\346\224\266\345\205\245\347\261\273\345\236\213:", nullptr));
        back->setText(QCoreApplication::translate("Edit_record", "\350\277\224\345\233\236", nullptr));
        index_2->setText(QCoreApplication::translate("Edit_record", "\350\256\260\345\275\225\347\274\226\345\217\267\357\274\232", nullptr));
        get_report->setText(QCoreApplication::translate("Edit_record", "\346\237\245\350\257\242", nullptr));
        year_2->setText(QCoreApplication::translate("Edit_record", "\345\271\264", nullptr));
        month_2->setText(QCoreApplication::translate("Edit_record", "\346\234\210", nullptr));
        day_2->setText(QCoreApplication::translate("Edit_record", "\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_record: public Ui_Edit_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_RECORD_H
