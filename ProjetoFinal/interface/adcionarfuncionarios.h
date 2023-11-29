#ifndef ADCIONARFUNCIONARIOS_H
#define ADCIONARFUNCIONARIOS_H

#include <QDialog>
#include "../include/Pedido.hpp"
#include "../include/Produto.hpp"
#include "../include/Estoque.hpp"
#include "../include/Caixa.hpp"
#include "../include/Funcionario.hpp"
#include <vector>
#include <exception>
namespace Ui {
class AdcionarFuncionarios;
}

class AdcionarFuncionarios : public QDialog
{
    Q_OBJECT

public:
    explicit AdcionarFuncionarios(QWidget *parent = nullptr);
    ~AdcionarFuncionarios();
    void setDados(std::vector<Funcionario*> *f );
private slots:
    void on_AddButton_clicked();

private:
    Ui::AdcionarFuncionarios *ui;
    std::vector<Funcionario*> *f0;
};

#endif // ADCIONARFUNCIONARIOS_H
