#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    enum Humor {
        Feliz,
        Bravo,
        Ansioso
    };

    Humor humor = Feliz;

    switch (humor) {
    case Feliz:
        std::cout << "Felicidade é a emoção registrada." << std::endl;
        break;
    case Bravo:
        std::cout << "Raiva é a emoção registrada." << std::endl;
        break;
    case Ansioso:
        std::cout << "Ansiedade é a emoção registrada." << std::endl;
        break;
    default:
        std::cout << "Nenhuma emoção registrada." << std::endl;
        break;
    }
}
