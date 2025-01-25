#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nacao;

    std::cout << "Qual é o seu país de origem?\n";
    std::getline(std::cin, nacao);

    nacao == "Brasil" ? std::cout << "Você é brasileiro.\n" : std::cout << "Você é estrangeiro.\n"; // operador ternário que verifica se a nacionalidade é brasileira

    return 0;
}
