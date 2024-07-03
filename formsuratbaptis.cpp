#include "formsuratbaptis.h"
#include "ui_formsuratbaptis.h"
#include "QMessageBox"

FormSuratBaptis::FormSuratBaptis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormSuratBaptis)
{
    ui->setupUi(this);
    loadtableSuratb();
}

FormSuratBaptis::~FormSuratBaptis()
{
    delete ui;
}

void FormSuratBaptis::loadtableSuratb()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT*FROM surat_baptis ORDER BY id_suratb ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("Id Surat Baptis"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Id Baptis"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Id Pelayan"));

    ui->tableSuratb->setModel(tabelModel);
    ui->tableSuratb->setColumnWidth(0,100);
    ui->tableSuratb->setColumnWidth(1,250);
    ui->tableSuratb->setColumnWidth(2,100);
    ui->tableSuratb->show();
}


void FormSuratBaptis::on_tableSuratb_activated(const QModelIndex &index)
{
    int baris = ui->tableSuratb->currentIndex().row();
    // QMessageBox::information(this, "warning", QString::number(baris));
    ui->idSuratBaptisLineEdit->setText(ui->tableSuratb->model()->index(baris,0).data().toString());
    ui->idBaptisLineEdit->setText(ui->tableSuratb->model()->index(baris,1).data().toString());
    ui->idPelayanLineEdit->setText(ui->tableSuratb->model()->index(baris,2).data().toString());
}



void FormSuratBaptis::on_pushButton_8_clicked()
{
    if(ui->idSuratBaptisLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Surat Baptis Belum Di Isi");
        ui->idSuratBaptisLineEdit->setFocus();

    }else if(ui->idBaptisLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Baptis Belum Di Isi");
        ui->idBaptisLineEdit->setFocus();

    }else if(ui->idPelayanLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Pelayan Belum Di Isi");
        ui->idPelayanLineEdit->setFocus();

    }else {

        QSqlQuery duplikat;
        duplikat.prepare("SELECT * FROM surat_baptis WHERE id_suratb = '"+ui->idSuratBaptisLineEdit->text()+"'");
        duplikat.exec();
        if(duplikat.next()){
            QMessageBox::information(this, "warning", "id_suratb sdh terdaftar");
            ui->idBaptisLineEdit->setText(duplikat.value(1).toString());
            ui->idPelayanLineEdit->setText(duplikat.value(2).toString());
        }else{

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
    }
}

void FormSuratBaptis::on_pushButton_5_clicked()
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


void FormSuratBaptis::on_pushButton_7_clicked()
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



void FormSuratBaptis::on_pushButton_6_clicked()
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

