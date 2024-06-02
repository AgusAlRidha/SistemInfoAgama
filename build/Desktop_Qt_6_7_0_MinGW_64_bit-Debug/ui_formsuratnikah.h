/********************************************************************************
** Form generated from reading UI file 'formsuratnikah.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSURATNIKAH_H
#define UI_FORMSURATNIKAH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSuratNikah
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idSuratNikahLabel;
    QLineEdit *idSuratNikahLineEdit;
    QLabel *idNikahLabel;
    QLineEdit *idNikahLineEdit;
    QLabel *idPelayanLabel;
    QLineEdit *idPelayanLineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormSuratNikah)
    {
        if (FormSuratNikah->objectName().isEmpty())
            FormSuratNikah->setObjectName("FormSuratNikah");
        FormSuratNikah->resize(527, 439);
        formLayoutWidget = new QWidget(FormSuratNikah);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(70, 150, 381, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idSuratNikahLabel = new QLabel(formLayoutWidget);
        idSuratNikahLabel->setObjectName("idSuratNikahLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idSuratNikahLabel);

        idSuratNikahLineEdit = new QLineEdit(formLayoutWidget);
        idSuratNikahLineEdit->setObjectName("idSuratNikahLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idSuratNikahLineEdit);

        idNikahLabel = new QLabel(formLayoutWidget);
        idNikahLabel->setObjectName("idNikahLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, idNikahLabel);

        idNikahLineEdit = new QLineEdit(formLayoutWidget);
        idNikahLineEdit->setObjectName("idNikahLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, idNikahLineEdit);

        idPelayanLabel = new QLabel(formLayoutWidget);
        idPelayanLabel->setObjectName("idPelayanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, idPelayanLabel);

        idPelayanLineEdit = new QLineEdit(formLayoutWidget);
        idPelayanLineEdit->setObjectName("idPelayanLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, idPelayanLineEdit);

        pushButton_3 = new QPushButton(FormSuratNikah);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 250, 83, 29));
        pushButton = new QPushButton(FormSuratNikah);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 250, 83, 29));
        pushButton_2 = new QPushButton(FormSuratNikah);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 250, 83, 29));
        pushButton_4 = new QPushButton(FormSuratNikah);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(370, 250, 83, 29));

        retranslateUi(FormSuratNikah);

        QMetaObject::connectSlotsByName(FormSuratNikah);
    } // setupUi

    void retranslateUi(QWidget *FormSuratNikah)
    {
        FormSuratNikah->setWindowTitle(QCoreApplication::translate("FormSuratNikah", "Form", nullptr));
        idSuratNikahLabel->setText(QCoreApplication::translate("FormSuratNikah", "Id Surat Nikah", nullptr));
        idNikahLabel->setText(QCoreApplication::translate("FormSuratNikah", "Id Nikah ", nullptr));
        idPelayanLabel->setText(QCoreApplication::translate("FormSuratNikah", "Id Pelayan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormSuratNikah", "Edit", nullptr));
        pushButton->setText(QCoreApplication::translate("FormSuratNikah", "Hapus", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormSuratNikah", "Cari", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormSuratNikah", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSuratNikah: public Ui_FormSuratNikah {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSURATNIKAH_H
