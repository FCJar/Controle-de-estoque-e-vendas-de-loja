/********************************************************************************
** Form generated from reading UI file 'exibirestoque.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXIBIRESTOQUE_H
#define UI_EXIBIRESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExibirEstoque
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *ExibirEstoque)
    {
        if (ExibirEstoque->objectName().isEmpty())
            ExibirEstoque->setObjectName("ExibirEstoque");
        ExibirEstoque->resize(567, 129);
        comboBox = new QComboBox(ExibirEstoque);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 50, 351, 31));
        label = new QLabel(ExibirEstoque);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 181, 20));
        pushButton = new QPushButton(ExibirEstoque);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 50, 171, 31));
        label_2 = new QLabel(ExibirEstoque);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 541, 41));

        retranslateUi(ExibirEstoque);

        QMetaObject::connectSlotsByName(ExibirEstoque);
    } // setupUi

    void retranslateUi(QDialog *ExibirEstoque)
    {
        ExibirEstoque->setWindowTitle(QCoreApplication::translate("ExibirEstoque", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ExibirEstoque", "Produtos em Estoque", nullptr));
        pushButton->setText(QCoreApplication::translate("ExibirEstoque", "Confirmar", nullptr));
        label_2->setText(QCoreApplication::translate("ExibirEstoque", "*Clique em confirmar para obter mais informa\303\247\303\265es dobre o produto em estoque", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExibirEstoque: public Ui_ExibirEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXIBIRESTOQUE_H
