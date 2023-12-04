#include "mainwindow.h"

#include <QApplication>
#include "../include/Caixa.hpp"
#include "../include/Estoque.hpp"
#include "../include/Funcionario.hpp"
#include "../include/Gerente.hpp"
#include "../include/Pedido.hpp"
#include "../include/Produto.hpp"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Estoque *e0=new Estoque(1);
    Caixa *cx=new Caixa(1);
    std::vector<Funcionario*> *funcs;
    std::vector<Gerente*> *g0;
    Produto* p0=new Produto(1,"Pastel","Comida",50000.0,200.0,5);
    Produto* p1=new Produto(2,"Carvão","equipamento",75000.0,200.0,5);
    Produto* p2=new Produto(3,"melancia","Comida",60000.0,200.0,5);
    Produto* p3=new Produto(4,"Cano Pvc","Comida",7500.0,4000.0,8);
    e0->adcionarProduto(p0);
    e0->adcionarProduto(p1);
    e0->adcionarProduto(p2);
    e0->adcionarProduto(p3);
    w.SetDados(e0,cx,funcs,g0);
    w.show();
    return a.exec();
}
