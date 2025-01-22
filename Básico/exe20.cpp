#include <iostream>
#include <windows.h>

double quadrado(double compr) {
    return compr * compr;       // A palavra chave return serve como uma resposta da função à outra quando chamada
}

double cubo(double compr) {
    return compr * compr * compr;
}

std::string stringConcat(std::string string1, std::string string2) {
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
