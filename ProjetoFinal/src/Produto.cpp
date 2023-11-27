#include"../include/Produto.hpp"

Produto::Produto(int id, std::string nome, std::string tipo, double preco, double lucroProduto){
    id_=id;
    nome_=nome;
    tipo_=tipo;
    preco_=preco;
    lucroProduto_=lucroProduto;
}
void Produto::alterarDados(std::string nome, std::string tipo, double preco, double lucroProduto){
    nome_=nome;
    tipo_=tipo;
    preco_=preco;
    lucroProduto_=lucroProduto;
}
int Produto::getId(){
    return id_;
}
std::string Produto::getNome(){
    return nome_;
}
std::string Produto::getTipo(){
    return tipo_;
}
double Produto::getPreco(){
    return preco_;
}
double Produto::getLucroProduto(){
    return lucroProduto_;
}
std::string Produto::getDataValidade(){
    return dataValidade_;
}