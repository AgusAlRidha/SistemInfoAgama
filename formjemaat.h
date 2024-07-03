#ifndef FORMJEMAAT_H
#define FORMJEMAAT_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlQueryModel>

namespace Ui {
class FormJemaat;
}

class FormJemaat : public QWidget
{
    Q_OBJECT

public:
    explicit FormJemaat(QWidget *parent = nullptr);
    void loadtableJemaat();
    ~FormJemaat();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableJemaat_activated(const QModelIndex &index);

private:
    Ui::FormJemaat *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
    QSqlQueryModel * tabelModel;
};

#endif // FORMJEMAAT_H
