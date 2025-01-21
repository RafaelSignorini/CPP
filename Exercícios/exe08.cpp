#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade;

    std::cout << "Insira sua idade: ";
    std::cin >> idade;

    if (idade < 0 || idade > 100) {
        std::cout << "ERRO. Idade inserida inválida.";
    } else if (idade >= 18) {
        std::cout << "Seja bem vinde, Usuário.";
    } else {
        std::cout << "Você não atinge a idade mínima para acessar este programa.";
    }
    return 0;
}
