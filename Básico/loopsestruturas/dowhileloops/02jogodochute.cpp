#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    int chute;
    int tentativas = 0;

    srand(time(NULL)); // 'NULL' é um ponteiro nulo, sendo o valor de NULL equivalente a 0
    num = (rand() % 100) + 1;

    std::cout << "-=-=-=-=-=-=- Jogo do Chute! -=-=-=-=-=-=-\n";

    do { // nesse laço, o usuário tenta adivinhar o número gerado aleatoriamente
        std::cout << "Insira um chute de 1 a 100: ";
        std::cin >> chute;
        tentativas ++; // a cada vez que o laço se repete, uma tentativa é contabilizada, aumentando o contador no final do jogo, a cada chute, o número da tentativa é exibido

        if (chute > 100 || chute < 0) {
            std::cout << " *" << tentativas << "ERRO. Número inserido inválido, tente novamente.\n";
        } else if (chute < num) {
            std::cout << " *" << tentativas << " O número é maior...\n"; // a cada tentativa, o programa informa se o número é maior ou menor que o chute
        } else if (chute > num) {
            std::cout << " *" << tentativas << " O número é menor...\n";
        }

    } while (chute != num);

    std::cout << "-=-=-=-=-=-=- Você acertou! -=-=-=-=-=-=-\n Você tentou " << tentativas << " vezes";

    return 0;
}
