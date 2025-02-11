#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string frase;
    int crc_count = 0;
    std::cout << "Insira uma frase:\n";
    std::getline(std::cin, frase);

    for (auto caractere : frase) {
        if (std::isdigit(static_cast<unsigned char>(caractere))) { // Converte caractere para unsigned char para evitar comportamento indefinido
            crc_count++;
        }
    }
    std::cout << "A frase inserida contém " << crc_count << " números registrados.";
    return 0;
}
