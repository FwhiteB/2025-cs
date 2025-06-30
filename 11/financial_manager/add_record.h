#ifndef ADD_RECORD_H
#define ADD_RECORD_H

#include <QWidget>
#include"sin_record.h"

namespace Ui {
class Add_record;
}

class Add_record : public QWidget
{
    Q_OBJECT

public:
    explicit Add_record(QWidget *parent = nullptr);
    ~Add_record();
    void En();
    void em();

signals :
    void ar(sin_record tec);
    void to_menu();

private:
    Ui::Add_record *ui;
};

#endif // ADD_RECORD_H
