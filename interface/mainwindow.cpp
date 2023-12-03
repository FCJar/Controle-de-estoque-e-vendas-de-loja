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
    ap.setEstoque(e0,g0);
    ap.exec();
}


void MainWindow::on_EEstoque_clicked()
{
    ExibirEstoque exb;
    exb.setDados(e0);
    exb.exec();
}


void MainWindow::on_AdFunc_clicked()
{
    AdcionarFuncionarios ad;
    ad.setDados(funcs);
    ad.exec();
}


void MainWindow::on_VProduto_clicked()
{
    VenderProdutos v;
    v.setDados(e0,cx,funcs);
    v.exec();
}


void MainWindow::on_pushButton_clicked()
{
    DadosDeVenda d;
    d.setDados(cx,g0);
    d.exec();
}


void MainWindow::on_RemoverPro_clicked()
{
    RemoveProduto r;
    r.setDados(e0,funcs);
    r.exec();
}

void MainWindow::SetDados(Estoque *e,Caixa *c,std::vector<Funcionario*> *f,std::vector<Gerente*> *g){
    e0=e;
    cx=c;
    funcs=f;
    g0=g;
}

