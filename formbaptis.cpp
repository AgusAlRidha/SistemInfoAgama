#include "formbaptis.h"
#include "ui_formbaptis.h"

FormBaptis::FormBaptis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormBaptis)
{
    ui->setupUi(this);

    QSqlDatabase konek = QSqlDatabase::addDatabase("QODBC");
    konek.setDatabaseName("dsn_keagamaan");
    konek.setUserName("root");
    konek.setPassword("");

    if(konek.open()){
        qDebug()<<konek.lastError().text();
    }else{
        qDebug()<<"Database Terhubung";
    }
}

FormBaptis::~FormBaptis()
{
    delete ui;
}

void FormBaptis::on_pushButton_4_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("INSERT INTO baptis (id_baptis, id_jemaat, nama_baptis, jenis_kelamin, nama_ayah, nama_ibu)"
                "VALUE (:id_baptis, :id_jemaat, :nama_baptis, :jenis_kelamin, :nama_ayah, :nama_ibu)");
    sql.bindValue(":id_baptis",ui->idBaptisLineEdit->text());
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());
    sql.bindValue(":nama_baptis",ui->namaBaptisLineEdit->text());
    sql.bindValue(":jenis_kelamin",ui->jenisKelaminComboBox->currentText());
    sql.bindValue(":nama_ayah",ui->namaAyahLineEdit->text());
    sql.bindValue(":nama_ibu",ui->namaIbuLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Simpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBaptis::on_pushButton_3_clicked()
{
    QSqlQuery sql (konek);
    sql.prepare("UPDATE baptis SET id_jemaat=:id_jemaat, nama_baptis=:nama_baptis, jenis_kelamin=:jenis_kelamin, "
                "jenis_kelamin=:jenis_kelamin, nama_ayah=:nama_ayah, nama_ayah=:nama_ayah WHERE id_baptis=:id_baptis");
    sql.bindValue(":id_baptis",ui->idBaptisLineEdit->text());
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());
    sql.bindValue(":nama_baptis",ui->namaBaptisLineEdit->text());
    sql.bindValue(":jenis_kelamin",ui->jenisKelaminComboBox->currentText());
    sql.bindValue(":nama_ayah",ui->namaAyahLineEdit->text());
    sql.bindValue(":nama_ayah",ui->namaIbuLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Edit";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBaptis::on_pushButton_2_clicked()
{
    QSqlQuery sql(konek);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM baptis WHERE id_baptis=:id_baptis");
    sql.bindValue(":id_baptis",ui->idBaptisLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}
void FormBaptis::on_pushButton_clicked()
{
    QSqlQuery sql(konek);
    sql.prepare("DELETE FROM baptis WHERE id_baptis=:id_baptis");
    sql.bindValue(":id_baptis",ui->idBaptisLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

