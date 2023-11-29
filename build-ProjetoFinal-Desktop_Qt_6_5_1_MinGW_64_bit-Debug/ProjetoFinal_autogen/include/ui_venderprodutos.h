/********************************************************************************
** Form generated from reading UI file 'venderprodutos.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENDERPRODUTOS_H
#define UI_VENDERPRODUTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VenderProdutos
{
public:
    QLineEdit *FPag_txt;
    QLabel *label;
    QLineEdit *End_txt;
    QLabel *label_2;
    QLineEdit *Data_txt;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *FinalizaP_bt;
    QLabel *label_5;
    QLineEdit *Id_txt;
    QLineEdit *Nome_txt;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *Produto_txt;
    QLineEdit *Qtd_txt;
    QLabel *label_8;
    QPushButton *AdProduto_bt;

    void setupUi(QDialog *VenderProdutos)
    {
        if (VenderProdutos->objectName().isEmpty())
            VenderProdutos->setObjectName("VenderProdutos");
        VenderProdutos->resize(865, 363);
        FPag_txt = new QLineEdit(VenderProdutos);
        FPag_txt->setObjectName("FPag_txt");
        FPag_txt->setGeometry(QRect(150, 60, 241, 28));
        label = new QLabel(VenderProdutos);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 121, 20));
        End_txt = new QLineEdit(VenderProdutos);
        End_txt->setObjectName("End_txt");
        End_txt->setGeometry(QRect(150, 100, 241, 28));
        label_2 = new QLabel(VenderProdutos);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 91, 20));
        Data_txt = new QLineEdit(VenderProdutos);
        Data_txt->setObjectName("Data_txt");
        Data_txt->setGeometry(QRect(150, 140, 241, 28));
        label_3 = new QLabel(VenderProdutos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 140, 91, 20));
        label_4 = new QLabel(VenderProdutos);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 10, 101, 31));
        FinalizaP_bt = new QPushButton(VenderProdutos);
        FinalizaP_bt->setObjectName("FinalizaP_bt");
        FinalizaP_bt->setGeometry(QRect(530, 270, 221, 41));
        label_5 = new QLabel(VenderProdutos);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(410, 100, 111, 20));
        Id_txt = new QLineEdit(VenderProdutos);
        Id_txt->setObjectName("Id_txt");
        Id_txt->setGeometry(QRect(530, 57, 301, 31));
        Nome_txt = new QLineEdit(VenderProdutos);
        Nome_txt->setObjectName("Nome_txt");
        Nome_txt->setGeometry(QRect(530, 100, 301, 28));
        label_7 = new QLabel(VenderProdutos);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(410, 60, 101, 20));
        label_6 = new QLabel(VenderProdutos);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 260, 91, 20));
        Produto_txt = new QLineEdit(VenderProdutos);
        Produto_txt->setObjectName("Produto_txt");
        Produto_txt->setGeometry(QRect(140, 217, 241, 31));
        Qtd_txt = new QLineEdit(VenderProdutos);
        Qtd_txt->setObjectName("Qtd_txt");
        Qtd_txt->setGeometry(QRect(140, 260, 241, 28));
        label_8 = new QLabel(VenderProdutos);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 220, 121, 20));
        AdProduto_bt = new QPushButton(VenderProdutos);
        AdProduto_bt->setObjectName("AdProduto_bt");
        AdProduto_bt->setGeometry(QRect(530, 220, 221, 41));

        retranslateUi(VenderProdutos);

        QMetaObject::connectSlotsByName(VenderProdutos);
    } // setupUi

    void retranslateUi(QDialog *VenderProdutos)
    {
        VenderProdutos->setWindowTitle(QCoreApplication::translate("VenderProdutos", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VenderProdutos", "Forma Pagamento", nullptr));
        label_2->setText(QCoreApplication::translate("VenderProdutos", "Endere\303\247o", nullptr));
        label_3->setText(QCoreApplication::translate("VenderProdutos", "Data", nullptr));
        label_4->setText(QCoreApplication::translate("VenderProdutos", "Pedido", nullptr));
        FinalizaP_bt->setText(QCoreApplication::translate("VenderProdutos", "Finalizar Pedido", nullptr));
        label_5->setText(QCoreApplication::translate("VenderProdutos", "Nome Completo", nullptr));
        label_7->setText(QCoreApplication::translate("VenderProdutos", "Id Funcionario", nullptr));
        label_6->setText(QCoreApplication::translate("VenderProdutos", "Quantidade", nullptr));
        label_8->setText(QCoreApplication::translate("VenderProdutos", "Produto", nullptr));
        AdProduto_bt->setText(QCoreApplication::translate("VenderProdutos", "Adcionar Produto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VenderProdutos: public Ui_VenderProdutos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENDERPRODUTOS_H
