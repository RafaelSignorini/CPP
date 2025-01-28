#include <iostream>
#include <windows.h>

void printInfo(const std::string nome, const int idade) { // esse código resulta em erro porque já declara as variáveis nome e idade como constantes
    // nome = " ";                                        // portanto, alterar elas como é feito aqui, colide com a lógica do resto do código
    // idade = 0;

    std::cout << nome << '\n';
    std::cout << idade << '\n';
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Rafael";
    int idade = 18;

    printInfo(nome, idade);

    return 0;
}
