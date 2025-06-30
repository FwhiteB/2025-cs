#ifndef GET_HELP_H
#define GET_HELP_H

#include <QWidget>

namespace Ui {
class Get_help;
}

class Get_help : public QWidget
{
    Q_OBJECT

signals:
    void to_menu();

public:
    explicit Get_help(QWidget *parent = nullptr);
    ~Get_help();
    void En();

private:
    Ui::Get_help *ui;
};

#endif // GET_HELP_H
