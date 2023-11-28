#ifndef PRODUTO_H
#define PRODUTO_H

#include <QDialog>

namespace Ui {
class produto;
}

class produto : public QDialog
{
    Q_OBJECT

public:
    explicit produto(QWidget *parent = nullptr);
    ~produto();

private:
    Ui::produto *ui;
};

#endif // PRODUTO_H
