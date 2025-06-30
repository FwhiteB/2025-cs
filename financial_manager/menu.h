#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();
    void En();

signals:
    void to_add_record();
    void to_delete_record();
    void to_edit_record();
    void to_generate_report();
    void to_get_help();
    void to_load_from_file();
    void to_save_to_file();
    void to_view_record();
    void leave_program();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
