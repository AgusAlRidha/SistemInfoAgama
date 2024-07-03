#ifndef FORMPELAYAN_H
#define FORMPELAYAN_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class FormPelayan;
}

class FormPelayan : public QWidget
{
    Q_OBJECT

public:
    explicit FormPelayan(QWidget *parent = nullptr);
    void loadtablePelayan();
    ~FormPelayan();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tablePelayan_activated(const QModelIndex &index);

private:
    Ui::FormPelayan *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel * tabelModel;
};

#endif // FORMPELAYAN_H
