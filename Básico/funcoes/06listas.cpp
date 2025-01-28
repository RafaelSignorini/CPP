#include <iostream>
#include <windows.h>

double total(double precos[], int tamanho) { // essa função recebe uma lista de preços e o tamanho da lista
    double montante = 0;
    
    for (int i = 0; i < tamanho; i++) {
        montante += precos[i]; // o montante é a soma de todos os preços da lista
    }
    return montante; // e esse valor é retornado para a função principal
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double precos[] = {22.6, 88.9, 86.4};
    int tamanho = sizeof(precos)/sizeof(double);
    double montante = total(precos, tamanho); // através desse chamado da função 'total', o montante é calculado e retornado

    std::cout << "$" << montante; // e finalmente é exibido no fim do programa

    return 0;
}
