#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string user_input;
    int crc_count = 0;
    std::cout << "Insira uma user_input:\n";
    std::getline(std::cin, user_input);

    for (auto caractere : user_input) {
        if (std::isdigit(static_cast<unsigned char>(caractere))) { // Converte caractere para unsigned char para evitar comportamento indefinido
            crc_count++;
        }
    }
    std::cout << "Dos valores inseridos, " << crc_count << " são numéricos.";
    return 0;
}
