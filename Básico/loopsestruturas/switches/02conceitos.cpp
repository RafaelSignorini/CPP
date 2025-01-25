#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char nota;

    std::cout << "Qual foi o seu conceito esse mês? (A, B ou C): \n";
    std::cin >> nota;

    switch (nota) { // este switch verifica a nota do usuário e imprime uma mensagem de acordo com o conceito
        case 'A':
            std::cout << "Você foi muito bem.\n";
            break;
        case 'B':
            std::cout << "Você foi bem.\n";
            break;
        case 'C':
            std::cout << "Você não foi muito bem.\n";
            break;
        default:
            std::cout << "ERRO. Valor inserido inválido.\n";
            break;
    }

    return 0;
}
