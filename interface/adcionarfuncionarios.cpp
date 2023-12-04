// adcionarfuncionarios.cpp
#include "adcionarfuncionarios.h"
#include "ui_adcionarfuncionarios.h"

#include <string>
#include <iostream>
#include <QMessageBox>
#include <exception>
#include <cassert>

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

void AdcionarFuncionarios::setDados(std::vector<Funcionario*> *f) {
    f0 = f;
}

void AdcionarFuncionarios::on_AddButton_clicked()
{
    double slaux;
    std::string nomeaux, cpf;

    try {
        slaux = std::stod(ui->Salario_txt->text().toStdString());
        nomeaux = ui->Nome_txt->text().toStdString();
        cpf = ui->Cpf_txt->text().toStdString();

        // Adiciona asserts para verificar as condições
        assert(slaux >= 0.0 && "O salário não pode ser negativo");
        assert(!nomeaux.empty() && "O nome não pode estar vazio");
        assert(!cpf.empty() && "O CPF não pode estar vazio");

        // Funcionario(int id,std::string cpf,std::string nomeCompleto,double salario);

        Funcionario* f = new Funcionario(f0->size() + 1, cpf, nomeaux, slaux);
        (f0)->push_back(f);

        QMessageBox::about(this, "Mensagem", "Funcionário Adicionado!");
        std::cout << "Funcionário adicionado" << std::endl;

    } catch(const std::invalid_argument& e) {
        std::cout << "Erro" << std::endl;
        QMessageBox::critical(this, "Mensagem", "Dados inválidos");
    }
    ui->Salario_txt->clear();
    ui->Nome_txt->clear();
    ui->Cpf_txt->clear();
}
