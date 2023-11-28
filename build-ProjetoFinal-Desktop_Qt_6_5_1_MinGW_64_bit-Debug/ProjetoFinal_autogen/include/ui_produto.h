/********************************************************************************
** Form generated from reading UI file 'produto.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUTO_H
#define UI_PRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_produto
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QDialog *produto)
    {
        if (produto->objectName().isEmpty())
            produto->setObjectName("produto");
        produto->resize(412, 205);
        pushButton = new QPushButton(produto);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 160, 121, 29));
        label = new QLabel(produto);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 81, 20));
        label_2 = new QLabel(produto);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 81, 20));
        lineEdit = new QLineEdit(produto);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 50, 261, 28));
        lineEdit_2 = new QLineEdit(produto);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 90, 261, 28));
        label_3 = new QLabel(produto);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 10, 63, 20));

        retranslateUi(produto);

        QMetaObject::connectSlotsByName(produto);
    } // setupUi

    void retranslateUi(QDialog *produto)
    {
        produto->setWindowTitle(QCoreApplication::translate("produto", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("produto", "Adcionar", nullptr));
        label->setText(QCoreApplication::translate("produto", "Produto ", nullptr));
        label_2->setText(QCoreApplication::translate("produto", "Quantidade", nullptr));
        label_3->setText(QCoreApplication::translate("produto", "Produto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class produto: public Ui_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUTO_H
