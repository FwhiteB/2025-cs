#ifndef CRECORD_H
#define CRECORD_H
#include<qstring.h>
#include <QDate>
#include <vector>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <sin_record.h>
#include <QApplication>
#include <QMessageBox>


class CRecord
{
public:
    std::vector<sin_record> records;

public:
    CRecord();
    ~CRecord();
    bool save_to_file(QString file_name);
    bool load_from_file(QString file_name);
    QString view_record();
    QString generate_month_report(int m,bool isEn);
    QString generate_year_report(int y,bool isEn);
    QString generate_category_report(QString c,bool isEn);
};

#endif // CRECORD_H
