#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int notas[] = {16, 97, 52, 66};

    for (int nota : notas) { // esse é um laço for-each, ele percorre todos os elementos de um array já criando uma variável para armazenar o valor
        std::cout << nota << '\n'; // é um método mais simples de percorrer arrays, mas não é possível acessar o índice do array
    }
    return 0;
}
