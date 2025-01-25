#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for (int i = 1; i <= 10; i++) { // crescente
        std::cout << i << '\n';
    }

    std::cout << "feliz ano novo\n";
    
    for (int i = 10; i >= 1; i--) { // decrescente
        std::cout << i << '\n';
    }

    std::cout << "feliz ano novo\n";
    
    return 0;
}
