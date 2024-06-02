#ifndef FORMSURATNIKAH_H
#define FORMSURATNIKAH_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class FormSuratNikah;
}

class FormSuratNikah : public QWidget
{
    Q_OBJECT

public:
    explicit FormSuratNikah(QWidget *parent = nullptr);
    ~FormSuratNikah();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FormSuratNikah *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMSURATNIKAH_H
