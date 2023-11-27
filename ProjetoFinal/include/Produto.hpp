#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include<string>

class Produto
{
private:
    int id_;
    double preco_;
    double lucroProduto_;
    std::string nome_;
    std::string tipo_;
    std::string dataValidade_;

public:
    Produto(int id, std::string nome, std::string tipo, double preco, double lucroProduto);
    void alterarDados( std::string nome, std::string tipo, double preco, double lucroProduto);
    int getId();
    std::string getNome();
    std::string getTipo();
    double getPreco();
    double getLucroProduto();
    std::string getDataValidade();
};

#endif /* PRODUTO_HPP */
