#include "save_to_file.h"
#include "ui_save_to_file.h"

Save_to_file::Save_to_file(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Save_to_file)
{
    ui->setupUi(this);

    ui->please_enter_the_file_name->setStyleSheet("background: transparent;");
    ui->cancel_button->setStyleSheet("background: transparent;");
    ui->commit_button->setStyleSheet("background: transparent;");

    connect(ui->commit_button,&QPushButton::clicked,this,&Save_to_file::emit_the_signal);
    connect(ui->cancel_button,&QPushButton::clicked,this,[this](){em();emit to_menu();});
}

Save_to_file::~Save_to_file()
{
    delete ui;
}

void Save_to_file::emit_the_signal()
{
    QString tmp_str=ui->file_name->text();
    emit save_record(tmp_str);
    //qDebug()<<tmp_str;
}

void Save_to_file::En()
{
    ui->please_enter_the_file_name->setText("Please enter the file name");
    ui->cancel_button->setText("Back");
    ui->commit_button->setText("Save");
}

void Save_to_file::em()
{
    ui->file_name->setText("");
}
