#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for (int i = 1; i <= 10; i++) { // for é uma estrutura de repetição, int i = 1 é a inicialização da variável de controle, i <= 10 é a condição de parada, i++ é o incremento
        std::cout << i << '\n';
    }

    std::cout << "feliz ano novo\n";
    
    for (int i = 10; i >= 1; i--) { // enquanto no laço anterior o processo era crescente, neste é decrescente
        std::cout << i << '\n';
    }

    std::cout << "feliz ano novo\n";
    
    return 0;
}
