#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QtDebug>
#include <QWidget>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QTimer>
#include <QLabel>
#include <QMessageBox>
#include "add_record.h"
#include "delete_record.h"
#include "edit_record.h"
#include "generate_report.h"
#include "get_help.h"
#include "language.h"
#include "load_from_file.h"
#include "menu.h"
#include "save_to_file.h"
#include "view_record.h"
#include "crecord.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void add_stacked_widgets();
    void connections();

signals:
    void found(sin_record found);


private:
    Ui::Widget *ui;
    QStackedWidget *stackedWidget = new QStackedWidget(this);
    Add_record *add_record = new Add_record(this);
    Delete_record *delete_record = new Delete_record(this);
    Edit_record *edit_record = new Edit_record(this);
    Generate_report *generate_report = new Generate_report(this);
    Get_help *get_help = new Get_help(this);
    Language *language = new Language(this);
    Load_from_file *load_from_file = new Load_from_file(this);
    Menu *menu = new Menu(this);
    Save_to_file *save_to_file = new Save_to_file(this);
    View_record *view_record = new View_record(this);
    CRecord records;
    bool isEn=false;
    void setEn();

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;

    // 动画对象
    QPropertyAnimation *lb1FadeIn, *lb2FadeIn, *lb3FadeIn;
    QPropertyAnimation *pb11FadeIn, *pb12FadeIn, *pb13FadeIn, *pb14FadeIn, *pb15FadeIn;
    QPropertyAnimation *pb21FadeIn, *pb22FadeIn;
    QPropertyAnimation *pb31FadeIn;

    QPropertyAnimation *lb1FadeOut, *lb2FadeOut, *lb3FadeOut;
    QPropertyAnimation *pb11FadeOut, *pb12FadeOut, *pb13FadeOut, *pb14FadeOut, *pb15FadeOut;
    QPropertyAnimation *pb21FadeOut, *pb22FadeOut;
    QPropertyAnimation *pb31FadeOut;

    // 透明度效果
    QGraphicsOpacityEffect *lb1Effect, *lb2Effect, *lb3Effect;
    QGraphicsOpacityEffect *pb11Effect, *pb12Effect, *pb13Effect, *pb14Effect, *pb15Effect;
    QGraphicsOpacityEffect *pb21Effect, *pb22Effect;
    QGraphicsOpacityEffect *pb31Effect;

    QTimer *leaveCheckTimer;

    void initAnimations();
    void fadeInLevel1();
    void fadeInLevel2For(QLabel *label);
    void fadeOutAll();
    bool isMouseInControlArea();
};
#endif // WIDGET_H
