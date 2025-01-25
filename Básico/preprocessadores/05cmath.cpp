#include <iostream>
#include <cmath> // cmath é uma biblioteca que contém funções matemáticas

int main() {
    int base = 5, expoente = 3; // base é uma variável que armazena 5, expoente é uma variável que armazena 3
    int potencia = pow(base, expoente); // pow é uma função que retorna a potência de um número, potencia é uma variável que armazena a potência de base elevado a expoente

    std::cout << base << " elevado a " << expoente << "equivale a " << potencia << '\n';

    return 0;
}
