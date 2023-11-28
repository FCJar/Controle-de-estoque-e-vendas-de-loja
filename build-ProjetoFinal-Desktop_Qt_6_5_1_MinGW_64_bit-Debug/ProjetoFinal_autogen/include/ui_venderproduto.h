/********************************************************************************
** Form generated from reading UI file 'venderproduto.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENDERPRODUTO_H
#define UI_VENDERPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_venderproduto
{
public:

    void setupUi(QDialog *venderproduto)
    {
        if (venderproduto->objectName().isEmpty())
            venderproduto->setObjectName("venderproduto");
        venderproduto->resize(685, 425);

        retranslateUi(venderproduto);

        QMetaObject::connectSlotsByName(venderproduto);
    } // setupUi

    void retranslateUi(QDialog *venderproduto)
    {
        venderproduto->setWindowTitle(QCoreApplication::translate("venderproduto", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class venderproduto: public Ui_venderproduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENDERPRODUTO_H
