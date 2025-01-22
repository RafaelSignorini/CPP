#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string pessoas[3][3] = {{"Jorge", "Majé", "Vinicin"},
                                {"Henry", "Matheus", "Peaga"},
                                {"Rafael", "Tales", "Malu"}};

    std::cout << pessoas[0][0] << " ";
    std::cout << pessoas[2][1] << " ";          // Simples
    std::cout << pessoas[0][1] << " ";

    int linhas = sizeof(pessoas)/sizeof(pessoas[0]);
    int colunas = sizeof(pessoas)/sizeof(pessoas[0][0]);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {         // Complexo
            std::cout << pessoas[i][j] << " ";
        }
    }

    return 0;
}
