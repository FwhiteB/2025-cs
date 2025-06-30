#include "sin_record.h"

sin_record::sin_record(): date(), isIncome(0), amount(0), category(""), description("") {}

sin_record::sin_record(QDate d, bool t, double a, QString c, QString desc)
    : date(d), isIncome(t), amount(a), category(c), description(desc) {}

sin_record::~sin_record(){}

QString sin_record::toString() const {
    QString i_o = isIncome ? "收入/Income " : "支出/Expense";
    QString amount_str = QString("￥%1").arg(QString::number(amount, 'f', 2));
    amount_str = amount_str.rightJustified(16, ' ');
    return QString("%1 | %2 | %3 | %4 | %5")
        .arg(date.toString("yyyy-MM-dd"))
        .arg(i_o)
        .arg(amount_str)
        .arg(category)
        .arg(description);
}

