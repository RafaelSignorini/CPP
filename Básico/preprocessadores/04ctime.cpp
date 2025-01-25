#include <iostream>
#include <windows.h>
#include <ctime> // ctime é uma biblioteca que contém funções para manipular o tempo

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand(time(0)); // srand é uma função que inicializa o gerador de números aleatórios, time(0) é uma função que retorna o tempo atual em segundos
    int numAl = rand() % 5 + 1; // rand é uma função que retorna um número aleatório, % 5 + 1 é uma operação que retorna um número aleatório entre 1 e 5

    switch (numAl) { // switch é uma instrução que executa um bloco de código dependendo do valor de uma variável
        case 1: std::cout << "Você ganhou um adesivo!"; // case é uma instrução que executa um bloco de código se o valor da variável for igual ao valor do case
        break; // break é uma instrução que interrompe a execução do switch
        case 2: std::cout << "Você ganhou uma camisa!";
        break;
        case 3: std::cout << "Você ganhou um almoço!";
        break;
        case 4: std::cout << "Você ganhou uma espada!";
        break;
        case 5: std::cout << "Você ganhou uma melhoria!";
        break;
    }
    
    return 0;
}
