#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nota;

    std::cout << "Insira sua nota (0 a 100): ";
    std::cin >> nota;

    nota >= 70 ? std::cout << "Você passou.\n" : std::cout << "Você não passou.\n"; // usar ? e : no lugar de if e else encurta o código e economiza linhas

    int num;

    std::cout << "Insira um número: ";
    std::cin >> num;

    num % 2 ? std::cout << "ÍMPAR\n" : std::cout << "PAR\n";

    bool fome = true;

    fome ? std::cout << "Você está com fome.\n" : std::cout << "Você não está com fome.\n";

    return 0;
}
