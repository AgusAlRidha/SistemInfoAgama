#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>
#include <formbaptis.h>
#include <formjemaat.h>
#include <formnikah.h>
#include <formpelayan.h>
#include <formsuratbaptis.h>
#include <formsuratnikah.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class formutama;
}
QT_END_NAMESPACE

class formutama : public QMainWindow
{
    Q_OBJECT

public:
    formutama(QWidget *parent = nullptr);
    ~formutama();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::formutama *ui;
    FormBaptis      *forbap;
    FormJemaat      *forjem;
    FormNikah       *fornik;
    FormPelayan     *forpel;
    FormSuratBaptis *forsurb;
    FormSuratNikah  *forsurn;

};
#endif // FORMUTAMA_H
