#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    int chute;
    int tentativas = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "-=-=-=-=-=-=- Jogo do Chute! -=-=-=-=-=-=-\n";

    do {
        std::cout << "Insira um chute de 1 a 100: ";
        std::cin >> chute;
        tentativas ++;

        if (chute > 100 || chute < 0) {
            std::cout << " *" << tentativas << "ERRO. Número inserido inválido, tente novamente.\n";
        } else if (chute < num) {
            std::cout << " *" << tentativas << " O número é maior...\n";
        } else if (chute > num) {
            std::cout << " *" << tentativas << " O número é menor...\n";
        }

    } while (chute != num);

    std::cout << "-=-=-=-=-=-=- Você acertou! -=-=-=-=-=-=-\n Você tentou " << tentativas << " vezes";

    return 0;
}
