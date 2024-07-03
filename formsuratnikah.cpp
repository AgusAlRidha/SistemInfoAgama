#include "formsuratnikah.h"
#include "ui_formsuratnikah.h"
#include "QMessageBox"

FormSuratNikah::FormSuratNikah(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormSuratNikah)
{
    ui->setupUi(this);
    loadtableSuratn();
}

FormSuratNikah::~FormSuratNikah()
{
    delete ui;
}

void FormSuratNikah::loadtableSuratn()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT*FROM surat_nikah ORDER BY id_suratn ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("Id Surat Nikah"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Id Nikah"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Id Pelayan"));

    ui->tableSuratn->setModel(tabelModel);
    ui->tableSuratn->setColumnWidth(0,100);
    ui->tableSuratn->setColumnWidth(1,250);
    ui->tableSuratn->setColumnWidth(2,100);
    ui->tableSuratn->show();
}

void FormSuratNikah::on_pushButton_4_clicked()
{
    if(ui->idSuratNikahLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Surat Nikah Belum Di Isi");
        ui->idSuratNikahLineEdit->setFocus();

    }else if(ui->idNikahLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Nikah Belum Di Isi");
        ui->idNikahLineEdit->setFocus();

    }else if(ui->idPelayanLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Pelayan Belum Di Isi");
        ui->idPelayanLineEdit->setFocus();

    }else {

        QSqlQuery duplikat;
        duplikat.prepare("SELECT * FROM surat_nikah WHERE id_suratn = '"+ui->idSuratNikahLineEdit->text()+"'");
        duplikat.exec();
        if(duplikat.next()){
            QMessageBox::information(this, "warning", "id_suratn sdh terdaftar");
            ui->idNikahLineEdit->setText(duplikat.value(1).toString());
            ui->idPelayanLineEdit->setText(duplikat.value(2).toString());
        }else{

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


void FormSuratNikah::on_tableSuratn_activated(const QModelIndex &index)
{
    int baris = ui->tableSuratn->currentIndex().row();
    // QMessageBox::information(this, "warning", QString::number(baris));
    ui->idSuratNikahLineEdit->setText(ui->tableSuratn->model()->index(baris,0).data().toString());
    ui->idNikahLineEdit->setText(ui->tableSuratn->model()->index(baris,1).data().toString());
    ui->idPelayanLineEdit->setText(ui->tableSuratn->model()->index(baris,2).data().toString());
}

