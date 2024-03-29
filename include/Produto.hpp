#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include<string>
#include<exception>
class Produto
{
private:
    int id_;
    int qtd_;
    double preco_;
    double lucroProduto_;
    std::string nome_;
    std::string tipo_;
    std::string dataValidade_;

public:
    Produto(int id, std::string nome, std::string tipo, double preco, double lucroProduto,int qtd);
    void alterarDados( std::string nome, std::string tipo, double preco, double lucroProduto);
    void adQtd(int a);
    int getQtd();
    int getId();
    void removeQtd(int a);
    std::string getNome();
    std::string getTipo();
    double getPreco();
    double getLucroProduto();
    std::string getDataValidade();
};

#endif /* PRODUTO_HPP */
