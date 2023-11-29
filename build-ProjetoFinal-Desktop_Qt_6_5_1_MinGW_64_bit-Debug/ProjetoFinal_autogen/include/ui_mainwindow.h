/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AdProduto;
    QPushButton *EEstoque;
    QPushButton *VProduto;
    QPushButton *AdFunc;
    QPushButton *RemoverPro;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuPagina_Inicial;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(565, 437);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        AdProduto = new QPushButton(centralwidget);
        AdProduto->setObjectName("AdProduto");
        AdProduto->setGeometry(QRect(30, 40, 241, 101));
        EEstoque = new QPushButton(centralwidget);
        EEstoque->setObjectName("EEstoque");
        EEstoque->setGeometry(QRect(280, 150, 241, 101));
        VProduto = new QPushButton(centralwidget);
        VProduto->setObjectName("VProduto");
        VProduto->setGeometry(QRect(30, 150, 241, 101));
        AdFunc = new QPushButton(centralwidget);
        AdFunc->setObjectName("AdFunc");
        AdFunc->setGeometry(QRect(280, 40, 241, 101));
        RemoverPro = new QPushButton(centralwidget);
        RemoverPro->setObjectName("RemoverPro");
        RemoverPro->setGeometry(QRect(30, 260, 241, 91));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 260, 241, 91));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 565, 25));
        menuPagina_Inicial = new QMenu(menubar);
        menuPagina_Inicial->setObjectName("menuPagina_Inicial");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuPagina_Inicial->menuAction());
        menuPagina_Inicial->addSeparator();
        menuPagina_Inicial->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AdProduto->setText(QCoreApplication::translate("MainWindow", "Adcionar Produto ao Estoque", nullptr));
        EEstoque->setText(QCoreApplication::translate("MainWindow", "Exibir Estoque", nullptr));
        VProduto->setText(QCoreApplication::translate("MainWindow", "Vender Produto", nullptr));
        AdFunc->setText(QCoreApplication::translate("MainWindow", "Adcionar Funcionario", nullptr));
        RemoverPro->setText(QCoreApplication::translate("MainWindow", "Remover Produto", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Dados de Vendas", nullptr));
        menuPagina_Inicial->setTitle(QCoreApplication::translate("MainWindow", "Pagina Inicial", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
