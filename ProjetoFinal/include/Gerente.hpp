#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Pedido.hpp"
#include "Caixa.hpp"
#include "Estoque.hpp"
#include "Produto.hpp"
#include "Funcionario.hpp"

#include<exception>


class Gerente : public Funcionario
{
private:
    int senha_;
public:
    Gerente(int senha,int id,std::string cpf,std::string nomeCompleto,double salario);
    bool consultarSenha(int id,int senha);
    double consultarLucroTotal(Caixa* cx2);
    double consultarLucroPorDia(Caixa* cx2,std::string dia);
    double consultarVendasPorFuncionario(Caixa* cx2,int idfuncionario);
    double consultarVendasDiarioPorFuncionario(Caixa* cx2,int idfuncionario, std::string dia);
    void addProdutoEstoque(Estoque* e, Produto* p);
};


#endif /* GERENTE_HPP */
