#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string pessoas[3][3] = {{"Jorge", "Majé", "Vinicin"}, // isso é uma lista de listas, ou seja, uma matriz
                                {"Henry", "Matheus", "Peaga"},
                                {"Rafael", "Tales", "Malu"}};

    std::cout << pessoas[0][0] << " "; // esse é um jeito mais simples de acessar um valor de uma matriz
    std::cout << pessoas[2][1] << " ";
    std::cout << pessoas[0][1] << " ";

    int linhas = sizeof(pessoas)/sizeof(pessoas[0]);
    int colunas = sizeof(pessoas)/sizeof(pessoas[0][0]);

    for (int i = 0; i < linhas; i++) { // enquanto esse é um jeito mais complexo de acessar um valor de uma matriz, porém esse é mais eficiente e abrange todos os casos
        for (int j = 0; j < colunas; j++) {
            std::cout << pessoas[i][j] << " ";
        }
    }

    return 0;
}
