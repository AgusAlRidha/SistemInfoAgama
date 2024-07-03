#include "formjemaat.h"
#include "ui_formjemaat.h"
#include "QMessageBox"

FormJemaat::FormJemaat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormJemaat)
{
    ui->setupUi(this);

    loadtableJemaat();
}

FormJemaat::~FormJemaat()
{
    delete ui;
}

void FormJemaat::loadtableJemaat()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT*FROM jemaat ORDER BY id_jemaat ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("Id Jemaat"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Id Nama"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Jenis Kelamin"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Tempat Lahir"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Alamat"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Telpon"));

    ui->tableJemaat->setModel(tabelModel);
    ui->tableJemaat->setColumnWidth(0,100);
    ui->tableJemaat->setColumnWidth(1,250);
    ui->tableJemaat->setColumnWidth(2,100);
    ui->tableJemaat->setColumnWidth(3,200);
    ui->tableJemaat->setColumnWidth(4,200);
    ui->tableJemaat->setColumnWidth(5,200);
    ui->tableJemaat->show();
}

void FormJemaat::on_pushButton_4_clicked()
{
    if(ui->idJemaatLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Jemaat Belum Di Isi");
        ui->idJemaatLineEdit->setFocus();

    }else if(ui->namaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Nama Belum Di Isi");
        ui->namaLineEdit->setFocus();

    }else if(ui->jenisKelaminComboBox->currentText().isEmpty()){
        QMessageBox::information(this, "warning", "Jenis Kelamin Belum Di Isi");
        ui->jenisKelaminComboBox->setFocus();

    }else if(ui->tempatLahirLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Tempat Lahir Belum Di Isi");
        ui->tempatLahirLineEdit->setFocus();

    }else if(ui->alamatLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Alamat Belum Di Isi");
        ui->alamatLineEdit->setFocus();

    }else if(ui->telponLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Telpon Belum Di Isi");
        ui->telponLineEdit->setFocus();
    }else {

        QSqlQuery duplikat;
        duplikat.prepare("SELECT * FROM jemaat WHERE id_jemaat = '"+ui->idJemaatLineEdit->text()+"'");
        duplikat.exec();
        if(duplikat.next()){
            QMessageBox::information(this, "warning", "id_jemaat sdh terdaftar");
            ui->namaLineEdit->setText(duplikat.value(1).toString());
            ui->jenisKelaminComboBox->setCurrentText(duplikat.value(2).toString());
            ui->tempatLahirLineEdit->setText(duplikat.value(3).toString());
            ui->alamatLineEdit->setText(duplikat.value(4).toString());
            ui->telponLineEdit->setText(duplikat.value(5).toString());
        }else{

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
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
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
    sql.prepare("DELETE FROM jemaat WHERE id_jemaat=:id_jemaat");
    sql.bindValue(":id_jemaat",ui->idJemaatLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormJemaat::on_tableJemaat_activated(const QModelIndex &index)
{
    int baris = ui->tableJemaat->currentIndex().row();
    // QMessageBox::information(this, "warning", QString::number(baris));
    ui->idJemaatLineEdit->setText(ui->tableJemaat->model()->index(baris,0).data().toString());
    ui->namaLineEdit->setText(ui->tableJemaat->model()->index(baris,1).data().toString());
    ui->jenisKelaminComboBox->setCurrentText(ui->tableJemaat->model()->index(baris,2).data().toString());
    ui->tempatLahirLineEdit->setText(ui->tableJemaat->model()->index(baris,3).data().toString());
    ui->alamatLineEdit->setText(ui->tableJemaat->model()->index(baris,4).data().toString());
    ui->telponLineEdit->setText(ui->tableJemaat->model()->index(baris,5).data().toString());
}

