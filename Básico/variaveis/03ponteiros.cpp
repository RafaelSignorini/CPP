#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Rafael";
    int idade = 18;
    std::string comidas[5] = {"Macarrão", "Pizza", "Frango", "Peixe", "Carne"};
    // O 'p' é utilizado pra nomea-lo um ponteiro. facilitando a compreensão do código, e o '*' o torna um ponteiro
    std::string *pNome = &nome;
    int *pIdade = &idade;
    // Com listas não se coloca o '&' para mostrar o endereço da lista pois a lista já é por padrão um endereço em si
    std::string *pComidas = comidas;

    std::cout << pNome << '\n'; // O resultado vai ser um endereço, como 0xc1aa5ffb80
    std::cout << *pNome << '\n'; // Agora se o código pedir pra que seja enviado o ponteiro com o '*', ele traz o valor da variável inicial

    std::cout << pIdade << '\n';
    std::cout << *pIdade << '\n';

    std::cout << pComidas << '\n';
    std::cout << *pComidas << '\n'; // Escrever o ponteiro de uma lista exibe o primeiro valor dessa lista

    return 0;
}
