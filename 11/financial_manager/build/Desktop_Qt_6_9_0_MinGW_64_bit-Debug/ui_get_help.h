/********************************************************************************
** Form generated from reading UI file 'get_help.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_HELP_H
#define UI_GET_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Get_help
{
public:
    QLabel *help;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QPushButton *back;

    void setupUi(QWidget *Get_help)
    {
        if (Get_help->objectName().isEmpty())
            Get_help->setObjectName("Get_help");
        Get_help->resize(750, 500);
        help = new QLabel(Get_help);
        help->setObjectName("help");
        help->setGeometry(QRect(50, 30, 151, 41));
        QFont font;
        font.setPointSize(14);
        help->setFont(font);
        scrollArea = new QScrollArea(Get_help);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(50, 90, 591, 321));
        QFont font1;
        font1.setPointSize(11);
        scrollArea->setFont(font1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 589, 319));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 10, 571, 301));
        scrollArea->setWidget(scrollAreaWidgetContents);
        back = new QPushButton(Get_help);
        back->setObjectName("back");
        back->setGeometry(QRect(610, 430, 101, 31));
        QFont font2;
        font2.setPointSize(12);
        back->setFont(font2);

        retranslateUi(Get_help);

        QMetaObject::connectSlotsByName(Get_help);
    } // setupUi

    void retranslateUi(QWidget *Get_help)
    {
        Get_help->setWindowTitle(QCoreApplication::translate("Get_help", "Form", nullptr));
        help->setText(QCoreApplication::translate("Get_help", "\345\270\256\345\212\251\346\211\213\345\206\214", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Get_help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">1. \346\211\200\346\234\211\347\232\204\347\274\226\347\240\201\345\235\207\347\224\2610\345\274\200\345\247\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2. \345\255\230\345\202\250\347\232\204\346\234\211\346\225\210\344\275\215\346"
                        "\225\260\344\270\215\350\203\275\350\266\205\350\277\20715\344\275\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">3. \346\234\252\350\276\223\345\205\245\347\232\204\346\225\260\351\242\235\345\222\214\347\274\226\345\217\267\351\273\230\350\256\244\344\270\2720\357\274\214\346\234\252\350\276\223\345\205\245\347\232\204\346\217\217\350\277\260\351\273\230\350\256\244\344\270\272\347\251\272</span></p></body></html>", nullptr));
        back->setText(QCoreApplication::translate("Get_help", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Get_help: public Ui_Get_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_HELP_H
