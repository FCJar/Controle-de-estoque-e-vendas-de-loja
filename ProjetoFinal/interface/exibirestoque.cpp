#include "exibirestoque.h"
#include "ui_exibirestoque.h"

ExibirEstoque::ExibirEstoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExibirEstoque)
{
    ui->setupUi(this);
}

ExibirEstoque::~ExibirEstoque()
{
    delete ui;
}
