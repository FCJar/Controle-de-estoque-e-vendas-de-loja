/********************************************************************************
** Form generated from reading UI file 'adcionarfuncionarios.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCIONARFUNCIONARIOS_H
#define UI_ADCIONARFUNCIONARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdcionarFuncionarios
{
public:
    QLabel *label_2;
    QLineEdit *Nome_txt;
    QLabel *label_3;
    QLineEdit *Salario_txt;
    QLabel *label_4;
    QLineEdit *Cpf_txt;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QDialog *AdcionarFuncionarios)
    {
        if (AdcionarFuncionarios->objectName().isEmpty())
            AdcionarFuncionarios->setObjectName("AdcionarFuncionarios");
        AdcionarFuncionarios->resize(400, 300);
        label_2 = new QLabel(AdcionarFuncionarios);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 81, 31));
        Nome_txt = new QLineEdit(AdcionarFuncionarios);
        Nome_txt->setObjectName("Nome_txt");
        Nome_txt->setGeometry(QRect(100, 80, 261, 28));
        label_3 = new QLabel(AdcionarFuncionarios);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 81, 31));
        Salario_txt = new QLineEdit(AdcionarFuncionarios);
        Salario_txt->setObjectName("Salario_txt");
        Salario_txt->setGeometry(QRect(100, 120, 261, 28));
        label_4 = new QLabel(AdcionarFuncionarios);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 160, 81, 31));
        Cpf_txt = new QLineEdit(AdcionarFuncionarios);
        Cpf_txt->setObjectName("Cpf_txt");
        Cpf_txt->setGeometry(QRect(100, 160, 261, 28));
        label_5 = new QLabel(AdcionarFuncionarios);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 30, 211, 31));
        pushButton = new QPushButton(AdcionarFuncionarios);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 210, 211, 41));

        retranslateUi(AdcionarFuncionarios);

        QMetaObject::connectSlotsByName(AdcionarFuncionarios);
    } // setupUi

    void retranslateUi(QDialog *AdcionarFuncionarios)
    {
        AdcionarFuncionarios->setWindowTitle(QCoreApplication::translate("AdcionarFuncionarios", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AdcionarFuncionarios", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("AdcionarFuncionarios", "Salario:", nullptr));
        label_4->setText(QCoreApplication::translate("AdcionarFuncionarios", "Cpf", nullptr));
        label_5->setText(QCoreApplication::translate("AdcionarFuncionarios", "Dados do Novo funcionario", nullptr));
        pushButton->setText(QCoreApplication::translate("AdcionarFuncionarios", "Adicionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdcionarFuncionarios: public Ui_AdcionarFuncionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCIONARFUNCIONARIOS_H
