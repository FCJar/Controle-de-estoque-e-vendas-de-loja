#include "../include/Funcionario.hpp"

// Construtor
Funcionario::Funcionario(int id, std::string cpf, std::string nomeCompleto, double salario) {
    try {
        // Tenta realizar as operações dentro deste bloco
        id_ = id;
        cpf_ = cpf;
        nomeCompleto_ = nomeCompleto;
        salario_ = salario;
        pendente = nullptr; // Certifique-se de inicializar ponteiro como nullptr
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro no construtor de Funcionario: " << e.what() << std::endl;
    }
}

// Criar pedido
void Funcionario::criarPedido(std::string formaPagamento, std::string enderecoVenda, std::string datavenda) {
    try {
        // Tenta realizar as operações dentro deste bloco
        pendente = new Pedido(this->id_, formaPagamento, enderecoVenda, datavenda);
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em criarPedido: " << e.what() << std::endl;
    }
}

// Vender produto
void Funcionario::venderProduto(Estoque *e, std::string prod, int qtd) {
    try {
        // Tenta realizar as operações dentro deste bloco
        Produto *aux = e->venderProduto(prod, qtd);
        pendente->addProduto(aux);
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em venderProduto: " << e.what() << std::endl;
    }
}

// Remover produto do pedido
void Funcionario::removerProduto(Estoque *e, std::string produto, int qtd) {
    try {
        // Tenta realizar as operações dentro deste bloco
        e->adcionarProduto(pendente->removeProduto(produto, qtd));
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em removerProduto: " << e.what() << std::endl;
    }
}

// Finalizar pedido
void Funcionario::finalizarPedido(Caixa *cx2) {
    try {
        // Tenta realizar as operações dentro deste bloco
        cx2->addPedidoPago(pendente);
        pendente = nullptr;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em finalizarPedido: " << e.what() << std::endl;
    }
}

// Deletar pedido e devolver produtos ao estoque
void Funcionario::deletarPedido(Estoque *e) {
    try {
        // Tenta realizar as operações dentro deste bloco
        std::vector<Produto *> aux = pendente->esvaziarPedido();
        for (auto it = aux.begin(); it != aux.end(); it++) {
            e->adcionarProduto(*it);
        }
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em deletarPedido: " << e.what() << std::endl;
    }
}

// Obter ID do funcionário
int Funcionario::getId() {
    return id_;
}

// Obter nome completo do funcionário
std::string Funcionario::getnomeCompleto() {
    return nomeCompleto_;
}
