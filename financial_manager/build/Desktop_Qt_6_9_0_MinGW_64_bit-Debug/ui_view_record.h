/********************************************************************************
** Form generated from reading UI file 'view_record.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_RECORD_H
#define UI_VIEW_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_record
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *viewer;
    QPushButton *leave_button;
    QLabel *current_records;

    void setupUi(QWidget *View_record)
    {
        if (View_record->objectName().isEmpty())
            View_record->setObjectName("View_record");
        View_record->resize(750, 500);
        scrollArea = new QScrollArea(View_record);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(110, 80, 491, 321));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 489, 319));
        viewer = new QTextBrowser(scrollAreaWidgetContents);
        viewer->setObjectName("viewer");
        viewer->setGeometry(QRect(10, 10, 471, 301));
        scrollArea->setWidget(scrollAreaWidgetContents);
        leave_button = new QPushButton(View_record);
        leave_button->setObjectName("leave_button");
        leave_button->setGeometry(QRect(580, 420, 121, 41));
        QFont font;
        font.setPointSize(12);
        leave_button->setFont(font);
        current_records = new QLabel(View_record);
        current_records->setObjectName("current_records");
        current_records->setGeometry(QRect(50, 30, 261, 31));
        QFont font1;
        font1.setPointSize(14);
        current_records->setFont(font1);

        retranslateUi(View_record);

        QMetaObject::connectSlotsByName(View_record);
    } // setupUi

    void retranslateUi(QWidget *View_record)
    {
        View_record->setWindowTitle(QCoreApplication::translate("View_record", "Form", nullptr));
        viewer->setHtml(QCoreApplication::translate("View_record", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></body></html>", nullptr));
        leave_button->setText(QCoreApplication::translate("View_record", "\350\277\224\345\233\236", nullptr));
        current_records->setText(QCoreApplication::translate("View_record", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_record: public Ui_View_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_RECORD_H
