#ifndef VENDERPRODUTOS_H
#define VENDERPRODUTOS_H

#include <QDialog>
#include "../include/Pedido.hpp"
#include "../include/Produto.hpp"
#include "../include/Estoque.hpp"
#include "../include/Caixa.hpp"
#include "../include/Funcionario.hpp"
#include <vector>
namespace Ui {
class VenderProdutos;
}

class VenderProdutos : public QDialog
{
    Q_OBJECT

public:
    explicit VenderProdutos(QWidget *parent = nullptr);
    ~VenderProdutos();
    void setDados(Estoque* e,Caixa* c,std::vector<Funcionario*> *f);

private slots:
   // void on_pushButton_clicked();

    void on_AdProduto_bt_clicked();

    void on_FinalizaP_bt_clicked();

private:
    Ui::VenderProdutos *ui;
    Pedido* aux;
    Estoque* e0;
    Caixa* cx0;
    bool pedidoInicializado;
    std::vector<Funcionario*> *f0;

};

#endif // VENDERPRODUTOS_H
