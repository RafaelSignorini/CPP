#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    [] (double a, double b) { // Uma função lambda pode não conter nome
        std::cout << "a + b = " << a + b;
    } (53.9, 8.4); // ela é chamada logo após o fim de seu código com parênteses (em casos que precisem de parâmetros, como esse, os valores já são inseridos)

    return 0;
}
