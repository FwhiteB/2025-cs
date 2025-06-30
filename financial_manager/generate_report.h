#ifndef GENERATE_REPORT_H
#define GENERATE_REPORT_H

#include <QWidget>

namespace Ui {
class Generate_report;
}

class Generate_report : public QWidget
{
    Q_OBJECT

signals:
    void gr(int index,QString asd);
signals:
    void to_menu();
public:
    explicit Generate_report(QWidget *parent = nullptr);
    ~Generate_report();
    int index=1;
    void set_report(QString input);
    void En();
    void em();

private:
    Ui::Generate_report *ui;
    bool isEn=false;
};

#endif // GENERATE_REPORT_H
