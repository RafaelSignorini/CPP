#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string user_input;
    int crc_count, num_count = 0;
    std::cout << "Insira dígitos aleatórios do teclado:\n";
    std::getline(std::cin, user_input);

    for (auto caractere : user_input) {
        if (std::isdigit(static_cast<unsigned char>(caractere))) { // Converte caractere para unsigned char para evitar comportamento indefinido
            num_count++;
        } else if (std::isalpha(caractere)) {
            crc_count++;
        }
    }
    std::cout << "Dos valores inseridos, " << num_count << " são numéricos ";
    std::cout << "enquanto " << crc_count << " são alfabéticos";
    return 0;
}
