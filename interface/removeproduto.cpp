#include "removeproduto.h"
#include "ui_removeproduto.h"
#include <string>
#include <iostream>
#include <QMessageBox>
#include <exception>

RemoveProduto::RemoveProduto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveProduto)
{
    ui->setupUi(this);
}

RemoveProduto::~RemoveProduto()
{
    delete ui;
}

void RemoveProduto::setDados(Estoque* e,std::vector<Funcionario*> *f ){
    e0=e;
    f0=f;
}


void RemoveProduto::on_Confirmar_bt_clicked()
{
    std::string  faux,pnomeAux;
    int qtdAux,id;
    int mutex = 0;

    for(auto it=(e0)->produtos_.begin();it!=(e0)->produtos_.end();it++){
        id=stoi(ui->Id_txt->text().toStdString());
        if((*it)->getId() == id)
            mutex = 1;
    }

    if(mutex == 0)
        QMessageBox::about(this,"Mensagem","Id Errado");

    bool aux=true;

    try{
        faux=ui->Nome_txt->text().toStdString();
        id=stoi(ui->Id_txt->text().toStdString());

        pnomeAux=ui->Produto_txt->text().toStdString();
        qtdAux=stoi(ui->Qtd_txt->text().toStdString());

        try{
            for(auto it=(f0)->begin();it!=(f0)->end();it++){

                if((*it)->getnomeCompleto()==faux && (*it)->getId()==id){
                    (*it)->removerProduto(e0,pnomeAux,qtdAux);
                    ui->Produto_txt->text().toStdString();
                    ui->Qtd_txt->clear();
                    ui->Produto_txt->clear();
                    std::cout << "Produto Removido";
                    QMessageBox::about(this,"Mensagem","Produto Removido");
                    aux=false;
                }
            }
            if(aux){
                QMessageBox::about(this,"Mensagem","Funcionário não encontrado");
                // throw std::invalid_argument("Funcionario não encontrado");
            }
        }catch(const std::invalid_argument& e){
            std::cout << "Catch" << std::endl;
            // QMessageBox::about(this,"Mensagem",e.what());
        }


    }catch(const std::invalid_argument& e){
        QMessageBox::about(this,"Mensagem","Dados de produto ou funcionario invalido");
    }



}

