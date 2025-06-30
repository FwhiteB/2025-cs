#ifndef SIN_RECORD_H
#define SIN_RECORD_H
#include <QDate>

class sin_record
{
public:
    QDate date;           // 年月日
    bool isIncome;         // "收入" 或 "支出"
    double amount;        // 金额
    QString category;     // 类别（如“饮食”、“交通”）
    QString description;  // 描述

public:
    sin_record();
    sin_record(QDate d, bool t, double a, QString c, QString desc);
    QString toString() const;
    ~sin_record();
};

#endif // SIN_RECORD_H
