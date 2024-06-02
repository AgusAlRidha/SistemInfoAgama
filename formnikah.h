#ifndef FORMNIKAH_H
#define FORMNIKAH_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class FormNikah;
}

class FormNikah : public QWidget
{
    Q_OBJECT

public:
    explicit FormNikah(QWidget *parent = nullptr);
    ~FormNikah();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FormNikah *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMNIKAH_H
