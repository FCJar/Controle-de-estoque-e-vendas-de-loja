#ifndef EXIBIRDADOSDEVENDA_H
#define EXIBIRDADOSDEVENDA_H

#include <QDialog>

namespace Ui {
class ExibirDadosDeVenda;
}

class ExibirDadosDeVenda : public QDialog
{
    Q_OBJECT

public:
    explicit ExibirDadosDeVenda(QWidget *parent = nullptr);
    ~ExibirDadosDeVenda();

private:
    Ui::ExibirDadosDeVenda *ui;
};

#endif // EXIBIRDADOSDEVENDA_H
