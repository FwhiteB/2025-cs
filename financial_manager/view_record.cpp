#include "view_record.h"
#include "ui_view_record.h"

View_record::View_record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::View_record)
{
    ui->setupUi(this);

    ui->current_records->setStyleSheet("background: transparent;");
    ui->leave_button->setStyleSheet("background: transparent;");

    connect(ui->leave_button,&QPushButton::clicked,this,[this](){em();emit to_menu();});
}

View_record::~View_record()
{
    delete ui;
}

void View_record::prepare(QString input)
{
    ui->viewer->setText(input);
}

void View_record::En()
{
    ui->current_records->setText("Current records");
    ui->leave_button->setText("Back");
}

void View_record::em()
{
    ui->viewer->setText("");
}
