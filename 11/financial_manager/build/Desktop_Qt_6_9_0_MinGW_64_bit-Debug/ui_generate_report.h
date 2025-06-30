/********************************************************************************
** Form generated from reading UI file 'generate_report.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATE_REPORT_H
#define UI_GENERATE_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Generate_report
{
public:
    QLabel *report;
    QPushButton *monthly;
    QPushButton *yearly;
    QPushButton *Categorized;
    QLineEdit *lineEdit;
    QLabel *Object;
    QTextBrowser *the_report;
    QPushButton *back;
    QPushButton *query;
    QLabel *unit;

    void setupUi(QWidget *Generate_report)
    {
        if (Generate_report->objectName().isEmpty())
            Generate_report->setObjectName("Generate_report");
        Generate_report->resize(750, 500);
        report = new QLabel(Generate_report);
        report->setObjectName("report");
        report->setGeometry(QRect(50, 30, 101, 31));
        QFont font;
        font.setPointSize(14);
        report->setFont(font);
        monthly = new QPushButton(Generate_report);
        monthly->setObjectName("monthly");
        monthly->setGeometry(QRect(50, 80, 101, 31));
        yearly = new QPushButton(Generate_report);
        yearly->setObjectName("yearly");
        yearly->setGeometry(QRect(280, 80, 101, 31));
        Categorized = new QPushButton(Generate_report);
        Categorized->setObjectName("Categorized");
        Categorized->setGeometry(QRect(520, 80, 101, 31));
        lineEdit = new QLineEdit(Generate_report);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 140, 221, 31));
        Object = new QLabel(Generate_report);
        Object->setObjectName("Object");
        Object->setGeometry(QRect(50, 140, 111, 31));
        the_report = new QTextBrowser(Generate_report);
        the_report->setObjectName("the_report");
        the_report->setGeometry(QRect(50, 200, 571, 211));
        QFont font1;
        font1.setPointSize(12);
        the_report->setFont(font1);
        back = new QPushButton(Generate_report);
        back->setObjectName("back");
        back->setGeometry(QRect(600, 430, 101, 31));
        back->setFont(font1);
        query = new QPushButton(Generate_report);
        query->setObjectName("query");
        query->setGeometry(QRect(500, 140, 121, 31));
        unit = new QLabel(Generate_report);
        unit->setObjectName("unit");
        unit->setGeometry(QRect(410, 140, 61, 31));

        retranslateUi(Generate_report);

        QMetaObject::connectSlotsByName(Generate_report);
    } // setupUi

    void retranslateUi(QWidget *Generate_report)
    {
        Generate_report->setWindowTitle(QCoreApplication::translate("Generate_report", "Form", nullptr));
        report->setText(QCoreApplication::translate("Generate_report", "\346\200\273\347\273\223\346\212\245\345\221\212", nullptr));
        monthly->setText(QCoreApplication::translate("Generate_report", "\346\234\210\345\272\246", nullptr));
        yearly->setText(QCoreApplication::translate("Generate_report", "\345\271\264\345\272\246", nullptr));
        Categorized->setText(QCoreApplication::translate("Generate_report", "\345\210\206\347\261\273", nullptr));
        Object->setText(QCoreApplication::translate("Generate_report", "\346\237\245\350\257\242\345\257\271\350\261\241\357\274\232", nullptr));
        back->setText(QCoreApplication::translate("Generate_report", "\350\277\224\345\233\236", nullptr));
        query->setText(QCoreApplication::translate("Generate_report", "\346\237\245\350\257\242", nullptr));
        unit->setText(QCoreApplication::translate("Generate_report", "\346\234\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Generate_report: public Ui_Generate_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATE_REPORT_H
