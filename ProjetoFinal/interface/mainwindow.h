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
    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    Estoque *E0;
    Caixa *cx;
    std::vector<Funcionario> *Funcs;
};
#endif // MAINWINDOW_H
