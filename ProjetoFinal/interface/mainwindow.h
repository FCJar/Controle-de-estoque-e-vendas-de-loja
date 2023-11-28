#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "../include/Caixa.hpp"
#include "../include/Estoque.hpp"
#include "../include/Funcionario.hpp"
#include "../include/Gerente.hpp"
#include "../include/Pedido.hpp"
#include "../include/Produto.hpp"

#include "adproduto.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_AdProduto_clicked();

    void on_EEstoque_clicked();

    void on_AdFunc_clicked();

    void on_VProduto_clicked();

    void on_pushButton_clicked();

    void on_RemoverPro_clicked();

private:
    Ui::MainWindow *ui;
    Estoque *E0=new Estoque(1);
    Caixa *cx;
    std::vector<Funcionario> *Funcs;
};
#endif // MAINWINDOW_H
