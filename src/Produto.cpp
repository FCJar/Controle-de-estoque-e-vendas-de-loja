#include "../include/Produto.hpp"
#include <iostream>

// Construtor
Produto::Produto(int id, std::string nome, std::string tipo, double preco, double lucroProduto, int qtd) {
    try {
        // Tenta realizar as operações dentro deste bloco
        id_ = id;
        nome_ = nome;
        tipo_ = tipo;
        preco_ = preco;
        lucroProduto_ = lucroProduto;
        qtd_ = qtd;
        // Certifique-se de inicializar outros membros da classe, como dataValidade_, se aplicável
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro no construtor de Produto: " << e.what() << std::endl;
    }
}

// Alterar dados do produto
void Produto::alterarDados(std::string nome, std::string tipo, double preco, double lucroProduto) {
    try {
        // Tenta realizar as operações dentro deste bloco
        nome_ = nome;
        tipo_ = tipo;
        preco_ = preco;
        lucroProduto_ = lucroProduto;
        // Certifique-se de atualizar outros membros da classe, se aplicável
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em alterarDados: " << e.what() << std::endl;
    }
}

// Adicionar quantidade ao produto
void Produto::adQtd(int a) {
    try {
        // Tenta realizar as operações dentro deste bloco
        qtd_ += a;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em adQtd: " << e.what() << std::endl;
    }
}

// Remover quantidade do produto
void Produto::removeQtd(int a) {
    try {
        // Tenta realizar as operações dentro deste bloco
        qtd_ -= a;
        // Certifique-se de incluir lógica adicional para garantir que qtd_ não se torne negativo, se aplicável
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em removeQtd: " << e.what() << std::endl;
    }
}

// Obter quantidade do produto
int Produto::getQtd() {
    return qtd_;
}

// Obter ID do produto
int Produto::getId() {
    return id_;
}

// Obter nome do produto
std::string Produto::getNome() {
    return nome_;
}

// Obter tipo do produto
std::string Produto::getTipo() {
    return tipo_;
}

// Obter preço do produto
double Produto::getPreco() {
    return preco_;
}

// Obter lucro do produto
double Produto::getLucroProduto() {
    return lucroProduto_;
}

// Obter data de validade do produto
std::string Produto::getDataValidade() {
    return dataValidade_;
}
