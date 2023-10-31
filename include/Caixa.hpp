#ifndef CAIXA_HPP
#define CIAXA_HPP

#include<iostream>
#include<vector>

#include"Produto.hpp"
#include"Pedido.hpp"
#include"Funcionario.hpp"

class Caixa
{
private:
    int idCaixa_,idComanda_;
    double dinheiroCaixa_,lucroTotal_;
    std::vector <Pedido*> comandaPagas_;
public:
    Caixa(int idCx);
    int getIdCx();
    double getDinhieroCx();
    double  getLucroTota();
    void addPedido(Pedido* Pedido);
    void removePedido(int idComanda);
    double retornarLucroDiario(std::string dia);
    double retornarDinheiroCxDia(std::string dia);
    double retornarVendasPorFuncionario(int idfuncionario);
    double retornarVendasPorDiaPorFuncionario(int idfuncionario, std::string dia);

};

#endif /* CAIXA_HPP */
