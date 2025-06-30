#ifndef VIEW_RECORD_H
#define VIEW_RECORD_H

#include <QWidget>

namespace Ui {
class View_record;
}

class View_record : public QWidget
{
    Q_OBJECT

signals:
    void to_menu();

public:
    explicit View_record(QWidget *parent = nullptr);
    void prepare(QString input);
    ~View_record();
    void En();
    void em();

private:
    Ui::View_record *ui;
};

#endif // VIEW_RECORD_H
