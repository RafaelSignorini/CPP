#include <iostream>
#include <windows.h>

double total(double precos[], int tamanho) {
    double montante = 0;
    
    for (int i = 0; i < tamanho; i++) {
        montante += precos[i];
    }
    return montante;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double precos[] = {22.6, 88.9, 86.4};
    int tamanho = sizeof(precos)/sizeof(double);
    double montante = total(precos, tamanho);

    std::cout << "$" << montante;

    return 0;
}
