#include "add_record.h"
#include "ui_add_record.h"

Add_record::Add_record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Add_record)
{
    ui->setupUi(this);

    ui->edit_record->setStyleSheet("background: transparent;");
    ui->Transaction_type->setStyleSheet("background: transparent;");
    ui->add->setStyleSheet("background: transparent;");
    ui->amount->setStyleSheet("background: transparent;");
    ui->back->setStyleSheet("background: transparent;");
    ui->category->setStyleSheet("background: transparent;");
    ui->discription->setStyleSheet("background: transparent;");
    ui->month->setStyleSheet("background: transparent;");
    ui->year->setStyleSheet("background: transparent;");
    ui->day->setStyleSheet("background: transparent;");
    ui->time->setStyleSheet("background: transparent;");

    connect(ui-> add,&QPushButton::clicked,this,[this](){
        sin_record rec;
        //读入
        int year,month,day;
        year=ui->lineEdit_6->text().toInt();
        month=ui->lineEdit_2->text().toInt();
        day=ui->lineEdit_5->text().toInt();
        rec.date.setDate(year,month,day);
        rec.isIncome=(ui->comboBox->currentIndex()==1);
        rec.amount=ui->lineEdit->text().toDouble();
        rec.category=ui->lineEdit_3->text();
        rec.description=ui->lineEdit_4->text();

        emit ar(rec);
    });
    connect(ui-> back,&QPushButton::clicked,this,[this](){
        em();
        emit to_menu();
    });
}

Add_record::~Add_record()
{
    delete ui;
}

void Add_record::En()
{
    ui->edit_record->setText("Add");
    ui->Transaction_type->setText("Transaction type");
    ui->add->setText("Add");
    ui->amount->setText("Amount");
    ui->back->setText("Back");
    ui->category->setText("Category");
    ui->discription->setText("Discription");
    ui->month->setText("mo");
    ui->year->setText("yr");
    ui->day->setText("d");
    ui->time->setText("Time");
}

void Add_record::em()
{
    ui->lineEdit_6->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->comboBox->setCurrentIndex(0);
}
