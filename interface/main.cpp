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

    // Criação dos objetos principais
    Estoque *estoque = new Estoque(1);
    Caixa *caixa = new Caixa(1);
    std::vector<Funcionario*> funcionarios;
    std::vector<Gerente*> gerentes;

    // Criação e adição de produtos ao estoque
    Produto* produto0 = new Produto(1, "Pastel", "Comida", 50000.0, 200.0, 5);
    Produto* produto1 = new Produto(2, "Carvão", "Equipamento", 75000.0, 200.0, 5);
        Produto* produto2 = new Produto(3, "Melancia", "Comida", 60000.0, 200.0, 5);
    Produto* produto3 = new Produto(4, "Cano Pvc", "Comida", 7500.0, 4000.0, 8);

    estoque->adcionarProduto(produto0);
    estoque->adcionarProduto(produto1);
    estoque->adcionarProduto(produto2);
    estoque->adcionarProduto(produto3);

    // Configuração dos dados na MainWindow
    MainWindow w;
    w.SetDados(estoque, caixa, &funcionarios, &gerentes);
    w.show();

    return a.exec();
}
