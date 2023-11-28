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

    void setupUi(QDialog *AdProduto)
    {
        if (AdProduto->objectName().isEmpty())
            AdProduto->setObjectName("AdProduto");
        AdProduto->resize(726, 435);
        SalvarBt = new QPushButton(AdProduto);
        SalvarBt->setObjectName("SalvarBt");
        SalvarBt->setGeometry(QRect(550, 350, 161, 71));
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
        label_6->setGeometry(QRect(320, 60, 201, 31));
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
        Qtd_txt->setGeometry(QRect(120, 270, 191, 28));

        retranslateUi(AdProduto);

        QMetaObject::connectSlotsByName(AdProduto);
    } // setupUi

    void retranslateUi(QDialog *AdProduto)
    {
        AdProduto->setWindowTitle(QCoreApplication::translate("AdProduto", "Dialog", nullptr));
        SalvarBt->setText(QCoreApplication::translate("AdProduto", "Salvar", nullptr));
        label->setText(QCoreApplication::translate("AdProduto", "Id", nullptr));
        label_2->setText(QCoreApplication::translate("AdProduto", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("AdProduto", "Tipo", nullptr));
        label_4->setText(QCoreApplication::translate("AdProduto", "Pre\303\247o", nullptr));
        label_5->setText(QCoreApplication::translate("AdProduto", "Lucro", nullptr));
        label_6->setText(QCoreApplication::translate("AdProduto", "*Insira os dados dos Produtos", nullptr));
        label_7->setText(QCoreApplication::translate("AdProduto", "Pagina de Cadastro", nullptr));
        label_8->setText(QCoreApplication::translate("AdProduto", "Quantidade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdProduto: public Ui_AdProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADPRODUTO_H
