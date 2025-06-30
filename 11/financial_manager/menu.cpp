#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);

    ui->ar->setStyleSheet("background: transparent;");
    ui->dr->setStyleSheet("background: transparent;");
    ui->er->setStyleSheet("background: transparent;");
    ui->gr->setStyleSheet("background: transparent;");
    ui->he->setStyleSheet("background: transparent;");
    ui->Meni->setStyleSheet("background: transparent;");
    ui->leave->setStyleSheet("background: transparent;");
    ui->lf->setStyleSheet("background: transparent;");
    ui->sf->setStyleSheet("background: transparent;");
    ui->vr->setStyleSheet("background: transparent;");

    connect(ui->ar,&QPushButton::clicked,this,&Menu::to_add_record);
    connect(ui->dr,&QPushButton::clicked,this,&Menu::to_delete_record);
    connect(ui->er,&QPushButton::clicked,this,&Menu::to_edit_record);
    connect(ui->gr,&QPushButton::clicked,this,&Menu::to_generate_report);
    connect(ui->he,&QPushButton::clicked,this,&Menu::to_get_help);
    connect(ui->lf,&QPushButton::clicked,this,&Menu::to_load_from_file);
    connect(ui->sf,&QPushButton::clicked,this,&Menu::to_save_to_file);
    connect(ui->vr,&QPushButton::clicked,this,&Menu::to_view_record);
    connect(ui->leave,&QPushButton::clicked,this,&Menu::leave_program);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::En()
{
    ui->ar->setText("Add record");
    ui->dr->setText("Delete record");
    ui->er->setText("Edit record");
    ui->gr->setText("Generate report");
    ui->he->setText("Help");
    ui->Meni->setText("Menu");
    ui->leave->setText("Quit");
    ui->lf->setText("Load from file");
    ui->sf->setText("Save to file");
    ui->vr->setText("View record");
}
