#ifndef EDIT_RECORD_H
#define EDIT_RECORD_H

#include <QWidget>
#include "sin_record.h"

namespace Ui {
class Edit_record;
}

class Edit_record : public QWidget
{
    Q_OBJECT
public:
    explicit Edit_record(QWidget *parent = nullptr);
    ~Edit_record();
    void En();
    void em();

signals :
    void er(int index,sin_record yec);
    void gr(int index);
    void to_menu();
public slots :
    void changed(sin_record gr);

private:
    Ui::Edit_record *ui;
};

#endif // EDIT_RECORD_H
