#ifndef LOAD_FROM_FILE_H
#define LOAD_FROM_FILE_H

#include <QWidget>

namespace Ui {
class Load_from_file;
}

class Load_from_file : public QWidget
{
    Q_OBJECT

public:
    void emit_signal();
    explicit Load_from_file(QWidget *parent = nullptr);
    ~Load_from_file();
    void En();
    void em();

signals:
    void load_record(QString file_name);
    void to_menu();

private:
    Ui::Load_from_file *ui;
};

#endif // LOAD_FROM_FILE_H
