#ifndef DADOSDEVENDA_H
#define DADOSDEVENDA_H

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
class DadosDeVenda;
}

class DadosDeVenda : public QDialog
{
    Q_OBJECT

public:
    explicit DadosDeVenda(QWidget *parent = nullptr);
    ~DadosDeVenda();
    void setDados(Caixa* cx2,std::vector<Gerente*> *g0);
private slots:
    void on_ConfirmarButton_clicked();

private:
    Ui::DadosDeVenda *ui;
    Caixa* cx2;
    std::vector<Gerente*> *g0;
};

#endif // DADOSDEVENDA_H
