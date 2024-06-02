#include "formjemaat.h"
#include "ui_formjemaat.h"

FormJemaat::FormJemaat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormJemaat)
{

}

FormJemaat::~FormJemaat()
{
    delete ui;
}

void FormJemaat::on_pushButton_4_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("INSERT INTO jemaat (id_jemaat, nama, jenis_kelamin, tempat_lahir, alamat, telpon)"
                "VALUE (:id_jemaat, :nama, :jenis_kelamin, :tempat_lahir, :alamat, :telpon)");
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":jenis_kelamin",ui->jenisKelaminComboBox->currentText());
    sql.bindValue(":tempat_lahir",ui->tempatLahirLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telpon",ui->telponLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormJemaat::on_pushButton_3_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("UPDATE jemaat SET nama=:nama, jenis_kelamin=:jenis_kelamin, "
                "tempat_lahir=:tempat_lahir, alamat=:alamat, telpon=:telpon WHERE id_jemaat= :id_jemaat");
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":jenis_kelamin",ui->jenisKelaminComboBox->currentText());
    sql.bindValue(":tempat_lahir",ui->tempatLahirLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telpon",ui->telponLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormJemaat::on_pushButton_2_clicked()
{
    QSqlQuery sql(konek);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM jemaat WHERE id_jemaat=:id_jemaat");
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormJemaat::on_pushButton_clicked()
{
    QSqlQuery sql(konek);
    sql.prepare("DELETE FROM baptis WHERE id_jemaat=:id_jemaat");
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

