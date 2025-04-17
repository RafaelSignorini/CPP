#include <iostream>
#include <windows.h>
#include <limits>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    std::cout << "Por favor insira um número inteiro: " << std::endl;
    std::cin >> num;

    while (!std::cin.good()) {
        std::cout << "Erro. Input inválido, tente novamente: " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> num;
    }
    
    if (num % 2 == 0) {
        std::cout << num << " é um número par" << std::endl;
    } else {
        std::cout << num << " é um número ímpar" << std::endl;
    }
    return 0;
}
