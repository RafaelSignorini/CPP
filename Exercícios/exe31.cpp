#include <iostream>
#include <windows.h>

void sort(int lista[], int tamanho) {
    int memoria;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {      // Para fazer ser decrescente, apenas mudar o '>' por '<' nessa linha
                memoria = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = memoria;
            }
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int lista[] = {6, 2, 7, 4, 5, 10, 1, 8, 9, 3};
    int tamanho = sizeof(lista)/sizeof(int);

    sort(lista, tamanho);

    for (int elemento : lista) {
        std::cout << elemento << " ";
    }

    return 0;
}
