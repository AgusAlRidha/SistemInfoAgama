/********************************************************************************
** Form generated from reading UI file 'formbaptis.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBAPTIS_H
#define UI_FORMBAPTIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormBaptis
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idBaptisLabel;
    QLineEdit *idBaptisLineEdit;
    QLabel *idJemaatLabel;
    QLineEdit *idJemaatLineEdit;
    QLabel *namaBaptisLabel;
    QLineEdit *namaBaptisLineEdit;
    QLabel *jenisKelaminLabel;
    QComboBox *jenisKelaminComboBox;
    QLabel *namaAyahLabel;
    QLineEdit *namaAyahLineEdit;
    QLabel *namaIbuLabel;
    QLineEdit *namaIbuLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormBaptis)
    {
        if (FormBaptis->objectName().isEmpty())
            FormBaptis->setObjectName("FormBaptis");
        FormBaptis->resize(565, 524);
        formLayoutWidget = new QWidget(FormBaptis);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 40, 381, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idBaptisLabel = new QLabel(formLayoutWidget);
        idBaptisLabel->setObjectName("idBaptisLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idBaptisLabel);

        idBaptisLineEdit = new QLineEdit(formLayoutWidget);
        idBaptisLineEdit->setObjectName("idBaptisLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idBaptisLineEdit);

        idJemaatLabel = new QLabel(formLayoutWidget);
        idJemaatLabel->setObjectName("idJemaatLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, idJemaatLabel);

        idJemaatLineEdit = new QLineEdit(formLayoutWidget);
        idJemaatLineEdit->setObjectName("idJemaatLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, idJemaatLineEdit);

        namaBaptisLabel = new QLabel(formLayoutWidget);
        namaBaptisLabel->setObjectName("namaBaptisLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, namaBaptisLabel);

        namaBaptisLineEdit = new QLineEdit(formLayoutWidget);
        namaBaptisLineEdit->setObjectName("namaBaptisLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, namaBaptisLineEdit);

        jenisKelaminLabel = new QLabel(formLayoutWidget);
        jenisKelaminLabel->setObjectName("jenisKelaminLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, jenisKelaminLabel);

        jenisKelaminComboBox = new QComboBox(formLayoutWidget);
        jenisKelaminComboBox->addItem(QString());
        jenisKelaminComboBox->addItem(QString());
        jenisKelaminComboBox->setObjectName("jenisKelaminComboBox");

        formLayout->setWidget(3, QFormLayout::FieldRole, jenisKelaminComboBox);

        namaAyahLabel = new QLabel(formLayoutWidget);
        namaAyahLabel->setObjectName("namaAyahLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, namaAyahLabel);

        namaAyahLineEdit = new QLineEdit(formLayoutWidget);
        namaAyahLineEdit->setObjectName("namaAyahLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, namaAyahLineEdit);

        namaIbuLabel = new QLabel(formLayoutWidget);
        namaIbuLabel->setObjectName("namaIbuLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, namaIbuLabel);

        namaIbuLineEdit = new QLineEdit(formLayoutWidget);
        namaIbuLineEdit->setObjectName("namaIbuLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, namaIbuLineEdit);

        pushButton = new QPushButton(FormBaptis);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 260, 83, 29));
        pushButton_2 = new QPushButton(FormBaptis);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 260, 83, 29));
        pushButton_3 = new QPushButton(FormBaptis);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 260, 83, 29));
        pushButton_4 = new QPushButton(FormBaptis);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(340, 260, 83, 29));

        retranslateUi(FormBaptis);

        QMetaObject::connectSlotsByName(FormBaptis);
    } // setupUi

    void retranslateUi(QWidget *FormBaptis)
    {
        FormBaptis->setWindowTitle(QCoreApplication::translate("FormBaptis", "Form", nullptr));
        idBaptisLabel->setText(QCoreApplication::translate("FormBaptis", "Id Baptis", nullptr));
        idJemaatLabel->setText(QCoreApplication::translate("FormBaptis", "Id Jemaat", nullptr));
        namaBaptisLabel->setText(QCoreApplication::translate("FormBaptis", "Nama Baptis", nullptr));
        jenisKelaminLabel->setText(QCoreApplication::translate("FormBaptis", "Jenis Kelamin", nullptr));
        jenisKelaminComboBox->setItemText(0, QCoreApplication::translate("FormBaptis", "L", nullptr));
        jenisKelaminComboBox->setItemText(1, QCoreApplication::translate("FormBaptis", "P", nullptr));

        namaAyahLabel->setText(QCoreApplication::translate("FormBaptis", "Nama Ayah", nullptr));
        namaIbuLabel->setText(QCoreApplication::translate("FormBaptis", "Nama Ibu", nullptr));
        pushButton->setText(QCoreApplication::translate("FormBaptis", "Hapus", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormBaptis", "Cari", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormBaptis", "Edit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormBaptis", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormBaptis: public Ui_FormBaptis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBAPTIS_H
