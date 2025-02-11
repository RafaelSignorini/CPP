#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char frase{};
    int crc_count = 0;
    std::cout << "Insira uma frase:\n";
    std::cin >> frase;

    for (auto caractere : frase) {
        if (std::isdigit(caractere)) {
            crc_count++;
        }
    }
    std::cout << "A frase inserida contém " << crc_count << " dígitos registrados.";
    return 0;
}
