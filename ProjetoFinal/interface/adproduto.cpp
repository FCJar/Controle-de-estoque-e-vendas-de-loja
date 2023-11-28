#include "adproduto.h"
#include "ui_adproduto.h"
#include <string>
#include <iostream>
#include <QMessageBox>
#include <exception>

AdProduto::AdProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdProduto)
{
    ui->setupUi(this);
}

AdProduto::~AdProduto()
{
    delete ui;
}
void AdProduto::setEstoque(Estoque* e){
    e0=e;
}

void AdProduto::on_SalvarBt_clicked()
{
    //int id, std::string nome, std::string tipo, double preco, double lucroProduto
    bool a=false,c=true;
    std::string  nome, tipo;
    int id,qtd=0;
    double preco,lucroP;

    nome=ui->Nome_txt->text().toStdString();
    tipo=ui->Tipo_txt->text().toStdString();

    try{

        id=std::stoi(ui->Id_txt->text().toStdString());
        qtd=std::stoi(ui->Qtd_txt->text().toStdString());
        preco=std::stod(ui->Preco_txt->text().toStdString());
        lucroP=std::stod(ui->Lucro_txt->text().toStdString());
    }catch(...){
        QMessageBox::critical(this,"Mensagem","Erro critico de Inserção de dados");
        c=false;
    }

    if(c){
        try{
            if(lucroP>preco){
                throw  std::invalid_argument("Lucro maior do que Preço");
            }else if(qtd<0){
                throw std::invalid_argument("Quantidade invalida");
            }else{
                a=true;
            }
        }catch(const std::invalid_argument& e ){
            QMessageBox::critical(this,"Mensagem",e.what());
        }
    }
    if(a){
        Produto *p=new Produto(id,nome,tipo,preco,lucroP,qtd);
        e0->adcionarProduto(p);
    }
}

