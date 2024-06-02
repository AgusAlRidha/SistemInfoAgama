/********************************************************************************
** Form generated from reading UI file 'formsuratbaptis.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSURATBAPTIS_H
#define UI_FORMSURATBAPTIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSuratBaptis
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *idSuratBaptisLineEdit;
    QLabel *idBaptisLabel;
    QLineEdit *idBaptisLineEdit;
    QLabel *idPelayanLabel;
    QLineEdit *idPelayanLineEdit;
    QLabel *idSuratBaptisLabel;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *FormSuratBaptis)
    {
        if (FormSuratBaptis->objectName().isEmpty())
            FormSuratBaptis->setObjectName("FormSuratBaptis");
        FormSuratBaptis->resize(489, 424);
        formLayoutWidget = new QWidget(FormSuratBaptis);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(50, 130, 381, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idSuratBaptisLineEdit = new QLineEdit(formLayoutWidget);
        idSuratBaptisLineEdit->setObjectName("idSuratBaptisLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idSuratBaptisLineEdit);

        idBaptisLabel = new QLabel(formLayoutWidget);
        idBaptisLabel->setObjectName("idBaptisLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, idBaptisLabel);

        idBaptisLineEdit = new QLineEdit(formLayoutWidget);
        idBaptisLineEdit->setObjectName("idBaptisLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, idBaptisLineEdit);

        idPelayanLabel = new QLabel(formLayoutWidget);
        idPelayanLabel->setObjectName("idPelayanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, idPelayanLabel);

        idPelayanLineEdit = new QLineEdit(formLayoutWidget);
        idPelayanLineEdit->setObjectName("idPelayanLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, idPelayanLineEdit);

        idSuratBaptisLabel = new QLabel(formLayoutWidget);
        idSuratBaptisLabel->setObjectName("idSuratBaptisLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idSuratBaptisLabel);

        pushButton_2 = new QPushButton(FormSuratBaptis);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 230, 83, 29));
        pushButton_4 = new QPushButton(FormSuratBaptis);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(350, 230, 83, 29));
        pushButton = new QPushButton(FormSuratBaptis);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 230, 83, 29));
        pushButton_3 = new QPushButton(FormSuratBaptis);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 230, 83, 29));
        pushButton_5 = new QPushButton(FormSuratBaptis);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(300, 270, 83, 29));
        pushButton_6 = new QPushButton(FormSuratBaptis);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(100, 270, 83, 29));
        pushButton_7 = new QPushButton(FormSuratBaptis);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(200, 270, 83, 29));
        pushButton_8 = new QPushButton(FormSuratBaptis);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(400, 270, 83, 29));

        retranslateUi(FormSuratBaptis);

        QMetaObject::connectSlotsByName(FormSuratBaptis);
    } // setupUi

    void retranslateUi(QWidget *FormSuratBaptis)
    {
        FormSuratBaptis->setWindowTitle(QCoreApplication::translate("FormSuratBaptis", "Form", nullptr));
        idBaptisLabel->setText(QCoreApplication::translate("FormSuratBaptis", "Id Baptis", nullptr));
        idPelayanLabel->setText(QCoreApplication::translate("FormSuratBaptis", "Id Pelayan", nullptr));
        idSuratBaptisLabel->setText(QCoreApplication::translate("FormSuratBaptis", "Id Surat Baptis", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormSuratBaptis", "Cari", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormSuratBaptis", "Simpan", nullptr));
        pushButton->setText(QCoreApplication::translate("FormSuratBaptis", "Hapus", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormSuratBaptis", "Edit", nullptr));
        pushButton_5->setText(QCoreApplication::translate("FormSuratBaptis", "Edit", nullptr));
        pushButton_6->setText(QCoreApplication::translate("FormSuratBaptis", "Hapus", nullptr));
        pushButton_7->setText(QCoreApplication::translate("FormSuratBaptis", "Cari", nullptr));
        pushButton_8->setText(QCoreApplication::translate("FormSuratBaptis", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSuratBaptis: public Ui_FormSuratBaptis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSURATBAPTIS_H
