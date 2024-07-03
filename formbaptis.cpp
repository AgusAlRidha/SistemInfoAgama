#include "formbaptis.h"
#include "ui_formbaptis.h"
#include "QMessageBox"

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
        qDebug()<<"Database Terhubung";
    }else{
        qDebug()<<konek.lastError().text();
    }

    loadtableBaptis();
}

FormBaptis::~FormBaptis()
{
    delete ui;
}

void FormBaptis::loadtableBaptis()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT*FROM baptis ORDER BY id_baptis ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("Id Baptis"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Id Jemaat"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Nama Baptis"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Jenis Kelamin"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Nama Ayah"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Nama Ibu"));

    ui->tableBaptis->setModel(tabelModel);
    ui->tableBaptis->setColumnWidth(0,100);
    ui->tableBaptis->setColumnWidth(1,250);
    ui->tableBaptis->setColumnWidth(2,100);
    ui->tableBaptis->setColumnWidth(3,200);
    ui->tableBaptis->setColumnWidth(4,200);
    ui->tableBaptis->setColumnWidth(5,200);
    ui->tableBaptis->show();
}

void FormBaptis::on_pushButton_4_clicked()
{
    if(ui->idBaptisLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Baptis Belum Di Isi");
        ui->idBaptisLineEdit->setFocus();

    }else if(ui->idJemaatLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Jemaat Belum Di Isi");
        ui->idJemaatLineEdit->setFocus();

    }else if(ui->namaBaptisLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Nama Baptis Belum Di Isi");
        ui->namaBaptisLineEdit->setFocus();

    }else if(ui->jenisKelaminComboBox->currentText().isEmpty()){
        QMessageBox::information(this, "warning", "Jenis Kelamin Belum Di Isi");
        ui->jenisKelaminComboBox->setFocus();

    }else if(ui->namaAyahLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Nama Ayah Belum Di Isi");
        ui->namaAyahLineEdit->setFocus();

    }else if(ui->namaIbuLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Nama Ibu Belum Di Isi");
        ui->namaIbuLineEdit->setFocus();
    }else {

        QSqlQuery duplikat;
        duplikat.prepare("SELECT * FROM baptis WHERE id_baptis = '"+ui->idBaptisLineEdit->text()+"'");
        duplikat.exec();
        if(duplikat.next()){
            QMessageBox::information(this, "warning", "id_baptis sdh terdaftar");
            ui->idJemaatLineEdit->setText(duplikat.value(1).toString());
            ui->namaBaptisLineEdit->setText(duplikat.value(2).toString());
            ui->jenisKelaminComboBox->setCurrentText(duplikat.value(3).toString());
            ui->namaAyahLineEdit->setText(duplikat.value(4).toString());
            ui->namaIbuLineEdit->setText(duplikat.value(5).toString());
        }else{

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
    sql.bindValue(":nama_ibu",ui->namaIbuLineEdit->text());

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


void FormBaptis::on_tableBaptis_activated(const QModelIndex &index)
{
    int baris = ui->tableBaptis->currentIndex().row();
    // QMessageBox::information(this, "warning", QString::number(baris));
    ui->idBaptisLineEdit->setText(ui->tableBaptis->model()->index(baris,0).data().toString());
    ui->idJemaatLineEdit->setText(ui->tableBaptis->model()->index(baris,1).data().toString());
    ui->namaBaptisLineEdit->setText(ui->tableBaptis->model()->index(baris,2).data().toString());
    ui->jenisKelaminComboBox->setCurrentText(ui->tableBaptis->model()->index(baris,3).data().toString());
    ui->namaAyahLineEdit->setText(ui->tableBaptis->model()->index(baris,4).data().toString());
    ui->namaIbuLineEdit->setText(ui->tableBaptis->model()->index(baris,5).data().toString());
}

