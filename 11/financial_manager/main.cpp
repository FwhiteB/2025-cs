#include "widget.h"
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

#include <QApplication>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QDate>
#include <QtDebug>
#include <vector>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QDir::setCurrent(QCoreApplication::applicationDirPath());
    //sin_record c;
    //c.toString();

    //View_record l;
    //l.show();
    // Language l1;
    // l1.show();
    // Menu l2;
    // l2.show();
    // Load_from_file l3;
    // l3.show();
    // Save_to_file l4;
    // l4.show();

    //QString s="12345";
    //qDebug()<<s.toInt()+1;

    w.show();
    return a.exec();
}
