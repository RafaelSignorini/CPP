#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double precos[3]; // uma lista pode ser criada em uma linha e seus valores atribuídos em outra, porém, por esse método, é necessário declarar o limite de espaços nas colchetes

    precos[0] = 549.41; // e aqui se atribui algum valor a um espaço específico da lista
    precos[1] = 87.65;
    precos[2] = 22.23;

    std::cout << "Aqui está sua lista completa de preços:\n";
    for (int i = 0; i < sizeof(precos)/sizeof(precos[0]); i++) {
        std::cout << "Produto " << i+1 << ": R$" << precos[i] << '\n';
    }

    int escolha;
    std::cout << "Deseja ver o preço de algum produto em específico? Insira seu número abaixo:\n";
    std::cin >> escolha;

    switch (escolha) {
        case 1: std::cout << "Este produto custa R$" << precos[escolha-1];
        break;
        case 2: std::cout << "Este produto custa R$" << precos[escolha-1];
        break;
        case 3: std::cout << "Este produto custa R$" << precos[escolha-1];
        break;
        default: std::cout << "Este produto não existe em nossa lista.";
        break;
    }

    return 0;
}
