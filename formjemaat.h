#ifndef FORMJEMAAT_H
#define FORMJEMAAT_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class FormJemaat;
}

class FormJemaat : public QWidget
{
    Q_OBJECT

public:
    explicit FormJemaat(QWidget *parent = nullptr);
    ~FormJemaat();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::FormJemaat *ui;
    QSqlDatabase konek;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMJEMAAT_H
