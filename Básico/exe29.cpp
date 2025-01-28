#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    std::string comidas[5];
    int tamanho = sizeof(comidas)/sizeof(std::string);
    std::string memo; // essa variável serve como "armazenamento temporário" para as comidas que serão inseridas

    std::cout << "Insira uma comida que você gosta, caso queira interromper o código, insira '.' como resposta:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cout << "#" << i + 1 << " ";
        std::getline(std::cin, memo);
        if (memo == ".") { // se o usuário inserir '.', o código é interrompido, encurtando a lista de comidas
            break;
        } else {
            comidas[i] = memo;
        }
    }

    std::cout << "Suas comidas favoritas registradas foram:\n";
    for (int i = 0; !comidas[i].empty(); i++) { // o loop é interrompido quando a string na posição i estiver vazia, no caso o momento que o usuário inserir '.' como resposta
        std::cout << "-=-" << comidas[i] << '\n';
    } // esse é um método efiiciente para criar listas de tamanho variável, economizando memória, dando o nome desse método de "lista dinâmica", ou "memória dinâmica"

    return 0;
}
