#include <iostream>
#include <windows.h>
#include <vector> // vector é uma biblioteca de arrays dinâmicos; ln 12 & 13

typedef std::string text_t; // text_t é um alias para std::string, tal qual num_t é um alias para int na linha abaixo, vindos da biblioteca vector
using num_t = int;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    text_t nome = "Rafael"; // text_t é um alias para std::string, nome é uma variável do tipo text_t que armazena "Rafael"
    num_t idade = 18; // num_t é um alias para int, idade é uma variável do tipo num_t que armazena 18

    std::cout << "Olá " << nome << ", sua idade registrada é " << idade << " anos.\n";

    return 0;
}
