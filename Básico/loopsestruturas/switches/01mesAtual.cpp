#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int month;

    std::cout << "Insira um número indicando o mês atual (1-12): \n";
    std::cin >> month;

    switch (month) { // switch é uma estrutura de controle que permite a seleção de um bloco de código a ser executado de acordo com o valor de uma variável
        case 1:
            std::cout << "O mês atual é Janeiro.\n";
            break;
        case 2:
            std::cout << "O mês atual é Fevereiro.\n";
            break;
        case 3:
            std::cout << "O mês atual é Março.\n";
            break;
        case 4:
            std::cout << "O mês atual é Abril.\n";
            break;
        case 5:
            std::cout << "O mês atual é Maio.\n";
            break;
        case 6:
            std::cout << "O mês atual é Junho.\n";
            break;
        case 7:
            std::cout << "O mês atual é Julho.\n";
            break;
        case 8:
            std::cout << "O mês atual é Agosto.\n";
            break;
        case 9:
            std::cout << "O mês atual é Setembro.\n";
            break;
        case 10:
            std::cout << "O mês atual é Outubro.\n";
            break;
        case 11:
            std::cout << "O mês atual é Novembro.\n";
            break;
        case 12:
            std::cout << "O mês atual é Dezembro.\n";
            break;
        default:
            std::cout << "ERRO. Valor inserido inválido.\n";
            break;
    }
}
