#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    std::string comidas[5];
    int tamanho = sizeof(comidas)/sizeof(std::string);
    std::string memo;

    std::cout << "Insira uma comida que você gosta, caso queira interromper o código, insira '.' como resposta:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cout << "#" << i + 1 << " ";
        std::getline(std::cin, memo);
        if (memo == ".") {
            break;
        } else {
            comidas[i] = memo;
        }
    }

    std::cout << "Suas comidas favoritas registradas foram:\n";
    for (int i = 0; !comidas[i].empty(); i++) {
        std::cout << "-=-" << comidas[i] << '\n';
    }

    return 0;
}
