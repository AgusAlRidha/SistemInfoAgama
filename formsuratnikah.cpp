#include "formsuratnikah.h"
#include "ui_formsuratnikah.h"

FormSuratNikah::FormSuratNikah(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormSuratNikah)
{
    ui->setupUi(this);
}

FormSuratNikah::~FormSuratNikah()
{
    delete ui;
}

void FormSuratNikah::on_pushButton_4_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("INSERT INTO surat_nikah (id_suratn, id_nikah, id_pelayan)"
                "VALUE (:id_suratn, :id_nikah, :id_pelayan)");
    sql.bindValue(":id_suratn",ui->idSuratNikahLineEdit->text());
    sql.bindValue(":id_nikah",ui->idNikahLineEdit->text());
    sql.bindValue(":id_pelayan",ui->idPelayanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSuratNikah::on_pushButton_3_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("UPDATE surat_nikah SET id_nikah=:id_nikah, id_pelayan=:id_pelayan WHERE id_suratn=:id_suratn");
    sql.bindValue(":id_suratn",ui->idSuratNikahLineEdit->text());
    sql.bindValue(":id_nikah",ui->idNikahLineEdit->text());
    sql.bindValue(":id_pelayan",ui->idPelayanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSuratNikah::on_pushButton_2_clicked()
{
    QSqlQuery sql(konek);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM surat_nikah WHERE id_suratn=:id_suratn");
    sql.bindValue(":id_suratn",ui->idSuratNikahLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSuratNikah::on_pushButton_clicked()
{
    QSqlQuery sql(konek);
    sql.prepare("DELETE FROM surat_nikah WHERE id_suratn=:id_suratn");
    sql.bindValue(":id_suratn",ui->idSuratNikahLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

