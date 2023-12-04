#include "../include/Caixa.hpp"

// Construtor
Caixa::Caixa(int idCx) {
    try {
        // Tenta realizar as operações dentro deste bloco
        lucroTotal_=0;
        idCaixa_ = idCx;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro no construtor de Caixa: " << e.what() << std::endl;
    }
}

// Adicionar pedido pago ao caixa
void Caixa::addPedidoPago(Pedido *pedido) {
    try {
        // Tenta realizar as operações dentro deste bloco
        lucroTotal_+=pedido->getLucroPorVenda();
        pedidosPagos_.push_back(pedido);
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em addPedidoPago: " << e.what() << std::endl;
    }
}

// Remover pedido do caixa
void Caixa::removePedido(int idComanda) {
    try {
        // Tenta realizar as operações dentro deste bloco
        for (auto it = pedidosPagos_.begin(); it != pedidosPagos_.end(); it++) {
            if ((*it)->getId() == idComanda) {
                pedidosPagos_.erase(it);
                break;
            }
        }
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em removePedido: " << e.what() << std::endl;
    }
}

// Obter ID do caixa
int Caixa::getIdCx() {
    try {
        // Tenta realizar as operações dentro deste bloco
        return idCaixa_;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em getIdCx: " << e.what() << std::endl;
        return -1; // Retorno de erro, se aplicável
    }
}

// Obter dinheiro no caixa
double Caixa::getDinhieroCx() {
    try {
        // Tenta realizar as operações dentro deste bloco
        return dinheiroCaixa_;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em getDinhieroCx: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Obter lucro total
double Caixa::getLucroTota() {
    try {
        // Tenta realizar as operações dentro deste bloco
        return lucroTotal_;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em getLucroTota: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Retornar lucro diário
double Caixa::retornarLucroDiario(std::string dia) {
    try {
        // Tenta realizar as operações dentro deste bloco
        return lucroTotal_;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em retornarLucroDiario: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Retornar dinheiro no caixa por dia
double Caixa::retornarDinheiroCxDia(std::string dia) {
    try {
        // Tenta realizar as operações dentro deste bloco
        double auxLucro = 0.0;
        for (auto it = pedidosPagos_.begin(); it != pedidosPagos_.end(); it++) {
            if ((*it)->getDataVenda() == dia) {
                auxLucro += (*it)->getLucroPorVenda();
            }
        }
        return auxLucro;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em retornarDinheiroCxDia: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Retornar vendas por funcionário
double Caixa::retornarVendasPorFuncionario(int idfuncionario) {
    try {
        // Tenta realizar as operações dentro deste bloco
        double auxLucro = 0.0;
        for (auto it = pedidosPagos_.begin(); it != pedidosPagos_.end(); it++) {
            if ((*it)->getIdAtendente() == idfuncionario) {
                auxLucro += (*it)->getLucroPorVenda();
            }
        }
        return auxLucro;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em retornarVendasPorFuncionario: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Retornar vendas por dia por funcionário
double Caixa::retornarVendasPorDiaPorFuncionario(int idfuncionario, std::string dia) {
    try {
        // Tenta realizar as operações dentro deste bloco
        double auxLucro = 0.0;
        for (auto it = pedidosPagos_.begin(); it != pedidosPagos_.end(); it++) {
            if ((*it)->getIdAtendente() == idfuncionario && (*it)->getDataVenda() == dia) {
                auxLucro += (*it)->getLucroPorVenda();
            }
        }
        return auxLucro;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em retornarVendasPorDiaPorFuncionario: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}
