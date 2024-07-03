#ifndef FORMBAPTIS_H
#define FORMBAPTIS_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class FormBaptis;
}

class FormBaptis : public QWidget
{
    Q_OBJECT

public:
    explicit FormBaptis(QWidget *parent = nullptr);
    void loadtableBaptis();
    ~FormBaptis();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableBaptis_activated(const QModelIndex &index);

private:
    Ui::FormBaptis *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel * tabelModel;
};

#endif // FORMBAPTIS_H
