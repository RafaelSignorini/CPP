#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Rafael B Signorini";
    int idade = 18;
    char notas[5] = {'A', 'B', 'D', 'C', 'C'};
    bool desempregado = true;
    std::string trabalhadores[] = {"Stalin", "Lenin", "Kalinin"};

    std::cout << sizeof(nome) << " bytes\n";
    std::cout << sizeof(idade) << " bytes\n";
    std::cout << sizeof(notas) << " bytes\n";
    std::cout << sizeof(desempregado) << " bytes\n";
    
    std::cout << sizeof(notas)/sizeof(notas[0]) << " elementos\n";      // Estas são duas maneiras diferentes de se calcular o tamanho de uma variável com vários valores
    std::cout << sizeof(notas)/sizeof(char) << " elementos\n";          // Enquanto a de cima é mais confiável, essa é mais simples
    std::cout << sizeof(trabalhadores)/sizeof(std::string) << " elementos\n";

    return 0;
}
