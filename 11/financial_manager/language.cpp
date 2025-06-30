#include "language.h"
#include "ui_language.h"

Language::Language(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Language)
{
    //this->setStyleSheet("background-color: white;");
    ui->setupUi(this);
    connect(ui->commit_button,&QPushButton::clicked,this,[this](){
        if(ui->Chi->isChecked())
        {
            emit Language_cn();
        }
        else if(ui->Eng->isChecked())
        {
            emit Language_en();
        }
    });
    connect(ui->leave_button,&QPushButton::clicked,this,&Language::leave);
}

Language::~Language()
{
    delete ui;
}
