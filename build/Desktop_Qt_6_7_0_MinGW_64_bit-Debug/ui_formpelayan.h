/********************************************************************************
** Form generated from reading UI file 'formpelayan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPELAYAN_H
#define UI_FORMPELAYAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPelayan
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idPelayanLabel;
    QLineEdit *idPelayanLineEdit;
    QLabel *namaLabel;
    QLineEdit *namaLineEdit;
    QLabel *statusLabel;
    QLineEdit *statusLineEdit;
    QLabel *gambarLabel;
    QLineEdit *gambarLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *FormPelayan)
    {
        if (FormPelayan->objectName().isEmpty())
            FormPelayan->setObjectName("FormPelayan");
        FormPelayan->resize(570, 396);
        formLayoutWidget = new QWidget(FormPelayan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(80, 130, 381, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idPelayanLabel = new QLabel(formLayoutWidget);
        idPelayanLabel->setObjectName("idPelayanLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idPelayanLabel);

        idPelayanLineEdit = new QLineEdit(formLayoutWidget);
        idPelayanLineEdit->setObjectName("idPelayanLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idPelayanLineEdit);

        namaLabel = new QLabel(formLayoutWidget);
        namaLabel->setObjectName("namaLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaLabel);

        namaLineEdit = new QLineEdit(formLayoutWidget);
        namaLineEdit->setObjectName("namaLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaLineEdit);

        statusLabel = new QLabel(formLayoutWidget);
        statusLabel->setObjectName("statusLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, statusLabel);

        statusLineEdit = new QLineEdit(formLayoutWidget);
        statusLineEdit->setObjectName("statusLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, statusLineEdit);

        gambarLabel = new QLabel(formLayoutWidget);
        gambarLabel->setObjectName("gambarLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, gambarLabel);

        gambarLineEdit = new QLineEdit(formLayoutWidget);
        gambarLineEdit->setObjectName("gambarLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, gambarLineEdit);

        pushButton = new QPushButton(FormPelayan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 260, 83, 29));
        pushButton_2 = new QPushButton(FormPelayan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 260, 83, 29));
        pushButton_3 = new QPushButton(FormPelayan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 260, 83, 29));
        pushButton_4 = new QPushButton(FormPelayan);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(380, 260, 83, 29));
        pushButton_5 = new QPushButton(FormPelayan);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(290, 180, 83, 29));
        pushButton_6 = new QPushButton(FormPelayan);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(490, 180, 83, 29));
        pushButton_7 = new QPushButton(FormPelayan);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(190, 180, 83, 29));
        pushButton_8 = new QPushButton(FormPelayan);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(390, 180, 83, 29));

        retranslateUi(FormPelayan);

        QMetaObject::connectSlotsByName(FormPelayan);
    } // setupUi

    void retranslateUi(QWidget *FormPelayan)
    {
        FormPelayan->setWindowTitle(QCoreApplication::translate("FormPelayan", "Form", nullptr));
        idPelayanLabel->setText(QCoreApplication::translate("FormPelayan", "Id Pelayan", nullptr));
        namaLabel->setText(QCoreApplication::translate("FormPelayan", "Nama", nullptr));
        statusLabel->setText(QCoreApplication::translate("FormPelayan", "Status", nullptr));
        gambarLabel->setText(QCoreApplication::translate("FormPelayan", "Gambar", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPelayan", "Hapus", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPelayan", "Cari", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPelayan", "Edit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormPelayan", "Simpan", nullptr));
        pushButton_5->setText(QCoreApplication::translate("FormPelayan", "Cari", nullptr));
        pushButton_6->setText(QCoreApplication::translate("FormPelayan", "Simpan", nullptr));
        pushButton_7->setText(QCoreApplication::translate("FormPelayan", "Hapus", nullptr));
        pushButton_8->setText(QCoreApplication::translate("FormPelayan", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPelayan: public Ui_FormPelayan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPELAYAN_H
