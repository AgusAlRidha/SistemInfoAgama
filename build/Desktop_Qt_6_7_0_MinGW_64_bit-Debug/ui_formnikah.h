/********************************************************************************
** Form generated from reading UI file 'formnikah.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNIKAH_H
#define UI_FORMNIKAH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormNikah
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idNikahLabel;
    QLineEdit *idNikahLineEdit;
    QLabel *idJemaatLabel;
    QLineEdit *idJemaatLineEdit;
    QLabel *pasPriaLabel;
    QLineEdit *pasPriaLineEdit;
    QLabel *pasWanitaLabel;
    QLineEdit *pasWanitaLineEdit;
    QLabel *namaSaksiLabel;
    QLineEdit *namaSaksiLineEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *FormNikah)
    {
        if (FormNikah->objectName().isEmpty())
            FormNikah->setObjectName("FormNikah");
        FormNikah->resize(492, 366);
        formLayoutWidget = new QWidget(FormNikah);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 40, 381, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idNikahLabel = new QLabel(formLayoutWidget);
        idNikahLabel->setObjectName("idNikahLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idNikahLabel);

        idNikahLineEdit = new QLineEdit(formLayoutWidget);
        idNikahLineEdit->setObjectName("idNikahLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idNikahLineEdit);

        idJemaatLabel = new QLabel(formLayoutWidget);
        idJemaatLabel->setObjectName("idJemaatLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, idJemaatLabel);

        idJemaatLineEdit = new QLineEdit(formLayoutWidget);
        idJemaatLineEdit->setObjectName("idJemaatLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, idJemaatLineEdit);

        pasPriaLabel = new QLabel(formLayoutWidget);
        pasPriaLabel->setObjectName("pasPriaLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, pasPriaLabel);

        pasPriaLineEdit = new QLineEdit(formLayoutWidget);
        pasPriaLineEdit->setObjectName("pasPriaLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, pasPriaLineEdit);

        pasWanitaLabel = new QLabel(formLayoutWidget);
        pasWanitaLabel->setObjectName("pasWanitaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, pasWanitaLabel);

        pasWanitaLineEdit = new QLineEdit(formLayoutWidget);
        pasWanitaLineEdit->setObjectName("pasWanitaLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, pasWanitaLineEdit);

        namaSaksiLabel = new QLabel(formLayoutWidget);
        namaSaksiLabel->setObjectName("namaSaksiLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, namaSaksiLabel);

        namaSaksiLineEdit = new QLineEdit(formLayoutWidget);
        namaSaksiLineEdit->setObjectName("namaSaksiLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, namaSaksiLineEdit);

        pushButton_4 = new QPushButton(FormNikah);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(320, 200, 83, 29));
        pushButton_3 = new QPushButton(FormNikah);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 200, 83, 29));
        pushButton = new QPushButton(FormNikah);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 200, 83, 29));
        pushButton_2 = new QPushButton(FormNikah);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 200, 83, 29));
        pushButton_5 = new QPushButton(FormNikah);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(210, 220, 83, 29));
        pushButton_6 = new QPushButton(FormNikah);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(310, 220, 83, 29));
        pushButton_7 = new QPushButton(FormNikah);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(410, 220, 83, 29));
        pushButton_8 = new QPushButton(FormNikah);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(510, 220, 83, 29));

        retranslateUi(FormNikah);

        QMetaObject::connectSlotsByName(FormNikah);
    } // setupUi

    void retranslateUi(QWidget *FormNikah)
    {
        FormNikah->setWindowTitle(QCoreApplication::translate("FormNikah", "Form", nullptr));
        idNikahLabel->setText(QCoreApplication::translate("FormNikah", "Id Nikah", nullptr));
        idJemaatLabel->setText(QCoreApplication::translate("FormNikah", "Id Jemaat", nullptr));
        pasPriaLabel->setText(QCoreApplication::translate("FormNikah", "Pas Pria", nullptr));
        pasWanitaLabel->setText(QCoreApplication::translate("FormNikah", "Pas Wanita", nullptr));
        namaSaksiLabel->setText(QCoreApplication::translate("FormNikah", "Nama Saksi", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormNikah", "Simpan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormNikah", "Edit", nullptr));
        pushButton->setText(QCoreApplication::translate("FormNikah", "Hapus", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormNikah", "Cari", nullptr));
        pushButton_5->setText(QCoreApplication::translate("FormNikah", "Hapus", nullptr));
        pushButton_6->setText(QCoreApplication::translate("FormNikah", "Cari", nullptr));
        pushButton_7->setText(QCoreApplication::translate("FormNikah", "Edit", nullptr));
        pushButton_8->setText(QCoreApplication::translate("FormNikah", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormNikah: public Ui_FormNikah {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNIKAH_H
