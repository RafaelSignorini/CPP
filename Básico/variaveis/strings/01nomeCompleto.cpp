#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;
    std::string nomeC;
    int idade;

    std::cout << "Qual é o seu primeiro nome? ";
    std::cin >> nome; // recebe apenas a primeira palavra, cortando todo o resto após um espaço

    std::cin.ignore(); // ignora o caractere de nova linha deixado no buffer pelo método anterior

    std::cout << "Olá " << nome << ", poderia por favor me dizer seu nome completo?\n";
    std::getline(std::cin, nomeC); // recebe tudo dentro da mesma linha até seu fim, mais útil, versátil e geral que o método anterior

    std::cout << "Seu nome completo é " << nomeC;
    return 0;
}
