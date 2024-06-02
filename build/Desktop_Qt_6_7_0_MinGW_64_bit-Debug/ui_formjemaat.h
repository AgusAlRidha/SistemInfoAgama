/********************************************************************************
** Form generated from reading UI file 'formjemaat.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMJEMAAT_H
#define UI_FORMJEMAAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormJemaat
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idJemaatLabel;
    QLineEdit *idJemaatLineEdit;
    QLabel *namaLabel;
    QLineEdit *namaLineEdit;
    QLabel *jenisKelaminLabel;
    QComboBox *jenisKelaminComboBox;
    QLabel *tempatLahirLabel;
    QLineEdit *tempatLahirLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *telponLabel;
    QLineEdit *telponLineEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormJemaat)
    {
        if (FormJemaat->objectName().isEmpty())
            FormJemaat->setObjectName("FormJemaat");
        FormJemaat->resize(496, 412);
        formLayoutWidget = new QWidget(FormJemaat);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 40, 381, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idJemaatLabel = new QLabel(formLayoutWidget);
        idJemaatLabel->setObjectName("idJemaatLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idJemaatLabel);

        idJemaatLineEdit = new QLineEdit(formLayoutWidget);
        idJemaatLineEdit->setObjectName("idJemaatLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idJemaatLineEdit);

        namaLabel = new QLabel(formLayoutWidget);
        namaLabel->setObjectName("namaLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaLabel);

        namaLineEdit = new QLineEdit(formLayoutWidget);
        namaLineEdit->setObjectName("namaLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaLineEdit);

        jenisKelaminLabel = new QLabel(formLayoutWidget);
        jenisKelaminLabel->setObjectName("jenisKelaminLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jenisKelaminLabel);

        jenisKelaminComboBox = new QComboBox(formLayoutWidget);
        jenisKelaminComboBox->addItem(QString());
        jenisKelaminComboBox->addItem(QString());
        jenisKelaminComboBox->setObjectName("jenisKelaminComboBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, jenisKelaminComboBox);

        tempatLahirLabel = new QLabel(formLayoutWidget);
        tempatLahirLabel->setObjectName("tempatLahirLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, tempatLahirLabel);

        tempatLahirLineEdit = new QLineEdit(formLayoutWidget);
        tempatLahirLineEdit->setObjectName("tempatLahirLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, tempatLahirLineEdit);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, alamatLineEdit);

        telponLabel = new QLabel(formLayoutWidget);
        telponLabel->setObjectName("telponLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, telponLabel);

        telponLineEdit = new QLineEdit(formLayoutWidget);
        telponLineEdit->setObjectName("telponLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, telponLineEdit);

        pushButton_4 = new QPushButton(FormJemaat);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(340, 230, 83, 29));
        pushButton_2 = new QPushButton(FormJemaat);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 230, 83, 29));
        pushButton = new QPushButton(FormJemaat);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 230, 83, 29));
        pushButton_3 = new QPushButton(FormJemaat);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 230, 83, 29));

        retranslateUi(FormJemaat);

        QMetaObject::connectSlotsByName(FormJemaat);
    } // setupUi

    void retranslateUi(QWidget *FormJemaat)
    {
        FormJemaat->setWindowTitle(QCoreApplication::translate("FormJemaat", "Form", nullptr));
        idJemaatLabel->setText(QCoreApplication::translate("FormJemaat", "Id Jemaat", nullptr));
        namaLabel->setText(QCoreApplication::translate("FormJemaat", "Nama", nullptr));
        jenisKelaminLabel->setText(QCoreApplication::translate("FormJemaat", "Jenis Kelamin", nullptr));
        jenisKelaminComboBox->setItemText(0, QCoreApplication::translate("FormJemaat", "L", nullptr));
        jenisKelaminComboBox->setItemText(1, QCoreApplication::translate("FormJemaat", "P", nullptr));

        tempatLahirLabel->setText(QCoreApplication::translate("FormJemaat", "Tempat Lahir", nullptr));
        alamatLabel->setText(QCoreApplication::translate("FormJemaat", "Alamat", nullptr));
        telponLabel->setText(QCoreApplication::translate("FormJemaat", "Telpon", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormJemaat", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormJemaat", "Cari", nullptr));
        pushButton->setText(QCoreApplication::translate("FormJemaat", "Hapus", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormJemaat", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormJemaat: public Ui_FormJemaat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMJEMAAT_H
