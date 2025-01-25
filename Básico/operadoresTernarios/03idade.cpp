#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade;

    std::cout << "Qual é a sua idade?\n";
    std::cin >> idade;

    idade >= 18 ? std::cout << "Você é maior de idade.\n" : std::cout << "Você é menor de idade.\n"; // operador ternário que verifica se a idade é maior ou igual a 18

    return 0;
}
