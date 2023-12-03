#include "../include/Gerente.hpp"

// Construtor
Gerente::Gerente(int senha, int id, std::string cpf, std::string nomeCompleto, double salario)
    : Funcionario(id, cpf, nomeCompleto, salario) {
    try {
        // Tenta realizar as operações dentro deste bloco
        senha_ = senha;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro no construtor de Gerente: " << e.what() << std::endl;
    }
}

// Consultar senha do gerente
bool Gerente::consultarSenha(int id, int senha) {
    try {
        // Tenta realizar as operações dentro deste bloco
        bool aux = false;
        if (this->getId() == id && this->senha_ == senha) {
            aux = true;
        }
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em consultarSenha: " << e.what() << std::endl;
        return false; // Retorno de erro, se aplicável
    }
}

// Consultar lucro total no caixa
double Gerente::consultarLucroTotal(Caixa *cx2) {
    try {
        // Tenta realizar as operações dentro deste bloco
        double aux = cx2->getLucroTota();
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em consultarLucroTotal: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Consultar lucro diário no caixa
double Gerente::consultarLucroPorDia(Caixa *cx2, std::string dia) {
    try {
        // Tenta realizar as operações dentro deste bloco
        double aux = cx2->retornarLucroDiario(dia);
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em consultarLucroPorDia: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Consultar vendas por funcionário no caixa
double Gerente::consultarVendasPorFuncionario(Caixa *cx2, int idfuncionario) {
    try {
        // Tenta realizar as operações dentro deste bloco
        double aux = cx2->retornarVendasPorFuncionario(idfuncionario);
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em consultarVendasPorFuncionario: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Consultar vendas diárias por funcionário no caixa
double Gerente::consultarVendasDiarioPorFuncionario(Caixa *cx2, int idfuncionario, std::string dia) {
    try {
        // Tenta realizar as operações dentro deste bloco
        double aux = cx2->retornarVendasPorDiaPorFuncionario(idfuncionario, dia);
        return aux;
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em consultarVendasDiarioPorFuncionario: " << e.what() << std::endl;
        return -1.0; // Retorno de erro, se aplicável
    }
}

// Adicionar produto ao estoque
void addProdutoEstoque(Estoque *e, Produto *p) {
    try {
        // Tenta realizar as operações dentro deste bloco
        e->adcionarProduto(p);
    } catch (const std::exception &e) {
        // Se uma exceção for capturada, exibe uma mensagem de erro (pode ser ajustado conforme necessário)
        std::cerr << "Erro em addProdutoEstoque: " << e.what() << std::endl;
    }
}
