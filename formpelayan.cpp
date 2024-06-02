#include "formpelayan.h"
#include "ui_formpelayan.h"

FormPelayan::FormPelayan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPelayan)
{
    ui->setupUi(this);
}

FormPelayan::~FormPelayan()
{
    delete ui;
}

void FormPelayan::on_pushButton_4_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("INSERT INTO pelayan (id_pelayan, nama, status, gambar)"
                "VALUE (:id_pelayan, :nama, :status, :gambar)");
    sql.bindValue(":id_pelayan",ui->idPelayanLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":status",ui->statusLineEdit->text());
    sql.bindValue(":gambar",ui->gambarLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelayan::on_pushButton_3_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("UPDATE pelayan SET nama=:nama, status=:status, gambar=:gambar WHERE id_pelayan=:id_pelayan");
    sql.bindValue(":id_pelayan",ui->idPelayanLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":status",ui->statusLineEdit->text());
    sql.bindValue(":gambar",ui->gambarLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelayan::on_pushButton_2_clicked()
{
    QSqlQuery sql(konek);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM pelayan WHERE id_pelayan=:id_pelayan");
    sql.bindValue(":id_pelayan",ui->idPelayanLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelayan::on_pushButton_clicked()
{
    QSqlQuery sql(konek);
    sql.prepare("DELETE FROM pelayan WHERE id_pelayan=:id_pelayan");
    sql.bindValue(":id_pelayan",ui->idPelayanLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

