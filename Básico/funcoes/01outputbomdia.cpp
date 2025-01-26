#include <iostream>
#include <windows.h>

void bomdia(std::string nome, int idade) { // o que fica dentro do parênteses é o parâmetro para receber as variáveis de fora da função
    std::cout << "Bom dia, " << nome << '\n'; // a função declara a variável como se fosse um output de texto comum na main(), porém
    std::cout << "Sua idade registrada é " << idade << " anos\n"; // tendo que especificá-la nos parâmetros da função
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Rafael";
    int idade = 18;

    bomdia(nome, idade); // a função recebe a variável 'nome' para ser usada da maneira especificada pela função que a chama

    return 0;
}
