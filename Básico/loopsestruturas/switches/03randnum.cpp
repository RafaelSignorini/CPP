#include <iostream>
#include <windows.h>
#include <ctime>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand(time(0));
    int numAl = rand() % 5 + 1;

    switch (numAl) { // esse switch utiliza o valor de numAl, um exemplo de valor aleatório, para determinar o prêmio, simulando um dado
        case 1: std::cout << "Você ganhou um adesivo!"; // cada case é um prêmio, subindo a preciosidade a cada número
        break;
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
