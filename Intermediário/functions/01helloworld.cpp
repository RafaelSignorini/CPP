#include <iostream>
#include <windows.h>
#include <vector>

void msg(std::string msg) {
    std::cout << msg << std::endl;
}

void helloworld() {
    msg("Olá meu amor <3!");
}

std::vector<int> gerarNumerosAleatorios(int qnt) {
    std::vector<int> randomNumbers; // essa variável é local

    std::cout << "Números gerados aleatoriamente:" << std::endl;
    for (int i = 0; i < 12; i++) {
        int number = std::rand() % 100 - 50;
        randomNumbers.push_back(number);
        std::cout << number << " ";
    }
    return randomNumbers;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    helloworld();

    std::vector<int> randomNumbers = gerarNumerosAleatorios(6); // essa variável é global

    return 0;
}
