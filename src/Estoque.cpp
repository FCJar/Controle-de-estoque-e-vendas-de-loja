#include "../include/Estoque.hpp"

// Construtor
Estoque::Estoque(int id) {
    try {
        // Tenta realizar as operações dentro deste bloco
        idRegistro_ = id;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro no construtor de Estoque: " << e.what() << std::endl;
    }
}

// Remover produto pelo nome e quantidade
void Estoque::removerProdutoNome(std::string nomeProduto, int qtd) {
    try {
        // Tenta realizar as operações dentro deste bloco
        for (auto it = produtos_.begin(); it != produtos_.end(); it++) {
            if ((*it)->getNome() == nomeProduto) {
                if ((*it)->getQtd() == qtd) {
                    produtos_.erase(it);
                    break;
                } else if ((*it)->getQtd() > qtd) {
                    (*it)->removeQtd(qtd);
                    break;
                } else {
                    throw std::invalid_argument("Quantidade inválida");
                        break;
                }
            }
        }
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em removerProdutoNome: " << e.what() << std::endl;
    }
}

// Adicionar produto ao estoque
void Estoque::adcionarProduto(Produto *p) {
    try {
        // Tenta realizar as operações dentro deste bloco
        bool aux = true;
        for (int a = 0; a < produtos_.size(); a++) {
            if (produtos_[a]->getNome() == p->getNome()) {
                produtos_[a]->adQtd(p->getQtd());
                aux = false;
            }
        }
        if (aux) {
            produtos_.push_back(p);
        }
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em adcionarProduto: " << e.what() << std::endl;
    }
}

// Vender produto do estoque
Produto *Estoque::venderProduto(std::string nomeProduto, int qtd) {
    try {
        // Tenta realizar as operações dentro deste bloco
        Produto *auxp;
        for (auto it = produtos_.begin(); it != produtos_.end(); it++) {
            if ((*it)->getNome() == nomeProduto) {
                if (qtd == (*it)->getQtd()) {
                    auxp = *it;
                    produtos_.erase(it);
                    break;
                } else if (qtd < (*it)->getQtd()) {
                    (*it)->removeQtd(qtd);
                    auxp = new Produto(
                        ((*it)->getId()), ((*it)->getNome()), ((*it)->getTipo()),
                        ((*it)->getPreco()), ((*it)->getLucroProduto()), (qtd)
                        );
                    break;
                } else {
                    throw std::invalid_argument("Quantidade insuficiente para venda");
                }
            }
        }
        return auxp;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em venderProduto: " << e.what() << std::endl;
        return nullptr; // Retorno de erro, se aplicável
    }
}

// Obter informações sobre produtos no estoque
std::vector<Produto> Estoque::infoRegistroProdutos() {
    try {
        // Tenta realizar as operações dentro deste bloco
        std::vector<Produto> aux;
        for (auto it = produtos_.begin(); it != produtos_.end(); it++) {
            aux.push_back(**it);
        }
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em infoRegistroProdutos: " << e.what() << std::endl;
        return {}; // Retorno vazio ou de erro, se aplicável
    }
}
