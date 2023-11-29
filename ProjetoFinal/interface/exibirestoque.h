#ifndef EXIBIRESTOQUE_H
#define EXIBIRESTOQUE_H

#include <QDialog>

namespace Ui {
class ExibirEstoque;
}

class ExibirEstoque : public QDialog
{
    Q_OBJECT

public:
    explicit ExibirEstoque(QWidget *parent = nullptr);
    ~ExibirEstoque();

private:
    Ui::ExibirEstoque *ui;
};

#endif // EXIBIRESTOQUE_H
