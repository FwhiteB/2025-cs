#include "crecord.h"

CRecord::CRecord(){}

CRecord::~CRecord(){};

// 保存函数修改：使用逗号分隔符，添加CSV标题行
bool CRecord::save_to_file(QString filename)
{
    if(filename.isEmpty()) {
        qDebug() << "文件名不能为空";
        return false;
    }

    // 获取并验证程序目录
    QString appDir = QCoreApplication::applicationDirPath();
    if(appDir.isEmpty()) {
        qDebug() << "无法获取程序目录";
        return false;
    }

    // 组合路径并验证
    QDir dir(appDir);
    if(!dir.exists()) {
        qDebug() << "程序目录不存在:" << appDir;
        return false;
    }

    QString filepath = dir.filePath(filename);

    // 检查路径是否合法
    QFileInfo fileInfo(filepath);
    if(fileInfo.isDir()) {
        qDebug() << "路径指向的是目录而非文件:" << filepath;
        return false;
    }

    QFile file(filepath);
    qDebug() << "保存文件路径:" << filepath;

    // 以写入模式打开文件
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "无法打开文件:" << file.errorString();
        return false;
    }

    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);

    // 写入CSV标题行（与加载函数匹配）
    out << "Date,Type,Amount,Category,Description\n";

    // 写入数据（使用逗号分隔）
    for (const auto &rec : records) {
        out << rec.date.toString("yyyy-MM-dd") << ","
            << (rec.isIncome ? "1" : "0") << ","
            << QString::number(rec.amount, 'f', 2) << ","
            << rec.category << ","
            << rec.description << "\n";
    }

    // 显式关闭并检查错误
    file.close();
    if(file.error() != QFile::NoError) {
        qDebug() << "写入文件错误:" << file.errorString();
        return false;
    }

    return true;
}

// 加载函数修改：使用逗号分隔符，处理标题行
bool CRecord::load_from_file(QString filename)
{
    if(filename.isEmpty()) {
        qDebug() << "文件名不能为空";
        return false;
    }

    // 获取并验证程序目录
    QString appDir = QCoreApplication::applicationDirPath();
    if(appDir.isEmpty()) {
        qDebug() << "无法获取程序目录";
        return false;
    }

    // 组合路径并验证
    QDir dir(appDir);
    if(!dir.exists()) {
        qDebug() << "程序目录不存在:" << appDir;
        return false;
    }

    QString filepath = dir.filePath(filename);

    // 检查路径是否合法
    QFileInfo fileInfo(filepath);
    if(fileInfo.isDir()) {
        qDebug() << "路径指向的是目录而非文件:" << filepath;
        return false;
    }

    QFile file(filepath);
    qDebug() << "加载文件路径:" << filepath;

    // 尝试打开文件（只读模式）
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "无法打开文件:" << file.errorString();
        return false;
    }

    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);

    records.clear();  // 清空旧数据

    // 读取并验证标题行
    QString header = in.readLine().trimmed();
    if(header != "Date,Type,Amount,Category,Description") {
        qDebug() << "文件格式错误: 缺少或无效的标题行";
        file.close();
        return false;
    }

    int lineNum = 1;  // 跟踪行号用于错误报告
    while (!in.atEnd()) {
        lineNum++;
        QString line = in.readLine().trimmed();
        if(line.isEmpty()) continue;  // 跳过空行

        QStringList parts = line.split(',');

        // 检查字段数量
        if(parts.size() != 5) {
            qDebug() << "格式错误 (行" << lineNum << "): 字段数量不符 -" << line;
            continue;
        }

        sin_record rec;

        // 解析日期
        rec.date = QDate::fromString(parts[0].trimmed(), "yyyy-MM-dd");
        if(!rec.date.isValid()) {
            qDebug() << "日期格式错误 (行" << lineNum << "):" << parts[0];
            continue;
        }

        // 解析收入/支出类型
        QString typeStr = parts[1].trimmed();
        if(typeStr != "0" && typeStr != "1") {
            qDebug() << "类型值错误 (行" << lineNum << "):" << parts[1];
            continue;
        }
        rec.isIncome = (typeStr == "1");

        // 解析金额
        bool ok;
        rec.amount = parts[2].trimmed().toDouble(&ok);
        if(!ok || rec.amount < 0) {
            qDebug() << "金额格式错误 (行" << lineNum << "):" << parts[2];
            continue;
        }

        // 解析类别和描述
        rec.category = parts[3].trimmed();
        rec.description = parts[4].trimmed();

        records.push_back(rec);
    }

    // 显式关闭并检查错误
    file.close();
    if(file.error() != QFile::NoError) {
        qDebug() << "读取文件错误:" << file.errorString();
        return false;
    }

    return true;
}

QString CRecord::view_record()
{
    QString ret="";
    for(auto i=records.begin();i!=records.end();i++)
    {
        ret+=i->toString();
        ret+="\n";
    }
    return ret;
}

QString CRecord::generate_month_report(int m,bool isEn)
{
    double tot_money=0;
    double month_money=0;
    for(auto i=records.begin();i!=records.end();i++)
    {
        tot_money+=i->amount;
        if(i->date.month()==m) month_money+=i->amount;
    }
    QString ret;
    if(!isEn)
    {
        ret = QString("月份: %1\n月份收入: %2\n总收入：%3").arg(m).arg(month_money).arg(tot_money);
    }
    else
    {
        ret = QString("Month: %1\nMonthly Income: %2\nTotal income：%3").arg(m).arg(month_money).arg(tot_money);
    }
    return ret;
}

QString CRecord::generate_year_report(int y,bool isEn)
{
    double tot_money=0;
    double year_money=0;
    for(auto i=records.begin();i!=records.end();i++)
    {
        tot_money+=i->amount;
        if(i->date.year()==y) year_money+=i->amount;
    }
    QString ret;
    if(!isEn)
    {
        ret = QString("年份: %1\n年份收入: %2\n总收入：%3").arg(y).arg(year_money).arg(tot_money);
    }
    else
    {
        ret = QString("Year: %1\nYearly Income: %2\nTotal income：%3").arg(y).arg(year_money).arg(tot_money);
    }
    return ret;
}

QString CRecord::generate_category_report(QString c,bool isEn)
{
    double tot_money=0;
    double cat_money=0;
    for(auto i=records.begin();i!=records.end();i++)
    {
        tot_money+=i->amount;
        if(i->category==c) cat_money+=i->amount;
    }
    QString ret;
    if(!isEn)
    {
        ret = QString("种类: %1\n种类收入: %2\n总收入：%3").arg(c).arg(cat_money).arg(tot_money);
    }
    else
    {
        ret = QString("Category: %1\nCategorized income: %2\nTotal income：%3").arg(c).arg(cat_money).arg(tot_money);
    }
    return ret;
}
