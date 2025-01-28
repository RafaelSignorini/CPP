#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string carros[] = {"Corvete", "Mustang", "Kombi"};

    std::cout << carros[0] << '\n';
    std::cout << carros[1] << '\n';
    std::cout << carros[2] << '\n';

    carros[0] = "Zafira"; // substitue ou reatribui o valor na primeira posição da lista

    std::cout << carros[0] << '\n';

    std::string nomes[5]; // caso a variável seja declarada porém não seja atribuída nenhum valor de imediato, um limite de espaços deve ser declarado nas colchetes

    nomes[0] = "Rafael Brito Signorini\n"; // esse é o mais próximo do 'append' que se tem no C++

    std::cout << nomes[0];

    double precos[3];

    precos[0] = 549.41;

    std::cout << "Este produto custa R$" << precos[0];

    return 0;
}
