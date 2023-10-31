#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Pedido.hpp"
#include "Caixa.hpp"
#include "Estoque.hpp"
#include "Produto.hpp"


class Gerente : public Funcionario
{
private:
    int senha_;
public:
    Gerente(int senha,int id,std::string formaPagamento,std::string enderecoVenda,double salario);
    bool consultarSenha(int id,int senha);
    double consultarLucroTotal(Estoque* e);
    double consultarLucroPorDia(std::string dia);
    double consultarVendasPorFuncionario(int idfuncionario);
    double consultarVendasDiarioPorFuncionario(int idfuncionario, std::string dia);
    void addProdutoEstoque(Estoque* e, Produto* p);
};


#endif /* GERENTE_HPP */