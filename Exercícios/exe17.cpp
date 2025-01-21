#include <iostream>
#include <windows.h>
#include <ctime>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand(time(0));
    int numAl = rand() % 5 + 1;

    switch (numAl) {
        case 1: std::cout << "Você ganhou um adesivo!";
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
