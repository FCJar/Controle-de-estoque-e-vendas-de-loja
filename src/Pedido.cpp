#include "../include/Pedido.hpp"
#include <vector>
#include <iostream>

// Construtor
Pedido::Pedido(int idAtendente, std::string formaPagamento, std::string endereco, std::string datavenda) {
    try {
        // Tenta realizar as operações dentro deste bloco
        dataVenda_ = datavenda;
        idAtendente_ = idAtendente;
        formaPagamento_ = formaPagamento;
        endereco_ = endereco;
        idPedido_ = -1; // Certifique-se de inicializar o ID como um valor inválido
        precoTotal_ = 0.0;
        lucroPorVenda_ = 0.0;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro no construtor de Pedido: " << e.what() << std::endl;
    }
}

// Definir ID do pedido
void Pedido::setIdPedido(int id) {
    try {
        // Tenta realizar as operações dentro deste bloco
        idPedido_ = id;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em setIdPedido: " << e.what() << std::endl;
    }
}

// Adicionar produto ao pedido
void Pedido::addProduto(Produto *p) {
    try {
        // Tenta realizar as operações dentro deste bloco
        precoTotal_ += p->getPreco() * (p->getQtd());
        lucroPorVenda_ += p->getLucroProduto() * (p->getQtd());
        items_.push_back(p);
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em addProduto: " << e.what() << std::endl;
    }
}

// Remover produto do pedido
Produto *Pedido::removeProduto(std::string pNome, int qtd) {
    try {
        // Tenta realizar as operações dentro deste bloco
        Produto *aux = nullptr;
        for (auto it = items_.begin(); it != items_.end(); it++) {
            if (pNome == (*it)->getNome()) {
                if (qtd < (*it)->getQtd()) {
                    (*it)->removeQtd(qtd);
                    break;
                }
                if (qtd == (*it)->getQtd()) {
                    aux = (*it);
                    items_.erase(it);
                    break;
                } else {
                    throw std::invalid_argument("Quantidade inválida");
                }
            }
        }
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em removeProduto: " << e.what() << std::endl;
        return nullptr; // Retorno de erro, se aplicável
    }
}

// Obter ID do pedido
int Pedido::getId() {
    return idPedido_;
}

// Obter ID do atendente
int Pedido::getIdAtendente() {
    return idAtendente_;
}

// Obter preço total do pedido
double Pedido::getPrecoTotal() {
    return precoTotal_;
}

// Obter lucro por venda
double Pedido::getLucroPorVenda() {
    return lucroPorVenda_;
}

// Esvaziar pedido e devolver produtos
std::vector<Produto *> Pedido::esvaziarPedido() {
    try {
        // Tenta realizar as operações dentro deste bloco
        std::vector<Produto *> aux = items_;
        items_.clear();
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em esvaziarPedido: " << e.what() << std::endl;
        return {}; // Retorno vazio ou de erro, se aplicável
    }
}

// Obter forma de pagamento
std::string Pedido::getFormaPagamento() {
    return formaPagamento_;
}

// Obter data da venda
std::string Pedido::getDataVenda() {
    return dataVenda_;
}

// Obter endereço de entrega
std::string Pedido::getEndereco() {
    return endereco_;
}

// Obter informações sobre produtos no pedido
std::vector<Produto> Pedido::infoPedido() {
    try {
        // Tenta realizar as operações dentro deste bloco
        std::vector<Produto> aux;
        for (auto it = items_.begin(); it != items_.end(); it++) {
            aux.push_back(**it);
        }
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em infoPedido: " << e.what() << std::endl;
        return {}; // Retorno vazio ou de erro, se aplicável
    }
}
