#include"../include/Estoque.hpp"

Estoque::Estoque(int id){
    idRegistro_=id;
}
void Estoque::removerProdutoNome(std::string nomeProduto,int qtd){
    for(auto it=produtos_.begin();it!=produtos_.end();it++){
        if((*it)->getNome()==nomeProduto){
            if((*it)->getQtd()==qtd){
                produtos_.erase(it);
                break;
            }else if((*it)->getQtd()>qtd){
                (*it)->removeQtd(qtd);
                break;
            }else{
                throw std::invalid_argument("Quantidade invalida");
                break;
            }
        }
    }
}
void Estoque::adcionarProduto(Produto* p){
    bool aux=true;
    for(int a=0;a<produtos_.size();a++){
        if(produtos_[a]->getNome()==p->getNome()){
            produtos_[a]->adQtd(p->getQtd());
            aux=false;
        }
    }
    if(aux){
       produtos_.push_back(p);
    }

}
Produto* Estoque::venderProduto(std::string nomeProduto,int qtd){
    Produto* auxp;
    for(auto it=produtos_.begin();it!=produtos_.end();it++){
        if((*it)->getNome()==nomeProduto){
            if(qtd==(*it)->getQtd()){
                auxp=*it;
                produtos_.erase(it);
                break;
            }else if(qtd<(*it)->getQtd()){
                (*it)->removeQtd(qtd);
                auxp= new Produto(((*it)->getId()),((*it)->getNome()),((*it)->getTipo()),
                                   ((*it)->getPreco()),((*it)->getLucroProduto()),(qtd));
                break;
            }else{
                throw std::invalid_argument("");
            }
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
