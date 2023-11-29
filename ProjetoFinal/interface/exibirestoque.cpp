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
void ExibirEstoque::setDados(Estoque *e){
    e0=e;
    prod= e0->infoRegistroProdutos();
    for(auto it=prod.begin();it!=prod.end();it++){
        QString aux=QString::fromStdString(it->getNome());
        ui->comboBox->addItem(aux);
    }
}

void ExibirEstoque::on_pushButton_clicked()
{
    std::string escolha=(ui->comboBox->currentText().toStdString());
    for(auto it=prod.begin();it!=prod.end();it++){
            if(it->getNome()==escolha){
            QString dados="Nome: ";
                dados+=it->getNome();
                dados+=" || Preço:";
                dados+=QString::number(it->getPreco());
                dados+=" || Data de Validade:";
                dados+=it->getDataValidade();
                QMessageBox::about(this,"Dados do Produto",dados);
        }
    }
}

