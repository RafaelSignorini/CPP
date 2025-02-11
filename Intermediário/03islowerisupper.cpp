#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char msg[] {"C++ é uma Linguagem de Programação muito boa"};
    int maiusculas{};
    int minusculas{};
    
    std::cout << "Frase original: " << msg << '\n';
    for (auto caractere : msg) {
        if (std::islower(caractere)) { // O único problema com esse código é que ele não recebe letras especiais (é, ç, ã) como minúsculas
            minusculas++;
        } else if (std::isupper(caractere)) {
            maiusculas++;
        }
    }
    std::cout << "O total de maiúsculas e minúsculas, respectivamente, é: " << maiusculas << ", e " << minusculas << '\n';
    return 0;
}
