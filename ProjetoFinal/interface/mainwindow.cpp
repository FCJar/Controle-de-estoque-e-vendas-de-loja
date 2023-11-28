#include "mainwindow.h"
#include "./ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AdProduto_clicked()
{
    AdProduto ap;
    ap.setEstoque(e0);
    ap.exec();
}


void MainWindow::on_EEstoque_clicked()
{

}


void MainWindow::on_AdFunc_clicked()
{

}


void MainWindow::on_VProduto_clicked()
{
    VenderProdutos v;
    v.setDados(e0,cx,funcs);
    v.exec();
}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_RemoverPro_clicked()
{

}

