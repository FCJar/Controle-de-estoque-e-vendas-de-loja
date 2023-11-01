#include "include/Pedido.hpp"
#include "include/Caixa.hpp"
#include "include/Estoque.hpp"
#include "include/Produto.hpp"

int main(){
    Caixa* cx=new Caixa(1);
    Pedido* p=new Pedido(1,"a vista","Av exemplo","20/07/2022");
    Produto* exemplo=new Produto(1,"bolo","Comestivel",20.00,19.00);
    p->addProduto(exemplo);
    cx->addPedidoPago(p);
    std::cout<<cx->getDinhieroCx()<<std::endl;
    std::cout<<cx->getLucroTota()<<std::endl;
    std::cout<<p->getPrecoTotal()<<std::endl;
    std::cout<<p->getLucroPorVenda()<<std::endl;
    std::cout<<exemplo->getPreco()<<std::endl;
    std::cout<<exemplo->getLucroProduto()<<std::endl;
}