#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;

    std::cout << nome.empty() << '\n'; // verifica se a string está vazia

    return 0;
}
