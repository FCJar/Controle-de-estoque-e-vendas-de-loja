#include"../include/Funcionario.hpp"

Funcionario::Funcionario(int id,std::string cpf,std::string nomeCompleto,double salario){
    id_=id;
    cpf_=cpf;
    nomeCompleto_=nomeCompleto;
    salario_=salario;
}
void Funcionario::criarPedido(std::string formaPagamento,std::string enderecoVenda,std::string datavenda){
    pendente=new Pedido(this->id_,formaPagamento,enderecoVenda,datavenda);
}
void Funcionario::venderProduto(Estoque* e,std::string prod,int qtd){
    Produto* aux=e->venderProduto(prod,qtd);
    pendente->addProduto(aux);
}
void Funcionario::removerProduto(Estoque* e,std::string produto){
    e->adcionarProduto(pendente->removeProduto(produto));
}
void Funcionario::finalizarPedido(Caixa* cx2){
    cx2->addPedidoPago(pendente);
    pendente=nullptr;
}
void Funcionario::deletarPedido(Estoque* e){
    std::vector<Produto*> aux=pendente->esvaziarPedido();
    for(auto it=aux.begin();it!=aux.end();it++){
        e->adcionarProduto(*it);
    }
}
int Funcionario::getId(){
    return id_;
}
