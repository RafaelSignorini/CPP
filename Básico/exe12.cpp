#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;

    while (nome.empty()) {
        std::cout << "Insira seu nome abaixo: ";
        std::getline(std::cin, nome);
    }

    std::cout << "Olá, " << nome << '\n';

    return 0;
}
