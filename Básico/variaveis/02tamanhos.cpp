#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Rafael B Signorini"; // cada uma dessas variáveis tem um tamanho diferente, a string tem 18 bytes
    int idade = 18; // a int tem 4 bytes
    char notas[5] = {'A', 'B', 'D', 'C', 'C'}; // o array de char tem 5 bytes
    bool desempregado = true; // o bool tem 1 byte
    std::string trabalhadores[] = {"Stalin", "Lenin", "Kalinin"}; // o array de strings tem 24 bytes

    std::cout << sizeof(nome) << " bytes\n"; // cada linha exibe o tamanho de cada variável em bytes
    std::cout << sizeof(idade) << " bytes\n";
    std::cout << sizeof(notas) << " bytes\n";
    std::cout << sizeof(desempregado) << " bytes\n";
    
    std::cout << sizeof(notas)/sizeof(notas[0]) << " elementos\n"; // estas são duas maneiras diferentes de se calcular o tamanho de uma variável com vários valores
    std::cout << sizeof(notas)/sizeof(char) << " elementos\n"; // enquanto a de cima é mais confiável, essa é mais simples
    std::cout << sizeof(trabalhadores)/sizeof(std::string) << " elementos\n";

    return 0;
}
