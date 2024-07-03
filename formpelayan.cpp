#include "formpelayan.h"
#include "ui_formpelayan.h"
#include "QMessageBox"

FormPelayan::FormPelayan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPelayan)
{
    ui->setupUi(this);
    loadtablePelayan();
}

FormPelayan::~FormPelayan()
{
    delete ui;
}

void FormPelayan::loadtablePelayan()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT*FROM pelayan ORDER BY id_pelayan ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("Id Pelayan"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Id Nama"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Pas Status"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Pas Gamabr"));

    ui->tablePelayan->setModel(tabelModel);
    ui->tablePelayan->setColumnWidth(0,100);
    ui->tablePelayan->setColumnWidth(1,250);
    ui->tablePelayan->setColumnWidth(2,100);
    ui->tablePelayan->setColumnWidth(3,200);
    ui->tablePelayan->show();
}
void FormPelayan::on_pushButton_4_clicked()
{
    if(ui->idPelayanLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Pelayan Belum Di Isi");
        ui->idPelayanLineEdit->setFocus();

    }else if(ui->namaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Nama Belum Di Isi");
        ui->namaLineEdit->setFocus();

    }else if(ui->statusLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Status Belum Di Isi");
        ui->statusLineEdit->setFocus();

    }else if(ui->gambarLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Gambar Belum Di Isi");
        ui->gambarLineEdit->setFocus();

    }else {

        QSqlQuery duplikat;
        duplikat.prepare("SELECT * FROM pelayan WHERE id_pelayan = '"+ui->idPelayanLineEdit->text()+"'");
        duplikat.exec();
        if(duplikat.next()){
            QMessageBox::information(this, "warning", "id_pelayan sdh terdaftar");
            ui->namaLineEdit->setText(duplikat.value(1).toString());
            ui->statusLineEdit->setText(duplikat.value(2).toString());
            ui->gambarLineEdit->setText(duplikat.value(3).toString());
        }else{

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


void FormPelayan::on_tablePelayan_activated(const QModelIndex &index)
{
    int baris = ui->tablePelayan->currentIndex().row();
    // QMessageBox::information(this, "warning", QString::number(baris));
    ui->idPelayanLineEdit->setText(ui->tablePelayan->model()->index(baris,0).data().toString());
    ui->namaLineEdit->setText(ui->tablePelayan->model()->index(baris,1).data().toString());
    ui->statusLineEdit->setText(ui->tablePelayan->model()->index(baris,2).data().toString());
    ui->gambarLineEdit->setText(ui->tablePelayan->model()->index(baris,3).data().toString());
}

