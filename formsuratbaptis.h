#ifndef FORMSURATBAPTIS_H
#define FORMSURATBAPTIS_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class FormSuratBaptis;
}

class FormSuratBaptis : public QWidget
{
    Q_OBJECT

public:
    explicit FormSuratBaptis(QWidget *parent = nullptr);
    void loadtableSuratb();
    ~FormSuratBaptis();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableSuratb_activated(const QModelIndex &index);

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::FormSuratBaptis *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel * tabelModel;
};

#endif // FORMSURATBAPTIS_H
