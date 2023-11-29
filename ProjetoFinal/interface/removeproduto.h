#ifndef REMOVEPRODUTO_H
#define REMOVEPRODUTO_H

#include <QDialog>
#include "../include/Pedido.hpp"
#include "../include/Produto.hpp"
#include "../include/Estoque.hpp"
#include "../include/Caixa.hpp"
#include "../include/Funcionario.hpp"
#include <vector>
#include <exception>
namespace Ui {
class RemoveProduto;
}

class RemoveProduto : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveProduto(QWidget *parent = nullptr);
    ~RemoveProduto();
    void setDados(Estoque* e,std::vector<Funcionario*> *f );
private slots:
    void on_Confirmar_bt_clicked();

private:
    Ui::RemoveProduto *ui;
    Estoque* e0;
    std::vector<Funcionario*> *f0;
};

#endif // REMOVEPRODUTO_H
