/********************************************************************************
** Form generated from reading UI file 'formutama.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMUTAMA_H
#define UI_FORMUTAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formutama
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *formutama)
    {
        if (formutama->objectName().isEmpty())
            formutama->setObjectName("formutama");
        formutama->resize(800, 600);
        centralwidget = new QWidget(formutama);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 60, 121, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 130, 121, 61));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(180, 200, 121, 61));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 270, 121, 61));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(180, 340, 121, 61));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(310, 410, 121, 61));
        formutama->setCentralWidget(centralwidget);
        menubar = new QMenuBar(formutama);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        formutama->setMenuBar(menubar);
        statusbar = new QStatusBar(formutama);
        statusbar->setObjectName("statusbar");
        formutama->setStatusBar(statusbar);

        retranslateUi(formutama);

        QMetaObject::connectSlotsByName(formutama);
    } // setupUi

    void retranslateUi(QMainWindow *formutama)
    {
        formutama->setWindowTitle(QCoreApplication::translate("formutama", "formutama", nullptr));
        pushButton->setText(QCoreApplication::translate("formutama", "Form Baptis", nullptr));
        pushButton_2->setText(QCoreApplication::translate("formutama", "Form Jemaat", nullptr));
        pushButton_3->setText(QCoreApplication::translate("formutama", "Form Nikah", nullptr));
        pushButton_4->setText(QCoreApplication::translate("formutama", "Form Pelayan", nullptr));
        pushButton_5->setText(QCoreApplication::translate("formutama", "Form Surat Baptis", nullptr));
        pushButton_6->setText(QCoreApplication::translate("formutama", "Form Surat Nikah", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formutama: public Ui_formutama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUTAMA_H
