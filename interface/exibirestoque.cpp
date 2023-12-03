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

void ExibirEstoque::setDados(Estoque *e) {
    try {
        // Tenta realizar as operações dentro deste bloco
        if (!e) {
            throw std::invalid_argument("Estoque nulo passado para setDados");
        }

        // Se o ponteiro para o Estoque for nulo, uma exceção é lançada
        e0 = e;
        prod = e0->infoRegistroProdutos();

        // Itera sobre os produtos e adiciona seus nomes ao combobox
        for (auto it = prod.begin(); it != prod.end(); it++) {
            QString aux = QString::fromStdString(it->getNome());
            ui->comboBox->addItem(aux);
        }
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro crítico
        QMessageBox::critical(this, "Erro", QString("Erro em setDados: ") + e.what());
    }
}

void ExibirEstoque::on_pushButton_clicked() {
    try {
        // Tenta realizar as operações dentro deste bloco
        std::string escolha = ui->comboBox->currentText().toStdString();

        // Se nenhum produto for selecionado, lança uma exceção
        if (escolha.empty()) {
            throw std::invalid_argument("Nenhum produto selecionado");
        }

        bool produtoEncontrado = false;
        // Itera sobre os produtos procurando o produto selecionado
        for (auto it = prod.begin(); it != prod.end(); it++) {
            if (it->getNome() == escolha) {
                // Se o produto é encontrado, exibe os detalhes do produto
                QString dados = "Nome: ";
                dados += it->getNome();
                dados += " || Preço:";
                    dados += QString::number(it->getPreco());
                dados += " || Data de Validade:";
                dados += it->getDataValidade();
                QMessageBox::about(this, "Dados do Produto", dados);
                produtoEncontrado = true;
            }
        }

        // Se o produto não for encontrado, lança uma exceção
        if (!produtoEncontrado) {
            throw std::runtime_error("Produto não encontrado");
        }
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro crítico
        QMessageBox::critical(this, "Erro", QString("Erro em on_pushButton_clicked: ") + e.what());
    }
}
