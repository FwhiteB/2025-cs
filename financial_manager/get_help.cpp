#include "get_help.h"
#include "ui_get_help.h"

Get_help::Get_help(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Get_help)
{
    ui->setupUi(this);

    ui->help->setStyleSheet("background: transparent;");
    ui->back->setStyleSheet("background: transparent;");

    connect(ui->back,&QPushButton::clicked,this,&Get_help::to_menu);
}

Get_help::~Get_help()
{
    delete ui;
}

void Get_help::En()
{
    ui->help->setText("Help");
    ui->back->setText("Back");
    ui->textBrowser->setText("1. All numbers start from 0\n2. The number of significant digits stored cannot exceed 15\n3. The amount and number not entered are 0 by default, and the description not entered is blank by default");
}
