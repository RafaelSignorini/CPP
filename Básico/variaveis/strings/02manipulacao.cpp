#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;

    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nome);

    if (nome.length() > 12) { // verifica se o nome inserido tem mais de 12 caracteres, considerando espaços e caracteres especiais
        std::cout << "Seu nome é muito grande, por favor diminua\n";
    } else {
        std::cout << "Olá, " << nome << '\n';
    }

    nome.append("@gmail.com"); // cria um endereço de email com o nome inserido

    std::cout << "O endereço de email criado com seu nome é agora: " << nome << '\n';

    nome.clear(); // limpa a string

    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nome);

    std::cout << nome.at(0) << '\n'; // imprime o primeiro caractere da string
    std::cout << nome.at(1) << '\n'; // imprime o segundo caractere da string
    std::cout << nome.at(2) << '\n'; // imprime o terceiro caractere da string
    std::cout << nome.at(3) << '\n'; // imprime o quarto caractere da string
    std::cout << nome.at(4) << '\n'; // imprime o quinto caractere da string
    std::cout << nome.at(5) << '\n'; // imprime o sexto caractere da string

    nome.insert(0, "ID: "); // insere "ID: " no início da string, a posição é definida pelo primeiro argumento, neste caso '0', empurrando todos os outros caracteres para a direita

    std::cout << "Sua identidade foi definida como: " << nome << '\n';

    nome.clear();

    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nome);

    std::cout << nome.find(' ') << '\n'; // encontra o primeiro espaço em branco na string

    nome.erase(0, 3); // apaga os 3 primeiros caracteres da string

    std::cout << nome << '\n';

    return 0;
}
