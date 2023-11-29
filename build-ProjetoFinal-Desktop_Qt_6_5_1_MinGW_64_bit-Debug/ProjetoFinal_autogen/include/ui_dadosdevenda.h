/********************************************************************************
** Form generated from reading UI file 'dadosdevenda.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DADOSDEVENDA_H
#define UI_DADOSDEVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DadosDeVenda
{
public:
    QLineEdit *IdGerente_txt;
    QLabel *label;
    QLineEdit *Senha_txt;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *ConfirmarButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *IdFuncionario_txt;
    QLineEdit *Dia_txt;

    void setupUi(QDialog *DadosDeVenda)
    {
        if (DadosDeVenda->objectName().isEmpty())
            DadosDeVenda->setObjectName("DadosDeVenda");
        DadosDeVenda->resize(503, 334);
        IdGerente_txt = new QLineEdit(DadosDeVenda);
        IdGerente_txt->setObjectName("IdGerente_txt");
        IdGerente_txt->setGeometry(QRect(90, 50, 351, 28));
        label = new QLabel(DadosDeVenda);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 91, 20));
        Senha_txt = new QLineEdit(DadosDeVenda);
        Senha_txt->setObjectName("Senha_txt");
        Senha_txt->setGeometry(QRect(130, 90, 311, 28));
        Senha_txt->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(DadosDeVenda);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 111, 20));
        label_3 = new QLabel(DadosDeVenda);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 10, 111, 31));
        comboBox = new QComboBox(DadosDeVenda);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(140, 130, 161, 28));
        ConfirmarButton = new QPushButton(DadosDeVenda);
        ConfirmarButton->setObjectName("ConfirmarButton");
        ConfirmarButton->setGeometry(QRect(310, 130, 131, 29));
        label_4 = new QLabel(DadosDeVenda);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 130, 121, 31));
        label_5 = new QLabel(DadosDeVenda);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 190, 131, 20));
        label_6 = new QLabel(DadosDeVenda);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 230, 121, 20));
        IdFuncionario_txt = new QLineEdit(DadosDeVenda);
        IdFuncionario_txt->setObjectName("IdFuncionario_txt");
        IdFuncionario_txt->setGeometry(QRect(140, 190, 301, 28));
        Dia_txt = new QLineEdit(DadosDeVenda);
        Dia_txt->setObjectName("Dia_txt");
        Dia_txt->setGeometry(QRect(140, 230, 301, 28));
        Dia_txt->setEchoMode(QLineEdit::Password);

        retranslateUi(DadosDeVenda);

        QMetaObject::connectSlotsByName(DadosDeVenda);
    } // setupUi

    void retranslateUi(QDialog *DadosDeVenda)
    {
        DadosDeVenda->setWindowTitle(QCoreApplication::translate("DadosDeVenda", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DadosDeVenda", "Id Gerente:", nullptr));
        label_2->setText(QCoreApplication::translate("DadosDeVenda", "Senha Gerente:", nullptr));
        label_3->setText(QCoreApplication::translate("DadosDeVenda", "Dados de Caixa", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DadosDeVenda", "Lucro Total", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DadosDeVenda", "Lucro por dia", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DadosDeVenda", "Lucro por Funcionario", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DadosDeVenda", "Lucro por Funcionario por dia", nullptr));

        ConfirmarButton->setText(QCoreApplication::translate("DadosDeVenda", "Confirmar", nullptr));
        label_4->setText(QCoreApplication::translate("DadosDeVenda", "Forma de analise:", nullptr));
        label_5->setText(QCoreApplication::translate("DadosDeVenda", "Id Do Funcionario:", nullptr));
        label_6->setText(QCoreApplication::translate("DadosDeVenda", "Dia em Quest\303\243o:", nullptr));
        IdFuncionario_txt->setText(QString());
        Dia_txt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DadosDeVenda: public Ui_DadosDeVenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DADOSDEVENDA_H
