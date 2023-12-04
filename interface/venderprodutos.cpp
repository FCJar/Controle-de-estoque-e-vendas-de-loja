#include "venderprodutos.h"
#include "ui_venderprodutos.h"
#include <iostream>
#include <QMessageBox>
#include <cassert>

VenderProdutos::VenderProdutos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VenderProdutos)
{
    ui->setupUi(this);
}

void VenderProdutos::setDados(Estoque* e, Caixa* c, std::vector<Funcionario*> *f)
{
    e0 = e;
    cx0 = c;
    f0 = f;
}

VenderProdutos::~VenderProdutos()
{
    delete ui;
}

void VenderProdutos::on_AdProduto_bt_clicked()
{
    try {
        std::string nomeProduto, nomeFuncionario, formaPagamento, endereco, dataVenda;
        int quantidade, idFuncionario;

        nomeProduto = ui->Produto_txt->text().toStdString();
        quantidade = stoi(ui->Qtd_txt->text().toStdString());
        nomeFuncionario = ui->Nome_txt->text().toStdString();
        idFuncionario = stoi(ui->Id_txt->text().toStdString());
        formaPagamento = ui->FPag_txt->text().toStdString();
        endereco = ui->End_txt->text().toStdString();
        dataVenda = ui->Data_txt->text().toStdString();

        assert(quantidade >= 0 && "A quantidade não pode ser negativa");
        assert(idFuncionario >= 0 && "O ID não pode ser negativo");
        assert(!nomeFuncionario.empty() && "O nome não pode estar vazio");
        assert(!nomeProduto.empty() && "O nome do produto não pode estar vazio");
    } catch (const std::invalid_argument& e) {
        QMessageBox::critical(this, "Mensagem", "Dados de produto inválido");
        return;
    }

    try {
        bool encontrado = false;

        for (auto it = f0->begin(); it != f0->end(); it++) {
            std::string nomeProduto, nomeFuncionario, formaPagamento, endereco, dataVenda;
            int quantidade, idFuncionario;

            nomeProduto = ui->Produto_txt->text().toStdString();
            quantidade = stoi(ui->Qtd_txt->text().toStdString());
            nomeFuncionario = ui->Nome_txt->text().toStdString();
            idFuncionario = stoi(ui->Id_txt->text().toStdString());
            formaPagamento = ui->FPag_txt->text().toStdString();
            endereco = ui->End_txt->text().toStdString();
            dataVenda = ui->Data_txt->text().toStdString();

            if ((*it)->getnomeCompleto() == nomeFuncionario && (*it)->getId() == idFuncionario && !pedidoInicializado) {
                (*it)->criarPedido(formaPagamento, endereco, dataVenda);
                (*it)->venderProduto(e0, nomeProduto, quantidade);
                pedidoInicializado = true;

                QString msg = QString("Produto adicionado: %1 Quantidade: %2").arg(QString::fromStdString(nomeProduto)).arg(quantidade);
                QMessageBox::about(this, "Mensagem", msg);

                encontrado = true;
                break;
            } else if ((*it)->getnomeCompleto() == nomeFuncionario && (*it)->getId() == idFuncionario && pedidoInicializado) {
                (*it)->venderProduto(e0, nomeProduto, quantidade);
                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            throw std::invalid_argument("Produto não encontrado ou funcionário inválido");
        }
    } catch (const std::invalid_argument& e) {
        QMessageBox::critical(this, "Mensagem", e.what());
    }

    ui->Produto_txt->clear();
    ui->Qtd_txt->clear();
}

void VenderProdutos::on_FinalizaP_bt_clicked()
{
    try {
        std::string nomeFuncionario;
        int idFuncionario;

        nomeFuncionario = ui->Nome_txt->text().toStdString();
        idFuncionario = stoi(ui->Id_txt->text().toStdString());

        if (!pedidoInicializado) {
            throw std::invalid_argument("Pedido não foi inicializado");
        }

        bool encontrado = false;

        for (auto it = f0->begin(); it != f0->end(); it++) {
            if ((*it)->getnomeCompleto() == nomeFuncionario && (*it)->getId() == idFuncionario) {
                (*it)->finalizarPedido(cx0);
                QMessageBox::about(this, "Mensagem", "Compra finalizada");
                pedidoInicializado = false;

                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            throw std::invalid_argument("Funcionário não foi encontrado");
        }
    } catch (const std::invalid_argument& e) {
        QMessageBox::critical(this, "Mensagem", e.what());
    }

    ui->Produto_txt->clear();
    ui->Qtd_txt->clear();
    ui->Nome_txt->clear();
    ui->Id_txt->clear();
    ui->FPag_txt->clear();
    ui->End_txt->clear();
    ui->Data_txt->clear();
}
