#include "adcionarfuncionarios.h"
#include "ui_adcionarfuncionarios.h"

#include <string>
#include <iostream>
#include <QMessageBox>
#include <exception>

AdcionarFuncionarios::AdcionarFuncionarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdcionarFuncionarios)
{
    ui->setupUi(this);
}

AdcionarFuncionarios::~AdcionarFuncionarios()
{
    delete ui;
}

void AdcionarFuncionarios::setDados(std::vector<Funcionario*> *f ){
    f0=f;
}

void AdcionarFuncionarios::on_AddButton_clicked()
{
    double slaux;
    std::string nomeaux,cpf;
    try{
        slaux=std::stod(ui->Salario_txt->text().toStdString());
        nomeaux=ui->Nome_txt->text().toStdString();
        cpf=ui->Cpf_txt->text().toStdString();
        Funcionario* f=new Funcionario(f0->size()+1,cpf,nomeaux,slaux);
        (f0)->push_back(f);
    }catch(const std::invalid_argument& e){
        QMessageBox::critical(this,"Mensagem","Dados invalidos");
    }
    ui->Salario_txt->clear();
    ui->Nome_txt->clear();
    ui->Cpf_txt->clear();

}

