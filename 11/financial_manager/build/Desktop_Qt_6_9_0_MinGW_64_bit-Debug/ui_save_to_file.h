/********************************************************************************
** Form generated from reading UI file 'save_to_file.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_TO_FILE_H
#define UI_SAVE_TO_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Save_to_file
{
public:
    QLabel *please_enter_the_file_name;
    QLineEdit *file_name;
    QLabel *label_2;
    QPushButton *commit_button;
    QPushButton *cancel_button;

    void setupUi(QWidget *Save_to_file)
    {
        if (Save_to_file->objectName().isEmpty())
            Save_to_file->setObjectName("Save_to_file");
        Save_to_file->resize(750, 500);
        please_enter_the_file_name = new QLabel(Save_to_file);
        please_enter_the_file_name->setObjectName("please_enter_the_file_name");
        please_enter_the_file_name->setGeometry(QRect(60, 70, 261, 51));
        QFont font;
        font.setPointSize(14);
        please_enter_the_file_name->setFont(font);
        file_name = new QLineEdit(Save_to_file);
        file_name->setObjectName("file_name");
        file_name->setGeometry(QRect(60, 150, 441, 31));
        QFont font1;
        font1.setPointSize(12);
        file_name->setFont(font1);
        label_2 = new QLabel(Save_to_file);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 210, 91, 19));
        commit_button = new QPushButton(Save_to_file);
        commit_button->setObjectName("commit_button");
        commit_button->setGeometry(QRect(60, 320, 131, 41));
        commit_button->setFont(font1);
        cancel_button = new QPushButton(Save_to_file);
        cancel_button->setObjectName("cancel_button");
        cancel_button->setGeometry(QRect(450, 320, 131, 41));
        cancel_button->setFont(font1);

        retranslateUi(Save_to_file);

        QMetaObject::connectSlotsByName(Save_to_file);
    } // setupUi

    void retranslateUi(QWidget *Save_to_file)
    {
        Save_to_file->setWindowTitle(QCoreApplication::translate("Save_to_file", "Form", nullptr));
        please_enter_the_file_name->setText(QCoreApplication::translate("Save_to_file", "\350\257\267\350\276\223\345\205\245\345\270\214\346\234\233\344\277\235\345\255\230\347\232\204\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        label_2->setText(QString());
        commit_button->setText(QCoreApplication::translate("Save_to_file", "\347\241\256\345\256\232", nullptr));
        cancel_button->setText(QCoreApplication::translate("Save_to_file", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Save_to_file: public Ui_Save_to_file {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_TO_FILE_H
