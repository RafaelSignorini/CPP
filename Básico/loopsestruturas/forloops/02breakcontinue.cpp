#include <iostream>
#include <windows.h>

void separacao() {
    for (int i = 0; i < 10; i++) {
        std::cout << "-=-";
    }
    std::cout << '\n';
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            break; // Encerra o loop
        }
        std::cout << i << '\n';
    }

    separacao();

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue; // Retorna ao código anterior, como se ignorasse ou pulasse o código que sucederia
        }
        std::cout << i << '\n'; // Linha de código que o continue pula neste caso
    }
    
    return 0;
}
