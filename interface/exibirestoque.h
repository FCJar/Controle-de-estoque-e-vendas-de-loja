#ifndef EXIBIRESTOQUE_H
#define EXIBIRESTOQUE_H

#include <QDialog>
#include "../include/Pedido.hpp"
#include "../include/Produto.hpp"
#include "../include/Estoque.hpp"
#include "../include/Caixa.hpp"
#include "../include/Gerente.hpp"
#include "../include/Funcionario.hpp"

#include <string>
#include <iostream>
#include <QMessageBox>
#include <exception>

namespace Ui {
class ExibirEstoque;
}

class ExibirEstoque : public QDialog
{
    Q_OBJECT

public:
    explicit ExibirEstoque(QWidget *parent = nullptr);
    ~ExibirEstoque();
    void setDados(Estoque *e);
private slots:
    void on_pushButton_clicked();

private:
    Ui::ExibirEstoque *ui;
    Estoque *e0;
    std::vector<Produto> prod;
};

#endif // EXIBIRESTOQUE_H
