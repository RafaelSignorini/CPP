#include <iostream>
#include <windows.h>

void sort(int lista[], int tamanho) { // essa função recebe a lista e seu tamanho para poder ordená-la
    int memoria; // essa variável é usada para armazenar um valor temporário durante a troca de posições
    for (int i = 0; i < tamanho - 1; i++) { // esse laço percorre a lista
        for (int j = 0; j < tamanho - i - 1; j++) { // e esse laço percorre a lista e compara os elementos adjacentes
            if (lista[j] > lista[j + 1]) { // Para fazer ser decrescente, apenas mudar o '>' por '<' nessa linha
                memoria = lista[j]; // se o elemento atual for maior que o próximo, eles trocam de posição
                lista[j] = lista[j + 1]; // isso é feito até que a lista esteja ordenada
                lista[j + 1] = memoria; // a variável memoria é usada para armazenar o novo valor temporariamente
            }
        }
    }
    // não é necessário retornar a lista, pois ela é passada por referência
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int lista[] = {6, 2, 7, 4, 5, 10, 1, 8, 9, 3}; // aqui é criada uma lista com valores desordenados
    int tamanho = sizeof(lista)/sizeof(int);

    sort(lista, tamanho); // aqui a lista é ordenada

    for (int elemento : lista) { // e aqui ela é impressa por meio de um laço for-each
        std::cout << elemento << " "; // aqui apenas é exibido um espaço para separar cada elemento
    }

    return 0;
}
