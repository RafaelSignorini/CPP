#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade;

    std::cout << "Insira sua idade: ";
    std::cin >> idade;

    if (idade < 0 || idade > 100) { // se a idade for menor que 0 ou maior que 100, imprime uma mensagem de erro, eliminando respostas impossíveis
        std::cout << "ERRO. Idade inserida inválida.";
    } else if (idade >= 18) { // verifica se a idade é maior ou igual a 18, se sim, imprime uma mensagem de boas-vindas
        std::cout << "Seja bem vinde, Usuário.";
    } else { // se não, imprime uma mensagem de que a idade é insuficiente para acessar o programa, assumindo que a única outra possibilidade é a idade ser menor que 18
        std::cout << "Você não atinge a idade mínima para acessar este programa.";
    }
    return 0;
}
