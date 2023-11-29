/********************************************************************************
** Form generated from reading UI file 'removeproduto.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEPRODUTO_H
#define UI_REMOVEPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RemoveProduto
{
public:
    QLabel *label;
    QPushButton *Confirmar_bt;
    QLabel *label_2;
    QLineEdit *Id_txt;
    QLabel *label_3;
    QLineEdit *Nome_txt;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *Qtd_txt;
    QLineEdit *Produto_txt;

    void setupUi(QDialog *RemoveProduto)
    {
        if (RemoveProduto->objectName().isEmpty())
            RemoveProduto->setObjectName("RemoveProduto");
        RemoveProduto->resize(734, 297);
        label = new QLabel(RemoveProduto);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 10, 141, 31));
        Confirmar_bt = new QPushButton(RemoveProduto);
        Confirmar_bt->setObjectName("Confirmar_bt");
        Confirmar_bt->setGeometry(QRect(420, 190, 291, 71));
        label_2 = new QLabel(RemoveProduto);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 101, 31));
        Id_txt = new QLineEdit(RemoveProduto);
        Id_txt->setObjectName("Id_txt");
        Id_txt->setGeometry(QRect(170, 50, 541, 31));
        label_3 = new QLabel(RemoveProduto);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 131, 31));
        Nome_txt = new QLineEdit(RemoveProduto);
        Nome_txt->setObjectName("Nome_txt");
        Nome_txt->setGeometry(QRect(170, 90, 541, 31));
        label_4 = new QLabel(RemoveProduto);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 190, 101, 31));
        label_5 = new QLabel(RemoveProduto);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 230, 101, 31));
        Qtd_txt = new QLineEdit(RemoveProduto);
        Qtd_txt->setObjectName("Qtd_txt");
        Qtd_txt->setGeometry(QRect(170, 230, 231, 31));
        Produto_txt = new QLineEdit(RemoveProduto);
        Produto_txt->setObjectName("Produto_txt");
        Produto_txt->setGeometry(QRect(170, 190, 231, 31));

        retranslateUi(RemoveProduto);

        QMetaObject::connectSlotsByName(RemoveProduto);
    } // setupUi

    void retranslateUi(QDialog *RemoveProduto)
    {
        RemoveProduto->setWindowTitle(QCoreApplication::translate("RemoveProduto", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RemoveProduto", "Remover Pedido", nullptr));
        Confirmar_bt->setText(QCoreApplication::translate("RemoveProduto", "Confirmar", nullptr));
        label_2->setText(QCoreApplication::translate("RemoveProduto", "Id:", nullptr));
        label_3->setText(QCoreApplication::translate("RemoveProduto", "Nome Funcionario:", nullptr));
        label_4->setText(QCoreApplication::translate("RemoveProduto", "Produto:", nullptr));
        label_5->setText(QCoreApplication::translate("RemoveProduto", "Qtd:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveProduto: public Ui_RemoveProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPRODUTO_H
