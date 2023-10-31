#include"include/Gerente.hpp"

Gerente::Gerente(int senha,int id,std::string cpf,std::string nomeCompleto,double salario) 
: Funcionario(id,cpf,nomeCompleto,salario) {
    senha_=senha;    
}
bool Gerente::consultarSenha(int id,int senha){
    bool aux=false;
    if(this->getId()==id && this->senha_==senha){
        aux=true;
    }
    return aux;
}
double Gerente::consultarLucroTotal(Caixa* cx2){
    double aux=cx2->getLucroTota();
    return aux;
}
double Gerente::consultarLucroPorDia(Caixa* cx2,std::string dia){
    double aux=cx2->retornarLucroDiario(dia);
    return aux;
}
double Gerente::consultarVendasPorFuncionario(Caixa* cx2,int idfuncionario){
    double aux=cx2->retornarVendasPorFuncionario(idfuncionario);
    return aux;
}
double consultarVendasDiarioPorFuncionario(Caixa* cx2,int idfuncionario, std::string dia){
    double aux=cx2->retornarVendasPorDiaPorFuncionario(idfuncionario,dia);
    return aux;
}
void addProdutoEstoque(Estoque* e, Produto* p){
    e->adcionarProduto(p);
}