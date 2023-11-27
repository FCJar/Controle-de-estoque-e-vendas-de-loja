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
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *Logout;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuPagina_Inicial;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(938, 539);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 50, 241, 101));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 160, 241, 101));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 270, 241, 101));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 380, 241, 101));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 50, 241, 101));
        Logout = new QPushButton(centralwidget);
        Logout->setObjectName("Logout");
        Logout->setGeometry(QRect(800, 30, 111, 31));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 938, 25));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Adcionar Produto ao Estoque", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Exibir Estoque", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Modificar Dados do Produto", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Vender Produto", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Adcionar Funcionario", nullptr));
        Logout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        menuPagina_Inicial->setTitle(QCoreApplication::translate("MainWindow", "Pagina Inicial", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
