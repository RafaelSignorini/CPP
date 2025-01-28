#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nomes[] = {"Rafael", "Stéfany", "Lilith", "Zara"}; // aqui atribuímos os valores à lista, e o compilador já sabe o tamanho da lista baseado em quantas variáveis, sempre de mesmo tipo, foram atribuídas
    int notas[] = {6, 3, 9, 6, 8};

    for (int i = 0; i < sizeof(nomes)/sizeof(std::string); i++) {
        std::cout << nomes[i] << '\n';
    }

    for (int i = 0; i < sizeof(notas)/sizeof(int); i++) {
        std::cout << notas[i] << '\n';
    }
    
    std::string nomes[5]; // caso a variável seja declarada porém não seja atribuída nenhum valor de imediato, um limite de espaços deve ser declarado nas colchetes

    nomes[0] = "Rafael Brito Signorini\n"; // esse é o mais próximo do 'append' que se tem no C++
    
    return 0;
}
