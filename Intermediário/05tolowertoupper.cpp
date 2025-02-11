#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string user_input;
    std::cout << "Insira uma frase para ela ser impressa em maiúsculas e minúsculas:\n";
    std::getline(std::cin, user_input);
    char modificado[std::size(user_input)];

    for (int i = 0; i < std::size(user_input); i++) { // Esse laço for deixa todas as letras da string original em maiúsculas
        modificado[i] = std::toupper(user_input[i]);
    }
    std::cout << "Aqui está o texto em maiúsculas: " << modificado << '\n';
    for (int i = 0; i < std::size(user_input); i++) { // Esse laço for deixa todas as letras da string original em maiúsculas
        modificado[i] = std::tolower(user_input[i]);
    }
    std::cout << "Aqui está o texto em minúsculas: " << modificado << '\n';
    return 0;
}
