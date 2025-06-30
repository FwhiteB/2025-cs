#ifndef DELETE_RECORD_H
#define DELETE_RECORD_H

#include <QWidget>

namespace Ui {
class Delete_record;
}

class Delete_record : public QWidget
{
    Q_OBJECT

signals :
    void dr(int index);
signals :
    void to_menu();

public:
    explicit Delete_record(QWidget *parent = nullptr);
    ~Delete_record();
    void En();
    void em();

private:
    Ui::Delete_record *ui;
};

#endif // DELETE_RECORD_H
