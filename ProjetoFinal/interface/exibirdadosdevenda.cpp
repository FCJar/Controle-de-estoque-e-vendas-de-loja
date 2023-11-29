#include "exibirdadosdevenda.h"
#include "ui_exibirdadosdevenda.h"

ExibirDadosDeVenda::ExibirDadosDeVenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExibirDadosDeVenda)
{
    ui->setupUi(this);
}



ExibirDadosDeVenda::~ExibirDadosDeVenda()
{
    delete ui;
}
