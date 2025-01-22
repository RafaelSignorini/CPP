#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int tamanho;

    std::cout << "Quantas notas você quer inserir? ";
    std::cin >> tamanho;

    char *pNotas = new char[tamanho];

    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite a " << i + 1 << "a nota:\n";
        std::cin >> pNotas[i];
    }

    for (int i = 0; i < tamanho; i++) {
        std::cout << i + 1 <<"a nota: " << pNotas[i] << '\n';
    }

    delete[] pNotas;

    return 0;
}
