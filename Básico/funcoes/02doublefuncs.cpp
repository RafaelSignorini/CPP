#include <iostream>
#include <windows.h>
#include <cmath>

double quadrado(double compr) { // uma função do tipo 'double' retorna um valor do tipo 'double' ao invés de ser uma função genérica
    return pow(compr, 2); // A palavra chave return serve como uma resposta da função à outra quando chamada
}

double cubo(double compr) {
    return pow(compr, 3);
}

std::string stringConcat(std::string string1, std::string string2) { // Função que concatena duas strings, concatenar é juntar duas strings
    return string1 + " " + string2;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double compr = 5.0;
    
    std::string nome = "Rafael";
    std::string sobrenome = "Brito Signorini";

    double area = quadrado(compr);
    double vol = cubo(compr);
    std::string nomeCompl = stringConcat(nome, sobrenome);

    std::cout << "Área do terreno: " << area << "cm^2\n";
    std::cout << "Volume do objeto: " << vol << "cm^3\n";
    std::cout << "O nome de usuário registrado é " << nomeCompl << '\n';

    return 0;
}
