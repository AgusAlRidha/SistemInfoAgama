#include "formsuratbaptis.h"
#include "ui_formsuratbaptis.h"

FormSuratBaptis::FormSuratBaptis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormSuratBaptis)
{
    ui->setupUi(this);
}

FormSuratBaptis::~FormSuratBaptis()
{
    delete ui;
}

void FormSuratBaptis::on_pushButton_4_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("INSERT INTO surat_baptis (id_suratb, id_baptis, id_pelayan)"
                "VALUE (:id_suratb, :id_baptis, :id_pelayan)");
    sql.bindValue(":id_suratb",ui->idSuratBaptisLineEdit->text());
    sql.bindValue(":id_baptis",ui->idBaptisLineEdit->text());
    sql.bindValue(":id_pelayan",ui->idPelayanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSuratBaptis::on_pushButton_3_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("UPDATE surat_baptis SET id_baptis=:id_baptis, id_pelayan=:id_pelayan WHERE id_suratb=:id_suratb");
    sql.bindValue(":id_suratb",ui->idSuratBaptisLineEdit->text());
    sql.bindValue(":id_baptis",ui->idBaptisLineEdit->text());
    sql.bindValue(":id_pelayan",ui->idPelayanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSuratBaptis::on_pushButton_2_clicked()
{
    QSqlQuery sql(konek);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM surat_baptis WHERE id_suratb=:id_suratb");
    sql.bindValue(":id_suratb",ui->idSuratBaptisLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSuratBaptis::on_pushButton_clicked()
{
    QSqlQuery sql(konek);
    sql.prepare("DELETE FROM surat_baptis WHERE id_suratb=:id_suratb");
    sql.bindValue(":id_suratb",ui->idSuratBaptisLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

