#ifndef FORMNIKAH_H
#define FORMNIKAH_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class FormNikah;
}

class FormNikah : public QWidget
{
    Q_OBJECT

public:
    explicit FormNikah(QWidget *parent = nullptr);
    void loadtableNikah();
    ~FormNikah();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableNikah_activated(const QModelIndex &index);

private:
    Ui::FormNikah *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel * tabelModel;
};

#endif // FORMNIKAH_H
