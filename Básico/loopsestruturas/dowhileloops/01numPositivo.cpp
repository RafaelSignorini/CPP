#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    do { // loop que pede um número positivo, sempre que for um do while loop, o código dentro do bloco será executado pelo menos uma vez antes de ser interrompido
        std::cout << "Por favor insira um número positivo: ";
        std::cin >> num;
    } while (num < 0); // define a condição do laço depois do bloco

    std::cout << "O número inserido é " << num << '\n';

    return 0;
}
