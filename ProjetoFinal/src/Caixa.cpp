#include"../include/Caixa.hpp"
Caixa::Caixa(int idCx){
    idCaixa_=idCx;
}
void Caixa::addPedidoPago(Pedido* pedido){
    lucroTotal_=pedido->getLucroPorVenda();
    pedidosPagos_.push_back(pedido);
}
void Caixa::removePedido(int idComanda){
    for (auto it=pedidosPagos_.begin();it!=pedidosPagos_.end();it++)
    {
        if((*it)->getId()==idComanda){
            pedidosPagos_.erase(it);
            break;
        }
    } 
}
int Caixa::getIdCx(){
    return idCaixa_;
}
double Caixa::getDinhieroCx(){
    return dinheiroCaixa_;
}
double  Caixa::getLucroTota(){
    return lucroTotal_;
}
double Caixa::retornarLucroDiario(std::string dia){
    return lucroTotal_;
}
double Caixa::retornarDinheiroCxDia(std::string dia){
    double auxLucro=0.0;
    for (auto it=pedidosPagos_.begin();it!=pedidosPagos_.end();it++)
    {
        if((*it)->getDataVenda()==dia){
            auxLucro+=(*it)->getLucroPorVenda();
        }
    }
    return auxLucro;
}
double Caixa::retornarVendasPorFuncionario(int idfuncionario){
    double auxLucro=0.0;
    for (auto it=pedidosPagos_.begin();it!=pedidosPagos_.end();it++)
    {
        if((*it)->getIdAtendente()==idfuncionario){
            auxLucro+=(*it)->getLucroPorVenda();
        }
    }
    return auxLucro;
}
double Caixa::retornarVendasPorDiaPorFuncionario(int idfuncionario, std::string dia){
        double auxLucro=0.0;
    for (auto it=pedidosPagos_.begin();it!=pedidosPagos_.end();it++)
    {
        if((*it)->getIdAtendente()==idfuncionario && (*it)->getDataVenda()==dia){
            auxLucro+=(*it)->getLucroPorVenda();
        }
    }
    return auxLucro;
}
