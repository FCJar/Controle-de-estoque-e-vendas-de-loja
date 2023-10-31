#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include "Pedido.hpp"
#include "Caixa.hpp"
#include "Estoque.hpp"
#include "Produto.hpp"

class Funcionario
{
private:
    int id_;
    std::string cpf_,nomeCompleto_;
    double salario_;
public:
    void criarPedido(int id,std::string formaPagamento,std::string enderecoVenda,double salario);
    void venderProduto(Estoque* e,std::string Produto);
    void removerProduto(Estoque* e,std::string Produto);
    void alterarDados(int id,std::string formaPagamento,std::string enderecoVenda,double salario);
    void finalizarPedido(Caixa* cx2);
    void deletarPedido(Estoque* e);
    double consutarDesempenhoVendas(Caixa* cx2);
    double consutarDesempenhoVendasDiarias(Caixa* cx2,std::string dia);
    
};


#endif /* FUNCIONARIO_HPP */