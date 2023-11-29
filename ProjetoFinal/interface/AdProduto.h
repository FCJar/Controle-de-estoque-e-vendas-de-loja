#ifndef ADPRODUTO_H
#define ADPRODUTO_H

#include <QDialog>
#include "../include/Estoque.hpp"
#include "../include/Produto.hpp"
#include "../include/Gerente.hpp"

namespace Ui {
class AdProduto;
}

class AdProduto : public QDialog
{
    Q_OBJECT

public:
    explicit AdProduto(QWidget *parent = nullptr);
    ~AdProduto();
    void setEstoque(Estoque* e,std::vector<Gerente*> *g);
private slots:
    void on_SalvarBt_clicked();

private:
    Ui::AdProduto *ui;
    Estoque *e0;
    std::vector<Gerente*> *g0;
};

#endif // ADPRODUTO_H
