#ifndef FORMSURATNIKAH_H
#define FORMSURATNIKAH_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class FormSuratNikah;
}

class FormSuratNikah : public QWidget
{
    Q_OBJECT

public:
    explicit FormSuratNikah(QWidget *parent = nullptr);
    void loadtableSuratn();
    ~FormSuratNikah();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableSuratn_activated(const QModelIndex &index);

private:
    Ui::FormSuratNikah *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel * tabelModel;
};

#endif // FORMSURATNIKAH_H
