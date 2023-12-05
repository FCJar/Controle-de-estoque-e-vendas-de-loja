#include "removeproduto.h"
#include "ui_removeproduto.h"
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

void RemoveProduto::setDados(Estoque* e, std::vector<Funcionario*> *f)
{
    e0 = e;
    f0 = f;
}

void RemoveProduto::on_Confirmar_bt_clicked()
{
    try {
        int id = stoi(ui->Id_txt->text().toStdString());

        // Verificar se o ID existe no estoque
        bool idEncontrado = false;
        for (const auto& produto : e0->produtos_) {
            if (produto->getId() == id) {
                idEncontrado = true;
                break;
            }
        }

        if (!idEncontrado) {
            QMessageBox::about(this, "Mensagem", "ID Errado");
            return;
        }

        std::string faux = ui->Nome_txt->text().toStdString();
        std::string pnomeAux = ui->Produto_txt->text().toStdString();
        int qtdAux = stoi(ui->Qtd_txt->text().toStdString());

        bool funcionarioEncontrado = false;

        for (auto it = f0->begin(); it != f0->end(); ++it) {
            if ((*it)->getnomeCompleto() == faux && (*it)->getId() == id) {
                try {
                    // Remover o produto associado ao funcionário
                    (*it)->removerProduto(e0, pnomeAux, qtdAux);

                    // Limpar campos de entrada
                    ui->Produto_txt->clear();
                    ui->Qtd_txt->clear();

                    std::cout << "Produto Removido" << std::endl;
                    QMessageBox::about(this, "Mensagem", "Produto Removido");

                    funcionarioEncontrado = true;
                    break;
                } catch (const std::invalid_argument& e) {
                    // Tratar exceção relacionada à remoção do produto
                    std::cout << "Catch: " << e.what() << std::endl;
                    QMessageBox::about(this, "Mensagem", e.what());
                }
            }
        }

        if (!funcionarioEncontrado) {
            QMessageBox::about(this, "Mensagem", "Funcionário não encontrado");
        }
    } catch (const std::invalid_argument& e) {
        // Tratar exceção relacionada à conversão ou entrada inválida
        QMessageBox::about(this, "Mensagem", "Dados de produto ou funcionário inválidos");
    }
}
