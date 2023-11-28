#include "venderprodutos.h"
#include "ui_venderprodutos.h"
#include <string>
#include <iostream>
#include <QMessageBox>
#include <exception>



VenderProdutos::VenderProdutos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VenderProdutos)
{
    ui->setupUi(this);
}

void VenderProdutos::setDados(Estoque* e,Caixa* c,std::vector<Funcionario*>f){
    e0=e;
    cx0=c;
    f0=f;
}

VenderProdutos::~VenderProdutos()
{
    delete ui;
}


void VenderProdutos::on_AdProduto_bt_clicked()
{
    std::string nomeP,nome,fp,end,dtV;
    int qtd,id;
    try{
        nomeP=ui->Produto_txt->text().toStdString();
        qtd=stoi(ui->Qtd_txt->text().toStdString());
        nome=ui->Nome_txt->text().toStdString();
        id=stoi(ui->Id_txt->text().toStdString());
        fp=ui->FPag_txt->text().toStdString();
        end=ui->End_txt->text().toStdString();
        dtV=ui->Data_txt->text().toStdString();

    }catch(const std::invalid_argument& e){
        QMessageBox::critical(this,"Mensagem","Dados de produto invalido");
    }

    try{
        bool aux=true;
        for(auto it=f0.begin();it!=f0.end();it++){
            if((*it)->getnomeCompleto()==nome && (*it)->getId()==id && pedidoInicializado==false){
                (*it)->criarPedido(fp,end,dtV);
                (*it)->venderProduto(e0,nomeP,qtd);
                pedidoInicializado==true;
                std::string auxMsg="Produto adcionado: ";
                auxMsg+=nomeP;
                auxMsg+=" Quantidade: ";
                auxMsg+=qtd;

                QString msg=QString::fromStdString(auxMsg);
                QMessageBox::about(this,"Mensagem",msg);
                aux=false;
            }else if((*it)->getnomeCompleto()==nome && (*it)->getId()==id && pedidoInicializado==true){
                (*it)->venderProduto(e0,nomeP,qtd);
                aux=false;
            }
        }
        if(aux=true){
            throw std::invalid_argument("Produto não encontrado ou funcionario invalido");
        }
    }catch(const std::invalid_argument& e){
        QMessageBox::critical(this,"Mensagem",e.what());
    }


}


void VenderProdutos::on_FinalizaP_bt_clicked()
{

    std::string nome;
    int id;

    try{
        nome=ui->Nome_txt->text().toStdString();
        id=stoi(ui->Id_txt->text().toStdString());

        bool aux=true;

        if(pedidoInicializado==false){
            throw std::invalid_argument("Produtos não foi inicializado");
        }else{
            for(auto it=f0.begin();it!=f0.end();it++){
                if((*it)->getnomeCompleto()==nome && (*it)->getId()==id && pedidoInicializado==true){
                    (*it)->finalizarPedido(cx0);
                    QMessageBox::about(this,"Mensagem","Compra finalizada");
                    pedidoInicializado=false;
                    aux=false;
                }
            }
        }

        if(aux){
            throw std::invalid_argument("Funcionario não foi encontrado");
        }
    }catch(const std::invalid_argument& e){
        QMessageBox::critical(this,"Mensagem",e.what());
    }
}

