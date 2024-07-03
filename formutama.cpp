#include "formutama.h"
#include "ui_formutama.h"
#include <qstring.h>

formutama::formutama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::formutama)
{
    ui->setupUi(this);
    forbap  = new FormBaptis;
    forjem  = new FormJemaat;
    fornik  = new FormNikah;
    forpel  = new FormPelayan;
    forsurb = new FormSuratBaptis;
    forsurn = new FormSuratNikah;
}

formutama::~formutama()
{
    delete ui;
}

void formutama::on_pushButton_clicked()
{
    forbap->show();
}


void formutama::on_pushButton_2_clicked()
{
    forjem->show();
}


void formutama::on_pushButton_3_clicked()
{
    fornik->show();
}


void formutama::on_pushButton_4_clicked()
{
    forpel->show();
}


void formutama::on_pushButton_5_clicked()
{
    forsurb->show();
}


void formutama::on_pushButton_6_clicked()
{
    forsurn->show();
}

