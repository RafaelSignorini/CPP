#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string carros[] = {"Corvete", "Mustang", "Kombi"}; // uma lista é criada com colchetes após o nome da variável, e seus valores são declarados dentro de chaves e são separados por vírgulas

    std::cout << carros[0] << '\n';
    std::cout << carros[1] << '\n';
    std::cout << carros[2] << '\n';

    carros[0] = "Zafira"; // substitue ou reatribui o valor na primeira posição da lista

    std::cout << carros[0] << '\n';

    double precos[3]; // uma lista pode ser criada em uma linha e seus valores atribuídos em outra, porém, por esse método, é necessário declarar o limite de espaços nas colchetes

    precos[0] = 549.41; // e aqui se atribui algum valor a um espaço específico da lista

    std::cout << "Este produto custa R$" << precos[0];

    return 0;
}
