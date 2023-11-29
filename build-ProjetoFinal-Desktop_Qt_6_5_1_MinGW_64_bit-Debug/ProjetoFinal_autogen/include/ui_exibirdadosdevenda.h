/********************************************************************************
** Form generated from reading UI file 'exibirdadosdevenda.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXIBIRDADOSDEVENDA_H
#define UI_EXIBIRDADOSDEVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ExibirDadosDeVenda
{
public:

    void setupUi(QDialog *ExibirDadosDeVenda)
    {
        if (ExibirDadosDeVenda->objectName().isEmpty())
            ExibirDadosDeVenda->setObjectName("ExibirDadosDeVenda");
        ExibirDadosDeVenda->resize(400, 300);

        retranslateUi(ExibirDadosDeVenda);

        QMetaObject::connectSlotsByName(ExibirDadosDeVenda);
    } // setupUi

    void retranslateUi(QDialog *ExibirDadosDeVenda)
    {
        ExibirDadosDeVenda->setWindowTitle(QCoreApplication::translate("ExibirDadosDeVenda", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExibirDadosDeVenda: public Ui_ExibirDadosDeVenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXIBIRDADOSDEVENDA_H
