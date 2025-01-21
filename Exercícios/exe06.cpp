#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;
    int idade;

    std::cout << "Qual é o seu primeiro nome? ";
    std::cin >> nome;               // recebe apenas a primeira palavra, cortando todo o resto após um espaço

    std::cout << "Olá, " << nome << ", poderia por favor me dizer seu nome completo? ";
    std::getline(std::cin, nome);   // recebe tudo dentro da mesma linha até seu fim, mais útil, versátil e geral que o método anterior

    std::cout << "Qual é a sua idade? ";
    std::cin >> idade;

    std::cout << "Olá, " << nome << ", você tem " << idade << " anos de vida.\n";
    return 0;
}
