#include"../include/Produto.hpp"

Produto::Produto(int id, std::string nome, std::string tipo, double preco, double lucroProduto,int qtd){
    id_=id;
    nome_=nome;
    tipo_=tipo;
    preco_=preco;
    lucroProduto_=lucroProduto;
    qtd_=qtd;
}
void Produto::alterarDados(std::string nome, std::string tipo, double preco, double lucroProduto){
    nome_=nome;
    tipo_=tipo;
    preco_=preco;
    lucroProduto_=lucroProduto;
}
void Produto::adQtd(int a){
    qtd_+=a;
}void Produto::removeQtd(int a){
    qtd_-=a;
}

int Produto::getQtd(){
    return qtd_;
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
