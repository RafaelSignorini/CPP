#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    do {
        std::cout << "Por favor insira um número positivo: ";
        std::cin >> num;
    } while (num < 0);

    std::cout << "O número inserido é " << num << '\n';

    return 0;
}
