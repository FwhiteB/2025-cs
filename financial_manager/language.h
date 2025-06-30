#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <QWidget>

namespace Ui {
class Language;
}

class Language : public QWidget
{
    Q_OBJECT

public:
    explicit Language(QWidget *parent = nullptr);
    ~Language();

signals:
    void Language_en();
    void Language_cn();
    void leave();

private:
    Ui::Language *ui;
};

#endif // LANGUAGE_H
