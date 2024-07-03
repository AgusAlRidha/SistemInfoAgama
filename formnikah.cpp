#include "formnikah.h"
#include "ui_formnikah.h"
#include "QMessageBox"

FormNikah::FormNikah(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormNikah)
{
    ui->setupUi(this);
    loadtableNikah();
}

FormNikah::~FormNikah()
{
    delete ui;
}
void FormNikah::loadtableNikah()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT*FROM nikah ORDER BY id_nikah ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("Id Nikah"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Id Jemaat"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Pas Pria"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Pas Wanita"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Nama Saksi"));

    ui->tableNikah->setModel(tabelModel);
    ui->tableNikah->setColumnWidth(0,100);
    ui->tableNikah->setColumnWidth(1,250);
    ui->tableNikah->setColumnWidth(2,100);
    ui->tableNikah->setColumnWidth(3,200);
    ui->tableNikah->setColumnWidth(4,200);
    ui->tableNikah->show();
}

void FormNikah::on_pushButton_4_clicked()
{
    if(ui->idNikahLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Nikah Belum Di Isi");
        ui->idNikahLineEdit->setFocus();

    }else if(ui->idJemaatLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Id Jemaat Belum Di Isi");
        ui->idJemaatLineEdit->setFocus();

    }else if(ui->pasPriaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Pas Pria Belum Di Isi");
        ui->pasPriaLineEdit->setFocus();

    }else if(ui->pasWanitaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Pas Wanita Belum Di Isi");
        ui->pasWanitaLineEdit->setFocus();

    }else if(ui->namaSaksiLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning", "Nama Saksi Belum Di Isi");
        ui->namaSaksiLineEdit->setFocus();
    }else {

        QSqlQuery duplikat;
        duplikat.prepare("SELECT * FROM nikah WHERE id_nikah = '"+ui->idNikahLineEdit->text()+"'");
        duplikat.exec();
        if(duplikat.next()){
            QMessageBox::information(this, "warning", "id_nikah sdh terdaftar");
            ui->idJemaatLineEdit->setText(duplikat.value(1).toString());
            ui->pasPriaLineEdit->setText(duplikat.value(2).toString());
            ui->pasWanitaLineEdit->setText(duplikat.value(3).toString());
            ui->namaSaksiLineEdit->setText(duplikat.value(4).toString());
        }else{

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


void FormNikah::on_tableNikah_activated(const QModelIndex &index)
{
    int baris = ui->tableNikah->currentIndex().row();
    // QMessageBox::information(this, "warning", QString::number(baris));
    ui->idNikahLineEdit->setText(ui->tableNikah->model()->index(baris,0).data().toString());
    ui->idJemaatLineEdit->setText(ui->tableNikah->model()->index(baris,1).data().toString());
    ui->pasPriaLineEdit->setText(ui->tableNikah->model()->index(baris,2).data().toString());
    ui->pasWanitaLineEdit->setText(ui->tableNikah->model()->index(baris,3).data().toString());
    ui->namaSaksiLineEdit->setText(ui->tableNikah->model()->index(baris,4).data().toString());
}

