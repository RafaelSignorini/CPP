#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;

    while (nome.empty()) { // verifica se a string está vazia
        std::cout << "Insira seu nome abaixo: ";
        std::getline(std::cin, nome);
        while (nome != "Rafael") {
            std::cout << "Você não é o Rafael, sucumba!\n";
            std::getline(std::cin, nome);
        }
    }

    std::cout << "Olá, " << nome << '\n';

    return 0;
}
