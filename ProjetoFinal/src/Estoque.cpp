#include"../include/Estoque.hpp"

Estoque::Estoque(int id){
    idRegistro_=id;
}
void Estoque::removerProdutoNome(std::string nomeProduto){
    for(auto it=produtos_.begin();it!=produtos_.end();it++){
        if((*it)->getNome()==nomeProduto){
            produtos_.erase(it);
            break;
        }
    }
}
void Estoque::adcionarProduto(Produto* p){
    produtos_.push_back(p);
}
Produto* Estoque::venderProduto(std::string nomeProduto){
    Produto* auxp;
    for(auto it=produtos_.begin();it!=produtos_.end();it++){
        if((*it)->getNome()==nomeProduto){
            auxp=*it;
            produtos_.erase(it);
            break;
        }
    }
    return auxp;
}
std::vector <Produto> Estoque::infoRegistroProdutos(){
    std::vector <Produto> aux;
    for(auto it=produtos_.begin();it!=produtos_.end();it++){
            aux.push_back(**it);
    }
    return aux;
}