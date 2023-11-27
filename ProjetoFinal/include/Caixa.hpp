#ifndef CAIXA_HPP
#define CAIXA_HPP

#include<iostream>
#include<vector>

#include"Produto.hpp"
#include"Pedido.hpp"
//#include"Funcionario.hpp"

class Caixa
{
private:
    int idCaixa_;
    double dinheiroCaixa_,lucroTotal_;
    std::vector <Pedido*> pedidosPagos_;
public:
    Caixa(int idCx);
    void addPedidoPago(Pedido* pedido);
    void removePedido(int idComanda);
    int getIdCx();
    double getDinhieroCx();
    double  getLucroTota();
    double retornarLucroDiario(std::string dia);
    double retornarDinheiroCxDia(std::string dia);
    double retornarVendasPorFuncionario(int idfuncionario);
    double retornarVendasPorDiaPorFuncionario(int idfuncionario, std::string dia);

};

#endif /* CAIXA_HPP */
