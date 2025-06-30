#include "load_from_file.h"
#include "ui_load_from_file.h"

Load_from_file::Load_from_file(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Load_from_file)
{
    ui->setupUi(this);

    ui->please_enter_the_file_name->setStyleSheet("background: transparent;");
    ui->cancel_button->setStyleSheet("background: transparent;");
    ui->commit_button->setStyleSheet("background: transparent;");

    connect(ui->commit_button,&QPushButton::clicked,this,&Load_from_file::emit_signal);
    connect(ui->cancel_button,&QPushButton::clicked,this,[this](){em();emit to_menu();});
}

Load_from_file::~Load_from_file()
{
    delete ui;
}

void Load_from_file::emit_signal()
{
    QString tmp_str=ui->file_name->text();
    emit load_record(tmp_str);
    //qDebug()<<tmp_str;
}

void Load_from_file::En()
{
    ui->please_enter_the_file_name->setText("Please enter the file name:");
    ui->cancel_button->setText("Back");
    ui->commit_button->setText("Load");
}

void Load_from_file::em()
{
    ui->file_name->setText("");
}
