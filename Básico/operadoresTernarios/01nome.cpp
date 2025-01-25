#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;

    std::cout << "Qual é o seu nome? ";
    std::getline(std::cin, nome);

    nome.empty() ? std::cout << "Nenhum valor foi inserido.\n" : std::cout << "Olá, " << nome << '\n'; // operador ternário que verifica se o nome foi inserido, como um if else simplificado
    nome == "Stéfany" ? std::cout << "Oi meu amor, te amo muito! Tava com saudades\n" : std::cout << "Oi mano, como vai contigo?\n"; // operador ternário que verifica se o nome é Stéfany

    return 0;
}
