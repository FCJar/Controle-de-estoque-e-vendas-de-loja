#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AdProduto_clicked()
{
    AdProduto adProdutoDialog;
    adProdutoDialog.setEstoque(e0, g0);
    adProdutoDialog.exec();
}

void MainWindow::on_EEstoque_clicked()
{
    ExibirEstoque exibirEstoqueDialog;
    exibirEstoqueDialog.setDados(e0);
    exibirEstoqueDialog.exec();
}

void MainWindow::on_AdFunc_clicked()
{
    AdcionarFuncionarios adicionarFuncionariosDialog;
    adicionarFuncionariosDialog.setDados(funcs);
    adicionarFuncionariosDialog.exec();
}

void MainWindow::on_VProduto_clicked()
{
    VenderProdutos venderProdutosDialog;
    venderProdutosDialog.setDados(e0, cx, funcs);
    venderProdutosDialog.exec();
}

void MainWindow::on_pushButton_clicked()
{
    DadosDeVenda dadosDeVendaDialog;
    dadosDeVendaDialog.setDados(cx, g0);
    dadosDeVendaDialog.exec();
}

void MainWindow::on_RemoverPro_clicked()
{
    RemoveProduto removerProdutoDialog;
    removerProdutoDialog.setDados(e0, funcs);
    removerProdutoDialog.exec();
}

void MainWindow::SetDados(Estoque *e, Caixa *c, std::vector<Funcionario*> *f, std::vector<Gerente*> *g)
{
    e0 = e;
    cx = c;
    funcs = f;
    g0 = g;
}
