#include "edit_record.h"
#include "ui_edit_record.h"

Edit_record::Edit_record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Edit_record)
{
    ui->setupUi(this);

    ui->amount_2->setStyleSheet("background: transparent;");
    ui->day_2->setStyleSheet("background: transparent;");
    ui->discription_2->setStyleSheet("background: transparent;");
    ui->get_report->setStyleSheet("background: transparent;");
    ui->index_2->setStyleSheet("background: transparent;");
    ui->Transaction_type->setStyleSheet("background: transparent;");
    ui->edit->setStyleSheet("background: transparent;");
    ui->edit_button->setStyleSheet("background: transparent;");
    ui->year_2->setStyleSheet("background: transparent;");
    ui->month_2->setStyleSheet("background: transparent;");
    ui->time->setStyleSheet("background: transparent;");
    ui->category->setStyleSheet("background: transparent;");
    ui->back->setStyleSheet("background: transparent;");

    connect(ui-> edit_button,&QPushButton::clicked,this,[this](){
        int index;
        index=ui->index->text().toInt();
        sin_record yec;
        //读入
        int year,month,day;
        year=ui->year->text().toInt();
        month=ui->month->text().toInt();
        day=ui->day->text().toInt();
        yec.date.setDate(year,month,day);
        yec.isIncome=(ui->in_or_out->currentIndex()==2);
        yec.amount=ui->amount->text().toDouble();
        yec.category=ui->type->text();
        yec.description=ui->discription->text();

        emit er(index,yec);
    });
    connect(ui-> back,&QPushButton::clicked,this,[this](){
        em();
        emit to_menu();});
    connect(ui->get_report,&QPushButton::clicked,this,[this](){
        int index=ui->index->text().toInt();
        emit gr(index);
    });

}

Edit_record::~Edit_record()
{
    delete ui;
}

void Edit_record::changed(sin_record gr)
{
    ui->year->setText(QString::number(gr.date.year()));
    ui->month->setText(QString::number(gr.date.month()));
    ui->day->setText(QString::number(gr.date.day()));
    ui->amount->setText(QString::number(gr.amount));
    ui->discription->setText(gr.description);
    ui->in_or_out->setCurrentIndex((int)gr.isIncome+1);
    ui->type->setText(gr.category);
}

void Edit_record::En()
{
    ui->amount_2->setText("Amount");
    ui->day_2->setText("d");
    ui->discription_2->setText("Dispription");
    ui->get_report->setText("Get");
    ui->index_2->setText("No.");
    ui->Transaction_type->setText("Transaction type");
    ui->edit->setText("Edit");
    ui->edit_button->setText("Edit");
    ui->year_2->setText("yr");
    ui->month_2->setText("mo");
    ui->time->setText("Time");
    ui->category->setText("Category");
    ui->back->setText("Back");
}

void Edit_record::em()
{
    ui->amount->setText("");
    ui->type->setText("");
    ui->day->setText("");
    ui->year->setText("");
    ui->month->setText("");
    ui->in_or_out->setCurrentIndex(0);
    ui->discription->setText("");
}
