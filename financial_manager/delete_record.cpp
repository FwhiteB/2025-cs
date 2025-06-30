#include "delete_record.h"
#include "ui_delete_record.h"

Delete_record::Delete_record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Delete_record)
{
    ui->setupUi(this);
    ui->delete_record->setStyleSheet("background: transparent;");
    ui->delete_2->setStyleSheet("background: transparent;");
    ui->number->setStyleSheet("background: transparent;");
    ui->back->setStyleSheet("background: transparent;");

    connect(ui->delete_2,&QPushButton::clicked,this,[this](){

        int index;
        index=ui->lineEdit->text().toInt();
        emit dr(index);
    });
    connect(ui-> back,&QPushButton::clicked,this,[this](){
        em();
        emit to_menu();
    });

}

Delete_record::~Delete_record()
{
    delete ui;
}

void Delete_record::En()
{
    ui->delete_record->setText("Delete");
    ui->delete_2->setText("Delete");
    ui->number->setText("No.");
    ui->back->setText("Back");
}

void Delete_record::em()
{
            ui->number->setText("");
}
