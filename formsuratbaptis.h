#ifndef FORMSURATBAPTIS_H
#define FORMSURATBAPTIS_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class FormSuratBaptis;
}

class FormSuratBaptis : public QWidget
{
    Q_OBJECT

public:
    explicit FormSuratBaptis(QWidget *parent = nullptr);
    ~FormSuratBaptis();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FormSuratBaptis *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMSURATBAPTIS_H
