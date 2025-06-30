#include "generate_report.h"
#include "ui_generate_report.h"

Generate_report::Generate_report(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Generate_report)
{
    ui->setupUi(this);
    ui->unit->setText("");

    ui->report->setStyleSheet("background: transparent;");
    ui->Categorized->setStyleSheet("background: transparent;");
    ui->back->setStyleSheet("background: transparent;");
    ui->Object->setStyleSheet("background: transparent;");
    ui->monthly->setStyleSheet("background: transparent;");
    ui->yearly->setStyleSheet("background: transparent;");
    ui->Categorized->setStyleSheet("background: transparent;");
    ui->query->setStyleSheet("background: transparent;");

    connect(ui->monthly,&QPushButton::clicked,this,[this](){
        index=1;
        if(!isEn) ui->unit->setText("月");
        else ui->unit->setText("mo");
    }) ;
    connect(ui->yearly,&QPushButton::clicked,this,[this](){
        index=2;
        if(!isEn) ui->unit->setText("年");
        else ui->unit->setText("yr");
    });
    connect(ui->Categorized,&QPushButton::clicked,this,[this](){
        index=3;
        if(!isEn) ui->unit->setText("类");
        else ui->unit->setText("cate");
    });
    connect(ui->query,&QPushButton::clicked,this,[this](){
        QString asd;
        asd=ui->lineEdit->text();
        emit gr(index,asd);
    });
    connect(ui-> back,&QPushButton::clicked,this,[this](){
        em();
        emit to_menu();});
}

Generate_report::~Generate_report()
{
    delete ui;
}

void Generate_report::set_report(QString input)
{
    ui->the_report->setText(input);
}

void Generate_report::En()
{
    isEn=true;
    ui->report->setText("Report");
    ui->Categorized->setText("Categorized");
    ui->back->setText("Back");
    ui->Object->setText("Object");
    ui->monthly->setText("Monthly");
    ui->yearly->setText("Yearly");
    ui->Categorized->setText("Categorized");
    ui->query->setText("Query");
}

void Generate_report::em()
{
    ui->unit->setText("");
    ui->lineEdit->setText("");
}
