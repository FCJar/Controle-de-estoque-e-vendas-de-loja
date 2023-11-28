#include "produto.h"
#include "ui_produto.h"

produto::produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produto)
{
    ui->setupUi(this);
}

produto::~produto()
{
    delete ui;
}
