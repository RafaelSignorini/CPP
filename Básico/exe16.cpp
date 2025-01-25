#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int fileiras;
    int colunas;
    char simbolo;

    std::cout << "Quantas fileiras? ";
    std::cin >> fileiras;

    std::cout << "Quantas colunas? ";
    std::cin >> colunas;

    std::cout << "Insira um símbolo: ";
    std::cin >> simbolo;
    
    for (int i = 1; i <= fileiras; i++) { // O laço delimita a quantidade de fileiras a serem criadas baseadas no input na linha 12
        for (int j = 1; j <= colunas; j++){ // Enquanto esse laço delimita a quantidade de colunas baseadas no input na linha 15
        std::cout << simbolo; // O "símbolo" seria um caracter que o usuário inseriu para ser repetido até completas as colunas e fileiras
        }
        std::cout << '\n';
    }

    return 0;
}
