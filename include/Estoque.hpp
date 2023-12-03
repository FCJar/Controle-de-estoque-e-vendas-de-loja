#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include <iostream>
#include <vector>
#include<exception>

#include "Produto.hpp"

class Estoque
{
private:
    std::vector <Produto*> produtos_;
    int idRegistro_;
public:
    Estoque(int id);
    void removerProdutoNome(std::string nomeProduto,int qtd);
    void adcionarProduto(Produto* p);
    Produto* venderProduto(std::string nomeProduto,int qtd);
    std::vector <Produto> infoRegistroProdutos();
};


#endif /* ESTOQUE_HPP */
