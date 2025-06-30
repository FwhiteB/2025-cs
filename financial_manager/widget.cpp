#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    this->setStyleSheet(
        "background-image: url(./bj.jpg);"  // 使用相对路径
        "background-position: center;"
        "background-repeat: no-repeat;"
        );
    setWindowTitle("Financial manager");

    ui->setupUi(this);
    add_stacked_widgets();
    connections();
    stackedWidget->setCurrentWidget(language);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(stackedWidget);
    setLayout(layout);

    // 初始隐藏所有控件（除了主标签）
    ui->lb1->hide();
    ui->lb2->hide();
    ui->lb3->hide();
    ui->pb11->hide();
    ui->pb12->hide();
    ui->pb13->hide();
    ui->pb14->hide();
    ui->pb15->hide();
    ui->pb21->hide();
    ui->pb22->hide();
    ui->pb31->hide();

    ui->label->setStyleSheet("background: transparent;");
    ui->lb1->setStyleSheet("background: transparent;");
    ui->lb2->setStyleSheet("background: transparent;");
    ui->lb3->setStyleSheet("background: transparent;");

    // 安装事件过滤器
    ui->label->installEventFilter(this);
    ui->lb1->installEventFilter(this);
    ui->lb2->installEventFilter(this);
    ui->lb3->installEventFilter(this);
    ui->pb11->installEventFilter(this);
    ui->pb12->installEventFilter(this);
    ui->pb13->installEventFilter(this);
    ui->pb14->installEventFilter(this);
    ui->pb15->installEventFilter(this);
    ui->pb21->installEventFilter(this);
    ui->pb22->installEventFilter(this);
    ui->pb31->installEventFilter(this);

    // 初始化动画
    initAnimations();

    // 离开检查定时器
    leaveCheckTimer = new QTimer(this);
    leaveCheckTimer->setSingleShot(true);
    connect(leaveCheckTimer, &QTimer::timeout, this, [this]() {
        if (!isMouseInControlArea()) {
            fadeOutAll();
        }
    });
}

Widget::~Widget()
{
    delete ui;
    delete stackedWidget;
    delete add_record;
    delete delete_record;
    delete edit_record;
    delete generate_report;
    delete get_help;
    delete language;
    delete load_from_file;
    delete menu;
    delete save_to_file;
    delete view_record;
}

void Widget::add_stacked_widgets()
{
    stackedWidget->addWidget(add_record);
    stackedWidget->addWidget(delete_record);
    stackedWidget->addWidget(edit_record);
    stackedWidget->addWidget(generate_report);
    stackedWidget->addWidget(get_help);
    stackedWidget->addWidget(language);
    stackedWidget->addWidget(load_from_file);
    stackedWidget->addWidget(menu);
    stackedWidget->addWidget(save_to_file);
    stackedWidget->addWidget(view_record);
}

void Widget::connections()
{
    connect(save_to_file,&Save_to_file::to_menu,this,[this](){stackedWidget->setCurrentWidget(menu);});
    connect(save_to_file,&Save_to_file::save_record,this,[this](QString file_name){
        if(records.save_to_file(file_name)){
            if(!isEn) QMessageBox::information(this, "提示", "保存成功");
            else QMessageBox::information(this, "Tip", "Successfully saved");
        }
        else{
            if(!isEn) QMessageBox::warning(this, "警告", "保存失败，请检查文件名");
            else QMessageBox::warning(this, "Warning", "Saving failed,please change the file name");
        }
    });

    connect(load_from_file,&Load_from_file::to_menu,this,[this](){stackedWidget->setCurrentWidget(menu);});//这里有返回的
    connect(load_from_file,&Load_from_file::load_record,this,[this](QString file_name){
        if(records.load_from_file(file_name)){
            if(!isEn) QMessageBox::information(this, "提示", "载入成功");
            else QMessageBox::information(this, "Tip", "Successfully loaded");
        }
        else{
            if(!isEn) QMessageBox::warning(this, "警告", "载入失败，请检查文件名");
            else QMessageBox::warning(this, "Warning", "Loading failed,please check the file name");
        }
    });

    connect(get_help,&Get_help::to_menu,this,[this](){stackedWidget->setCurrentWidget(menu);});

    connect(menu,&Menu::to_get_help,this,[this](){stackedWidget->setCurrentWidget(get_help);});
    connect(menu,&Menu::leave_program,this,&QWidget::close);//这里应该直接退出？
    connect(menu,&Menu::to_add_record,this,[this](){stackedWidget->setCurrentWidget(add_record);});
    connect(menu,&Menu::to_delete_record,this,[this](){stackedWidget->setCurrentWidget(delete_record);});
    connect(menu,&Menu::to_edit_record,this,[this](){stackedWidget->setCurrentWidget(edit_record);});
    connect(menu,&Menu::to_view_record,this,[this](){
        stackedWidget->setCurrentWidget(view_record);
        view_record->prepare(records.view_record());
    });
    connect(menu,&Menu::to_generate_report,this,[this](){stackedWidget->setCurrentWidget(generate_report);});
    connect(menu,&Menu::to_load_from_file,this,[this](){stackedWidget->setCurrentWidget(load_from_file);});
    connect(menu,&Menu::to_save_to_file,this,[this](){stackedWidget->setCurrentWidget(save_to_file);});

    connect(ui->pb11,&QPushButton::clicked,this,[this](){add_record->em();stackedWidget->setCurrentWidget(add_record);});
    connect(ui->pb12,&QPushButton::clicked,this,[this](){edit_record->em();stackedWidget->setCurrentWidget(edit_record);});
    connect(ui->pb13,&QPushButton::clicked,this,[this](){delete_record->em();stackedWidget->setCurrentWidget(delete_record);});
    connect(ui->pb14,&QPushButton::clicked,this,[this](){view_record->em();stackedWidget->setCurrentWidget(view_record);});
    connect(ui->pb15,&QPushButton::clicked,this,[this](){generate_report->em();stackedWidget->setCurrentWidget(generate_report);});
    connect(ui->pb21,&QPushButton::clicked,this,[this](){load_from_file->em();stackedWidget->setCurrentWidget(load_from_file);});
    connect(ui->pb22,&QPushButton::clicked,this,[this](){save_to_file->em();stackedWidget->setCurrentWidget(save_to_file);});
    connect(ui->pb31,&QPushButton::clicked,this,[this](){stackedWidget->setCurrentWidget(get_help);});

    connect(language,&Language::Language_cn,this,[this](){stackedWidget->setCurrentWidget(menu);});
    connect(language,&Language::Language_en,this,[this](){isEn=true;setEn();stackedWidget->setCurrentWidget(menu);});
    connect(language,&Language::leave,this,&QWidget::close);

    connect(view_record,&View_record::to_menu,this,[this](){stackedWidget->setCurrentWidget(menu);});

    connect(add_record,&Add_record::to_menu,this,[this](){stackedWidget->setCurrentWidget(menu);});
    connect(add_record,&Add_record::ar,this,[this](sin_record new_record){
        records.records.push_back(new_record);
        if(!isEn) QMessageBox::information(this, "提示", "添加成功");
        else QMessageBox::information(this, "Tip", "Successfully added");
    });

    connect(delete_record,&Delete_record::to_menu,this,[this](){stackedWidget->setCurrentWidget(menu);});
    connect(delete_record,&Delete_record::dr,this,[this](int index){
        if(index>=(int)records.records.size()||index<0){
            if(!isEn) QMessageBox::warning(this, "警告", "超出范围");
            else QMessageBox::warning(this, "Warning", "Out of range");
        }
        else{
            records.records.erase(records.records.begin()+index);
            if(!isEn) QMessageBox::information(this, "提示", "删除成功");
            else QMessageBox::information(this, "Tip", "Successfully deleted");
        }
    });

    connect(edit_record,&Edit_record::to_menu,this,[this](){stackedWidget->setCurrentWidget(menu);});
    connect(edit_record,&Edit_record::er,this,[this](int index,sin_record input){
        if(index>=(int)records.records.size()||index<0){
            if(!isEn) QMessageBox::warning(this, "警告", "超出范围");
            else QMessageBox::warning(this, "Warning", "Out of range");
        }
        else{
            records.records[index]=input;
            if(!isEn) QMessageBox::information(this, "提示", "更改成功");
            else QMessageBox::information(this, "Tip", "Successfully changed");
        }
    });
    connect(edit_record,&Edit_record::gr,this,[this](int index){
        if(index>=(int)records.records.size()||index<0){
            if(!isEn) QMessageBox::warning(this, "警告", "超出范围");
            else QMessageBox::warning(this, "Warning", "Out of range");
        }
        else emit found(records.records[index]);
    });

    connect(generate_report,&Generate_report::to_menu,this,[this](){stackedWidget->setCurrentWidget(menu);});
    connect(generate_report,&Generate_report::gr,this,[this](int type,QString target){
        if(type==1)
        {
            generate_report->set_report(records.generate_month_report(target.toInt(),isEn));
        }
        if(type==2)
        {
            generate_report->set_report(records.generate_year_report(target.toInt(),isEn));
        }
        if(type==3)
        {
            generate_report->set_report(records.generate_category_report(target,isEn));
        }
    });

    connect(this,&Widget::found,edit_record,&Edit_record::changed);
}

void Widget::setEn()
{
    add_record->En();
    delete_record->En();
    edit_record->En();
    generate_report->En();
    get_help->En();
    load_from_file->En();
    menu->En();
    save_to_file->En();
    view_record->En();
    ui->lb1->setText("record operation");
    ui->lb2->setText("file operation");
    ui->lb3->setText("help");
    ui->pb11->setText("add record");
    ui->pb12->setText("edit record");
    ui->pb13->setText("delete record");
    ui->pb14->setText("view record");
    ui->pb15->setText("generate report");
    ui->pb21->setText("load from file");
    ui->pb22->setText("save to file");
    ui->pb31->setText("help");
}

void Widget::initAnimations()
{
    // 一级标签效果和动画
    lb1Effect = new QGraphicsOpacityEffect(this);
    lb1Effect->setOpacity(0.0);
    ui->lb1->setGraphicsEffect(lb1Effect);

    lb2Effect = new QGraphicsOpacityEffect(this);
    lb2Effect->setOpacity(0.0);
    ui->lb2->setGraphicsEffect(lb2Effect);

    lb3Effect = new QGraphicsOpacityEffect(this);
    lb3Effect->setOpacity(0.0);
    ui->lb3->setGraphicsEffect(lb3Effect);

    // 淡入动画
    lb1FadeIn = new QPropertyAnimation(lb1Effect, "opacity", this);
    lb1FadeIn->setDuration(300);
    lb1FadeIn->setStartValue(0.0);
    lb1FadeIn->setEndValue(1.0);

    lb2FadeIn = new QPropertyAnimation(lb2Effect, "opacity", this);
    lb2FadeIn->setDuration(300);
    lb2FadeIn->setStartValue(0.0);
    lb2FadeIn->setEndValue(1.0);

    lb3FadeIn = new QPropertyAnimation(lb3Effect, "opacity", this);
    lb3FadeIn->setDuration(300);
    lb3FadeIn->setStartValue(0.0);
    lb3FadeIn->setEndValue(1.0);

    // 淡出动画
    lb1FadeOut = new QPropertyAnimation(lb1Effect, "opacity", this);
    lb1FadeOut->setDuration(300);
    lb1FadeOut->setStartValue(1.0);
    lb1FadeOut->setEndValue(0.0);
    connect(lb1FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->lb1->hide();
    });

    lb2FadeOut = new QPropertyAnimation(lb2Effect, "opacity", this);
    lb2FadeOut->setDuration(300);
    lb2FadeOut->setStartValue(1.0);
    lb2FadeOut->setEndValue(0.0);
    connect(lb2FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->lb2->hide();
    });

    lb3FadeOut = new QPropertyAnimation(lb3Effect, "opacity", this);
    lb3FadeOut->setDuration(300);
    lb3FadeOut->setStartValue(1.0);
    lb3FadeOut->setEndValue(0.0);
    connect(lb3FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->lb3->hide();
    });

    // 二级按钮效果
    pb11Effect = new QGraphicsOpacityEffect(this);
    pb11Effect->setOpacity(0.0);
    ui->pb11->setGraphicsEffect(pb11Effect);

    pb12Effect = new QGraphicsOpacityEffect(this);
    pb12Effect->setOpacity(0.0);
    ui->pb12->setGraphicsEffect(pb12Effect);

    pb13Effect = new QGraphicsOpacityEffect(this);
    pb13Effect->setOpacity(0.0);
    ui->pb13->setGraphicsEffect(pb13Effect);

    pb14Effect = new QGraphicsOpacityEffect(this);
    pb14Effect->setOpacity(0.0);
    ui->pb14->setGraphicsEffect(pb14Effect);

    pb15Effect = new QGraphicsOpacityEffect(this);
    pb15Effect->setOpacity(0.0);
    ui->pb15->setGraphicsEffect(pb15Effect);

    pb21Effect = new QGraphicsOpacityEffect(this);
    pb21Effect->setOpacity(0.0);
    ui->pb21->setGraphicsEffect(pb21Effect);

    pb22Effect = new QGraphicsOpacityEffect(this);
    pb22Effect->setOpacity(0.0);
    ui->pb22->setGraphicsEffect(pb22Effect);

    pb31Effect = new QGraphicsOpacityEffect(this);
    pb31Effect->setOpacity(0.0);
    ui->pb31->setGraphicsEffect(pb31Effect);

    // 按钮淡入动画
    pb11FadeIn = new QPropertyAnimation(pb11Effect, "opacity", this);
    pb11FadeIn->setDuration(300);
    pb11FadeIn->setStartValue(0.0);
    pb11FadeIn->setEndValue(1.0);

    pb12FadeIn = new QPropertyAnimation(pb12Effect, "opacity", this);
    pb12FadeIn->setDuration(300);
    pb12FadeIn->setStartValue(0.0);
    pb12FadeIn->setEndValue(1.0);

    pb13FadeIn = new QPropertyAnimation(pb13Effect, "opacity", this);
    pb13FadeIn->setDuration(300);
    pb13FadeIn->setStartValue(0.0);
    pb13FadeIn->setEndValue(1.0);

    pb14FadeIn = new QPropertyAnimation(pb14Effect, "opacity", this);
    pb14FadeIn->setDuration(300);
    pb14FadeIn->setStartValue(0.0);
    pb14FadeIn->setEndValue(1.0);

    pb15FadeIn = new QPropertyAnimation(pb15Effect, "opacity", this);
    pb15FadeIn->setDuration(300);
    pb15FadeIn->setStartValue(0.0);
    pb15FadeIn->setEndValue(1.0);

    pb21FadeIn = new QPropertyAnimation(pb21Effect, "opacity", this);
    pb21FadeIn->setDuration(300);
    pb21FadeIn->setStartValue(0.0);
    pb21FadeIn->setEndValue(1.0);

    pb22FadeIn = new QPropertyAnimation(pb22Effect, "opacity", this);
    pb22FadeIn->setDuration(300);
    pb22FadeIn->setStartValue(0.0);
    pb22FadeIn->setEndValue(1.0);

    pb31FadeIn = new QPropertyAnimation(pb31Effect, "opacity", this);
    pb31FadeIn->setDuration(300);
    pb31FadeIn->setStartValue(0.0);
    pb31FadeIn->setEndValue(1.0);

    // 按钮淡出动画
    pb11FadeOut = new QPropertyAnimation(pb11Effect, "opacity", this);
    pb11FadeOut->setDuration(300);
    pb11FadeOut->setStartValue(1.0);
    pb11FadeOut->setEndValue(0.0);
    connect(pb11FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->pb11->hide();
    });

    pb12FadeOut = new QPropertyAnimation(pb12Effect, "opacity", this);
    pb12FadeOut->setDuration(300);
    pb12FadeOut->setStartValue(1.0);
    pb12FadeOut->setEndValue(0.0);
    connect(pb12FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->pb12->hide();
    });

    pb13FadeOut = new QPropertyAnimation(pb13Effect, "opacity", this);
    pb13FadeOut->setDuration(300);
    pb13FadeOut->setStartValue(1.0);
    pb13FadeOut->setEndValue(0.0);
    connect(pb13FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->pb13->hide();
    });

    pb14FadeOut = new QPropertyAnimation(pb14Effect, "opacity", this);
    pb14FadeOut->setDuration(300);
    pb14FadeOut->setStartValue(1.0);
    pb14FadeOut->setEndValue(0.0);
    connect(pb14FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->pb14->hide();
    });

    pb15FadeOut = new QPropertyAnimation(pb15Effect, "opacity", this);
    pb15FadeOut->setDuration(300);
    pb15FadeOut->setStartValue(1.0);
    pb15FadeOut->setEndValue(0.0);
    connect(pb15FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->pb15->hide();
    });

    pb21FadeOut = new QPropertyAnimation(pb21Effect, "opacity", this);
    pb21FadeOut->setDuration(300);
    pb21FadeOut->setStartValue(1.0);
    pb21FadeOut->setEndValue(0.0);
    connect(pb21FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->pb21->hide();
    });

    pb22FadeOut = new QPropertyAnimation(pb22Effect, "opacity", this);
    pb22FadeOut->setDuration(300);
    pb22FadeOut->setStartValue(1.0);
    pb22FadeOut->setEndValue(0.0);
    connect(pb22FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->pb22->hide();
    });

    pb31FadeOut = new QPropertyAnimation(pb31Effect, "opacity", this);
    pb31FadeOut->setDuration(300);
    pb31FadeOut->setStartValue(1.0);
    pb31FadeOut->setEndValue(0.0);
    connect(pb31FadeOut, &QPropertyAnimation::finished, [this]() {
        ui->pb31->hide();
    });
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    // 鼠标进入控件
    if (event->type() == QEvent::Enter) {
        leaveCheckTimer->stop();

        if (watched == ui->label) {
            fadeInLevel1();
        }
        else if (watched == ui->lb1) {
            fadeInLevel2For(ui->lb1);
        }
        else if (watched == ui->lb2) {
            fadeInLevel2For(ui->lb2);
        }
        else if (watched == ui->lb3) {
            fadeInLevel2For(ui->lb3);
        }
    }
    // 鼠标离开控件
    else if (event->type() == QEvent::Leave) {
        leaveCheckTimer->start(100);
    }

    return QWidget::eventFilter(watched, event);
}

void Widget::fadeInLevel1()
{
    // 显示一级标签
    if (ui->lb1->isHidden()) {
        ui->lb1->show();
        lb1FadeIn->start();
    }
    if (ui->lb2->isHidden()) {
        ui->lb2->show();
        lb2FadeIn->start();
    }
    if (ui->lb3->isHidden()) {
        ui->lb3->show();
        lb3FadeIn->start();
    }

    // 隐藏所有二级按钮
    ui->pb11->hide(); ui->pb12->hide(); ui->pb13->hide();
    ui->pb14->hide(); ui->pb15->hide();
    ui->pb21->hide(); ui->pb22->hide();
    ui->pb31->hide();
}

void Widget::fadeInLevel2For(QLabel *label)
{
    // 停止所有正在进行的二级淡出动画
    pb11FadeOut->stop(); pb12FadeOut->stop(); pb13FadeOut->stop();
    pb14FadeOut->stop(); pb15FadeOut->stop();
    pb21FadeOut->stop(); pb22FadeOut->stop();
    pb31FadeOut->stop();

    // 隐藏所有二级按钮
    ui->pb11->hide(); ui->pb12->hide(); ui->pb13->hide();
    ui->pb14->hide(); ui->pb15->hide();
    ui->pb21->hide(); ui->pb22->hide();
    ui->pb31->hide();

    // 重置透明度
    pb11Effect->setOpacity(0.0);
    pb12Effect->setOpacity(0.0);
    pb13Effect->setOpacity(0.0);
    pb14Effect->setOpacity(0.0);
    pb15Effect->setOpacity(0.0);
    pb21Effect->setOpacity(0.0);
    pb22Effect->setOpacity(0.0);
    pb31Effect->setOpacity(0.0);

    // 显示对应组的二级按钮
    if (label == ui->lb1) {
        ui->pb11->show();
        ui->pb12->show();
        ui->pb13->show();
        ui->pb14->show();
        ui->pb15->show();
        pb11FadeIn->start();
        pb12FadeIn->start();
        pb13FadeIn->start();
        pb14FadeIn->start();
        pb15FadeIn->start();
    }
    else if (label == ui->lb2) {
        ui->pb21->show();
        ui->pb22->show();
        pb21FadeIn->start();
        pb22FadeIn->start();
    }
    else if (label == ui->lb3) {
        ui->pb31->show();
        pb31FadeIn->start();
    }
}

void Widget::fadeOutAll()
{
    // 淡出一级标签
    if (ui->lb1->isVisible()) lb1FadeOut->start();
    if (ui->lb2->isVisible()) lb2FadeOut->start();
    if (ui->lb3->isVisible()) lb3FadeOut->start();

    // 淡出所有二级按钮
    if (ui->pb11->isVisible()) pb11FadeOut->start();
    if (ui->pb12->isVisible()) pb12FadeOut->start();
    if (ui->pb13->isVisible()) pb13FadeOut->start();
    if (ui->pb14->isVisible()) pb14FadeOut->start();
    if (ui->pb15->isVisible()) pb15FadeOut->start();
    if (ui->pb21->isVisible()) pb21FadeOut->start();
    if (ui->pb22->isVisible()) pb22FadeOut->start();
    if (ui->pb31->isVisible()) pb31FadeOut->start();
}

bool Widget::isMouseInControlArea()
{
    QPoint mousePos = QCursor::pos();

    // 检查所有控件区域
    QList<QWidget*> allWidgets = {
        ui->label,
        ui->lb1, ui->lb2, ui->lb3,
        ui->pb11, ui->pb12, ui->pb13, ui->pb14, ui->pb15,
        ui->pb21, ui->pb22,
        ui->pb31
    };

    for (QWidget *widget : allWidgets) {
        if (widget->isVisible()) {
            QPoint localPos = widget->mapFromGlobal(mousePos);
            if (widget->rect().contains(localPos)) {
                return true;
            }
        }
    }

    return false;
}
