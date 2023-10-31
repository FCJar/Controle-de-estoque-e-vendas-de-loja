#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include <iostream>
#include <vector>

#include "Produto.hpp"

class Estoque
{
private:
    std::vector <Produto*> produtos_;
    int idRegistro_;
public:
    Estoque();
    void removerProdutoNome(std::string nomeProduto);
    void adcionarProduto(Produto* p);
    Produto* venderProduto(std::string nomeProduto);
    std::vector <Produto> infoRegistroProdutos();
};


#endif /* ESTOQUE_HPP */