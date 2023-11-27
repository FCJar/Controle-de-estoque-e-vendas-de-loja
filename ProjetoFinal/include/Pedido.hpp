#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string>
#include <vector>

#include "Produto.hpp"
#include "Estoque.hpp"

class Pedido
{
private:
   int idPedido_,idAtendente_;
   double precoTotal_,lucroPorVenda_; 
   std::string formaPagamento_, dataVenda_,endereco_;
   std::vector <Produto*> items_;
public:
    Pedido(int idAtendente, std::string formaPagamento, std::string endereco,std::string DataVenda);
    void setIdPedido(int id);
    void addProduto(Produto* p);
    Produto* removeProduto(std::string produtoNome);
    int getId();
    int getIdAtendente();
    double getPrecoTotal();
    double getLucroPorVenda();
    std::vector<Produto*> esvaziarPedido();
    std::string getFormaPagamento();
    std::string getDataVenda();
    std::string getEndereco();
    std::vector<Produto> infoPedido();
};

#endif /* PEDIDO_HPP */
