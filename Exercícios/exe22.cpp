#include <iostream>
#include <windows.h>

int num = 32;                   // Essa variável tem um escopo global, podendo ser chamada por todas as funções

void printNum() {
    int num = 16;               // Agora, funções locais são apenas chamadas pela própria função ou por outras através de declarações
    std::cout << ::num;         // Um pequeno detalhe é que colocar '::' antes do nome da variável, inverte a ordem de prioridades de escopos
}

int main() {
    int num = 8;

    printNum();                 // Essa função ainda terá o valor interno pois o valor global foi sobrescrito dentro da função 'printNum'

    std::cout << '\n' << num;

    return 0;
}
/* Variáveis com mesmo nome sendo de escopos diferentes têm a seguinte ordem de prioridade:
1º-Escopo local
2º-Escopo global
Dessa forma o código só recorre ao escopo global quando absolutamente necessário */
