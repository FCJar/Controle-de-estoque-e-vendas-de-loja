#include "dadosdevenda.h"
#include "ui_dadosdevenda.h"
#include <string>
#include <iostream>
#include <QMessageBox>
#include <exception>


DadosDeVenda::DadosDeVenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DadosDeVenda)
{
    ui->setupUi(this);
}

void DadosDeVenda::setDados(Caixa* c,std::vector<Gerente*> *g){
    cx2=c;
    g0=g;
}


DadosDeVenda::~DadosDeVenda()
{
    delete ui;
}

void DadosDeVenda::on_ConfirmarButton_clicked()
{
    std::string escolha;
    int id,senha;
    try{
        //id=std::stoi(ui->IdGerente_txt->text().toStdString());
        //senha=std::stoi(ui->Senha_txt->text().toStdString());
        escolha=ui->comboBox->currentText().toStdString();

        for(auto it=g0->begin();it!=g0->end();it++){
            if((*it)->consultarSenha(std::stoi(ui->IdGerente_txt->text().toStdString()),
                                      std::stoi(ui->Senha_txt->text().toStdString()))){
                if(escolha=="Lucro Total"){
                    QString aux = QString::number((*it)->consultarLucroTotal(cx2));
                    QMessageBox::about(this,"Lucro Total",aux);
                }else if(escolha=="Lucro por dia"){
                    QString aux = QString::number((*it)->consultarLucroPorDia(cx2,(ui->Dia_txt->text().toStdString())));
                    QMessageBox::about(this,"Lucro por Dia",aux);
                }else if(escolha=="Lucro por Funcionario"){
                    QString aux = QString::number((*it)->consultarVendasPorFuncionario(cx2,
                                                                                       std::stoi(ui->IdFuncionario_txt->text().toStdString())));
                    QMessageBox::about(this,"Lucro por Funcionario",aux);
                }else if(escolha=="Lucro por Funcionario por dia"){
                    //(Caixa* cx2,int idfuncionario, std::string dia)
                    QString aux = QString::number(cx2->retornarVendasPorDiaPorFuncionario(
                        std::stoi(ui->IdFuncionario_txt->text().toStdString()),
                        (ui->Dia_txt->text().toStdString())));

                    QMessageBox::about(this,"Lucro por Funcionario por dia",aux);
                }
            }
            break;
        }
    }catch(const std::invalid_argument& e){
        QMessageBox::critical(this,"Mensagem","Dados de entrada invalida");
    }
}

