#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;

    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nome);

    if (nome.empty()) {
        std::cout << "Você não inseriu nada como seu nome\n";
    } else {
        std::cout << "Olá, " << nome << '\n';
    }

    nome.clear();

    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nome);

    if (nome.length() > 12) {
        std::cout << "Seu nome é muito grande, por favor diminua\n";
    } else {
        std::cout << "Olá, " << nome << '\n';
    }

    nome.append("@gmail.com");

    std::cout << "O endereço de email criado com seu nome é agora: " << nome << '\n';

    nome.clear();

    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nome);

    std::cout << nome.at(0) << '\n';
    std::cout << nome.at(1) << '\n';
    std::cout << nome.at(2) << '\n';
    std::cout << nome.at(3) << '\n';
    std::cout << nome.at(4) << '\n';
    std::cout << nome.at(5) << '\n';

    nome.insert(0, "ID: ");

    std::cout << "Sua identidade foi definida como: " << nome << '\n';

    nome.clear();

    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nome);

    std::cout << nome.find(' ') << '\n';

    nome.erase(0, 3);

    std::cout << nome << '\n';

    return 0;
}
