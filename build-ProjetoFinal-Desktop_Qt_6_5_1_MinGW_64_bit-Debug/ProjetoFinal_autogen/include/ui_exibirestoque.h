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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ExibirEstoque
{
public:

    void setupUi(QDialog *ExibirEstoque)
    {
        if (ExibirEstoque->objectName().isEmpty())
            ExibirEstoque->setObjectName("ExibirEstoque");
        ExibirEstoque->resize(400, 300);

        retranslateUi(ExibirEstoque);

        QMetaObject::connectSlotsByName(ExibirEstoque);
    } // setupUi

    void retranslateUi(QDialog *ExibirEstoque)
    {
        ExibirEstoque->setWindowTitle(QCoreApplication::translate("ExibirEstoque", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExibirEstoque: public Ui_ExibirEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXIBIRESTOQUE_H
