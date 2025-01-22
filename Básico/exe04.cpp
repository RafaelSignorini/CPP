#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    // Variáveis numéricas (int, double)
    int x = 5;
    int y = 6;
    int soma = x + y;

    std::cout << x << " + " << y << " = " << soma << '\n';
    double preco = 9.99;
    double salario = 1412.57;
    double conta = salario - preco;

    std::cout << salario << " reais - " << preco << " reais = " << conta << " reais.\n";

    // -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    // Variáveis de um único caracter (char)
    char nota = 'A';
    // char inicial = 'Ba';    // Em casos como este, o console escreverá apenas o último dígito
    char inicial = 'a';

    std::cout << nota << inicial << '\n';

    // -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    // Variável de valores alternativos (bool)
    bool aberto = false;
    bool acordado = true;
    bool aVenda = true;

    // -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    // Variáveis de texto (strings)
    std::string nome = "Rafael";
    std::string comidaFav = "macarrão";
    std::string idade = "17 anos, 11 meses e 29 dias";

    std::cout << "Olá, meu nome é " << nome << ", tenho " << idade << ", minha comida favorita é " << comidaFav << '\n';

    return 0;
}
