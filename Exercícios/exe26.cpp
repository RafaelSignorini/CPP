#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nomes[] = {"Rafael", "Stéfany", "Lilith", "Zara"};
    int notas[] = {6, 3, 9, 6, 8};

    for (int i = 0; i < sizeof(nomes)/sizeof(std::string); i++) {
        std::cout << nomes[i] << '\n';
    }

    for (int i = 0; i < sizeof(notas)/sizeof(int); i++) {
        std::cout << notas[i] << '\n';
    }
    
    return 0;
}
