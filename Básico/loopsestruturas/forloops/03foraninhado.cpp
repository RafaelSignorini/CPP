#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int fileiras;
    int colunas;
    char simbolo;

    std::cout << "Quantas fileiras? "; // pergunta ao usuário quantas fileiras ele deseja para gerar um formato no console
    std::cin >> fileiras;

    std::cout << "Quantas colunas? ";
    std::cin >> colunas;

    std::cout << "Insira um símbolo: "; // o símbolo é um caracter que o usuário deseja que seja repetido para formar o formato
    std::cin >> simbolo;
    
    for (int i = 1; i <= fileiras; i++) { // o laço delimita a quantidade de fileiras a serem criadas baseadas no input na linha 12
        for (int j = 1; j <= colunas; j++){ // enquanto esse laço delimita a quantidade de colunas baseadas no input na linha 15
        std::cout << simbolo; // o "símbolo" seria um caracter que o usuário inseriu para ser repetido até completas as colunas e fileiras
        }
        std::cout << '\n';
    }

    return 0;
}
