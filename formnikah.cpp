#include "formnikah.h"
#include "ui_formnikah.h"

FormNikah::FormNikah(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormNikah)
{
    ui->setupUi(this);
}

FormNikah::~FormNikah()
{
    delete ui;
}

void FormNikah::on_pushButton_4_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("INSERT INTO nikah (id_nikah, id_jemaat, pas_pria, pas_wanita, nama_saksi)"
                "VALUE (:id_nikah, :id_jemaat, :pas_pria, :pas_wanita, :nama_saksi)");
    sql.bindValue(":id_nikah",ui->idNikahLineEdit->text());
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());
    sql.bindValue(":pas_pria",ui->pasPriaLineEdit->text());
    sql.bindValue(":pas_wanita",ui->pasWanitaLineEdit->text());
    sql.bindValue(":nama_saksi",ui->namaSaksiLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormNikah::on_pushButton_3_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("UPDATE nikah SET id_jemaat=:id_jemaat, pas_pria=:pas_pria, "
                "pas_wanita=:pas_wanita, nama_saksi=:nama_saksi WHERE id_nikah=:id_nikah");
    sql.bindValue(":id_nikah",ui->idNikahLineEdit->text());
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());
    sql.bindValue(":pas_pria",ui->pasPriaLineEdit->text());
    sql.bindValue(":pas_wanita",ui->pasWanitaLineEdit->text());
    sql.bindValue(":nama_saksi",ui->namaSaksiLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormNikah::on_pushButton_2_clicked()
{
    QSqlQuery sql(konek);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM nikah WHERE id_nikah=:id_nikah");
    sql.bindValue(":id_nikah",ui->idNikahLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}




void FormNikah::on_pushButton_clicked()
{
    QSqlQuery sql(konek);
    sql.prepare("DELETE FROM nikah WHERE id_nikah=:id_nikah");
    sql.bindValue(":id_nikah",ui->idNikahLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

