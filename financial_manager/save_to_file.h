#ifndef SAVE_TO_FILE_H
#define SAVE_TO_FILE_H

#include <QWidget>

namespace Ui {
class Save_to_file;
}

class Save_to_file : public QWidget
{
    Q_OBJECT

public:
    void emit_the_signal();
    explicit Save_to_file(QWidget *parent = nullptr);
    ~Save_to_file();
    void En();
    void em();

signals:
    void save_record(QString file_name);
    void to_menu();

private:
    Ui::Save_to_file *ui;
};

#endif // SAVE_TO_FILE_H
