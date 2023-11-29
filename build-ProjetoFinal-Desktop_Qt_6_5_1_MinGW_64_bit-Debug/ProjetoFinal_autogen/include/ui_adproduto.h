/********************************************************************************
** Form generated from reading UI file 'adproduto.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADPRODUTO_H
#define UI_ADPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdProduto
{
public:
    QPushButton *SalvarBt;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *Id_txt;
    QLineEdit *Nome_txt;
    QLineEdit *Lucro_txt;
    QLineEdit *Preco_txt;
    QLineEdit *Tipo_txt;
    QLineEdit *Qtd_txt;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *IdGerente_txt;
    QLineEdit *Senha_Txt;

    void setupUi(QDialog *AdProduto)
    {
        if (AdProduto->objectName().isEmpty())
            AdProduto->setObjectName("AdProduto");
        AdProduto->resize(692, 329);
        SalvarBt = new QPushButton(AdProduto);
        SalvarBt->setObjectName("SalvarBt");
        SalvarBt->setGeometry(QRect(340, 150, 161, 71));
        label = new QLabel(AdProduto);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 71, 31));
        label_2 = new QLabel(AdProduto);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 71, 31));
        label_3 = new QLabel(AdProduto);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 140, 71, 31));
        label_4 = new QLabel(AdProduto);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 180, 71, 31));
        label_5 = new QLabel(AdProduto);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 220, 71, 31));
        label_6 = new QLabel(AdProduto);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(330, 230, 201, 31));
        label_7 = new QLabel(AdProduto);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 10, 221, 31));
        label_8 = new QLabel(AdProduto);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 260, 81, 51));
        Id_txt = new QLineEdit(AdProduto);
        Id_txt->setObjectName("Id_txt");
        Id_txt->setGeometry(QRect(120, 60, 191, 31));
        Nome_txt = new QLineEdit(AdProduto);
        Nome_txt->setObjectName("Nome_txt");
        Nome_txt->setGeometry(QRect(120, 100, 191, 31));
        Lucro_txt = new QLineEdit(AdProduto);
        Lucro_txt->setObjectName("Lucro_txt");
        Lucro_txt->setGeometry(QRect(120, 220, 191, 31));
        Preco_txt = new QLineEdit(AdProduto);
        Preco_txt->setObjectName("Preco_txt");
        Preco_txt->setGeometry(QRect(120, 180, 191, 31));
        Tipo_txt = new QLineEdit(AdProduto);
        Tipo_txt->setObjectName("Tipo_txt");
        Tipo_txt->setGeometry(QRect(120, 140, 191, 31));
        Qtd_txt = new QLineEdit(AdProduto);
        Qtd_txt->setObjectName("Qtd_txt");
        Qtd_txt->setGeometry(QRect(120, 267, 191, 31));
        label_9 = new QLabel(AdProduto);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(330, 270, 191, 20));
        label_10 = new QLabel(AdProduto);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(340, 60, 111, 31));
        label_11 = new QLabel(AdProduto);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(340, 100, 111, 20));
        IdGerente_txt = new QLineEdit(AdProduto);
        IdGerente_txt->setObjectName("IdGerente_txt");
        IdGerente_txt->setGeometry(QRect(450, 60, 231, 28));
        Senha_Txt = new QLineEdit(AdProduto);
        Senha_Txt->setObjectName("Senha_Txt");
        Senha_Txt->setGeometry(QRect(450, 100, 231, 28));
        Senha_Txt->setEchoMode(QLineEdit::Password);

        retranslateUi(AdProduto);

        QMetaObject::connectSlotsByName(AdProduto);
    } // setupUi

    void retranslateUi(QDialog *AdProduto)
    {
        AdProduto->setWindowTitle(QCoreApplication::translate("AdProduto", "Dialog", nullptr));
        SalvarBt->setText(QCoreApplication::translate("AdProduto", "Adcionar", nullptr));
        label->setText(QCoreApplication::translate("AdProduto", "Id", nullptr));
        label_2->setText(QCoreApplication::translate("AdProduto", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("AdProduto", "Tipo", nullptr));
        label_4->setText(QCoreApplication::translate("AdProduto", "Pre\303\247o", nullptr));
        label_5->setText(QCoreApplication::translate("AdProduto", "Lucro", nullptr));
        label_6->setText(QCoreApplication::translate("AdProduto", "*Insira os dados dos Produtos", nullptr));
        label_7->setText(QCoreApplication::translate("AdProduto", "Pagina de Cadastro de Produto", nullptr));
        label_8->setText(QCoreApplication::translate("AdProduto", "Quantidade", nullptr));
        label_9->setText(QCoreApplication::translate("AdProduto", "*Complete todos os Espa\303\247os", nullptr));
        label_10->setText(QCoreApplication::translate("AdProduto", "Id Gerente:", nullptr));
        label_11->setText(QCoreApplication::translate("AdProduto", "Senha Gerente:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdProduto: public Ui_AdProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADPRODUTO_H
