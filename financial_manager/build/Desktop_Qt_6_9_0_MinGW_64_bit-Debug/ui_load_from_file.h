/********************************************************************************
** Form generated from reading UI file 'load_from_file.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAD_FROM_FILE_H
#define UI_LOAD_FROM_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Load_from_file
{
public:
    QLabel *please_enter_the_file_name;
    QLabel *state;
    QPushButton *cancel_button;
    QLineEdit *file_name;
    QPushButton *commit_button;

    void setupUi(QWidget *Load_from_file)
    {
        if (Load_from_file->objectName().isEmpty())
            Load_from_file->setObjectName("Load_from_file");
        Load_from_file->resize(750, 500);
        please_enter_the_file_name = new QLabel(Load_from_file);
        please_enter_the_file_name->setObjectName("please_enter_the_file_name");
        please_enter_the_file_name->setGeometry(QRect(60, 70, 261, 51));
        QFont font;
        font.setPointSize(14);
        please_enter_the_file_name->setFont(font);
        state = new QLabel(Load_from_file);
        state->setObjectName("state");
        state->setGeometry(QRect(60, 210, 91, 19));
        cancel_button = new QPushButton(Load_from_file);
        cancel_button->setObjectName("cancel_button");
        cancel_button->setGeometry(QRect(450, 320, 131, 41));
        QFont font1;
        font1.setPointSize(12);
        cancel_button->setFont(font1);
        file_name = new QLineEdit(Load_from_file);
        file_name->setObjectName("file_name");
        file_name->setGeometry(QRect(60, 150, 441, 31));
        file_name->setFont(font1);
        commit_button = new QPushButton(Load_from_file);
        commit_button->setObjectName("commit_button");
        commit_button->setGeometry(QRect(60, 320, 131, 41));
        commit_button->setFont(font1);

        retranslateUi(Load_from_file);

        QMetaObject::connectSlotsByName(Load_from_file);
    } // setupUi

    void retranslateUi(QWidget *Load_from_file)
    {
        Load_from_file->setWindowTitle(QCoreApplication::translate("Load_from_file", "Form", nullptr));
        please_enter_the_file_name->setText(QCoreApplication::translate("Load_from_file", "\350\257\267\350\276\223\345\205\245\345\270\214\346\234\233\350\257\273\345\217\226\347\232\204\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        state->setText(QString());
        cancel_button->setText(QCoreApplication::translate("Load_from_file", "\350\277\224\345\233\236", nullptr));
        commit_button->setText(QCoreApplication::translate("Load_from_file", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Load_from_file: public Ui_Load_from_file {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAD_FROM_FILE_H
