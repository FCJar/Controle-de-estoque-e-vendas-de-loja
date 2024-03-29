#include"../include/Pedido.hpp"
#include <vector>
#include <iostream>

Pedido::Pedido(int idAtendente, std::string formaPagamento, std::string endereco, std::string datavenda){
    dataVenda_=datavenda;
    idAtendente_=idAtendente;
    formaPagamento_=formaPagamento;
    endereco_=endereco;
}
void Pedido::setIdPedido(int id){
    idPedido_=id;
}
void Pedido::addProduto(Produto* p){
    precoTotal_+=p->getPreco()*(p->getQtd());
    lucroPorVenda_+=p->getLucroProduto()*(p->getQtd());
    items_.push_back(p);
}
Produto* Pedido::removeProduto(std::string pNome,int qtd){
    Produto* aux;
    for(auto it=items_.begin();it!=items_.end();it++){
        if(pNome==(*it)->getNome()){
            if(qtd<(*it)->getQtd()){
                (*it)->removeQtd(qtd);
                break;
            }if(qtd==(*it)->getQtd()){
                aux=(*it);
                items_.erase(it);
                break;
            }else {
                throw std::invalid_argument("Quantidade invalida");
                break;
            }
        }
    }
}
int Pedido::getId(){
    return idPedido_;
}
int Pedido::getIdAtendente(){
    return idAtendente_;
}
double Pedido::getPrecoTotal(){
    return precoTotal_;
}
double Pedido::getLucroPorVenda(){
    return lucroPorVenda_;
}
std::vector<Produto*> Pedido::esvaziarPedido(){
    std::vector<Produto*> aux=items_;
    items_.clear();
    return aux;
}
std::string Pedido::getFormaPagamento(){
    return formaPagamento_;
}
std::string Pedido::getDataVenda(){
    return dataVenda_;
}
std::string Pedido::getEndereco(){
    return endereco_;
}
std::vector<Produto> Pedido::infoPedido(){
    std::vector<Produto> aux;
    for (auto it= items_.begin();it!=items_.end();it++)
    {
        aux.push_back(**it);
    }
    return aux;
};
