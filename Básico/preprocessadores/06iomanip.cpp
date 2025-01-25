#include <iostream>
#include <windows.h>
#include <iomanip> // iomanip é uma biblioteca de manipulação de entrada e saída

void mostrarConta(double conta) { // função que mostra o valor da conta
    std::cout << "Sua conta tem R$" << std::setprecision(2) << std::fixed << conta << '\n'; // std::setprecision(2) define a precisão de casas decimais para 2, std::fixed define a notação fixa
}

double depositar() {
    double qntd = 0;
    
    std::cout << "Insira a quantidade a ser depositada: ";
    std::cin >> qntd;

    if (qntd < 0) {
        std::cout << "ERRO. Valor inserido inválido, tente novamente.\n";
        return 0;
    } else {
        return qntd;
    }
}

double retirar(double conta) {
    double qntd;

    std::cout << "Insira a quantidade que deseja extrair: ";
    std::cin >> qntd;

    if (qntd < 0) {
        std::cout << "ERRO. Valor inserido inválido, tente novamente.\n";
        return 0;
    } else if (qntd > conta) {
        std::cout << "AVISO: Sua conta não tem dinheiro o suficiente para realizar essa transação.\n";
        return 0;
    } else {
        return qntd;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double conta = 1412.59;
    int escolha = 0;

    do {
        std::cout << "Escolha sua ação abaixo\n1. Mostrar valor na conta;\n2. Depositar dinheiro;\n3. Retirar dinheiro;\n4. Sair.\n";
        std::cin >> escolha;

        std::cin.clear(); // limpa o buffer de entrada
        fflush(stdin);

        switch (escolha) {
            case 1: mostrarConta(conta);
            break;
            case 2: conta += depositar();
            break;
            case 3: conta -= retirar(conta);
            break;
            case 4: std::cout << "Saindo da conta...\n";
            break;
            default: std::cout << "ERRO. Opção inválida, tente novamente.\n";
            break;
        }
    } while (escolha != 4);

    return 0;
}
