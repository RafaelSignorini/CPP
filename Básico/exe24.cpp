#include <iostream>
#include <windows.h>
#include <ctime>

int usuario() {
    int jogador;
    std::cout << "Pedra, Papel e Tesoura em C++\n";
    do {
        std::cout << "Escolha sua jogada:\n1 [ pedra ]\n2 [ papel ]\n3 [ tesoura ]\n";
        std::cin >> jogador;
    } while (jogador != 1 && jogador != 2 && jogador != 3);
    return jogador;
}

std::string computador() {
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1: return "Pedra";
        case 2: return "Papel";
        case 3: return "Tesoura";
    }

    return "Erro";
}

void escolha(int escolha) {
    switch (escolha) {
        case 1: std::cout << "Pedra\n";
        break;
        case 2: std::cout << "Papel\n";
        break;
        case 3: std::cout << "Tesoura\n";
        break;
        default: std::cout << "ERRO.\n";
        break;
    }
}

void vencedor(int jogador, const std::string& escolhaComputador) {
    if (
        (jogador == 1 && escolhaComputador == "Tesoura") ||
        (jogador == 2 && escolhaComputador == "Pedra") ||
        (jogador == 3 && escolhaComputador == "Papel")
    ) {
        std::cout << "O Usuário venceu\n";
    } else if (
        (jogador == 1 && escolhaComputador == "Papel") ||
        (jogador == 2 && escolhaComputador == "Tesoura") ||
        (jogador == 3 && escolhaComputador == "Pedra")
    ) {
        std::cout << "O computador venceu\n";
    } else {
        std::cout << "Empate\n";
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int jogador;
    std::string escolhaComputador;

    jogador = usuario();
    std::cout << "Sua escolha foi ";
    escolha(jogador);

    escolhaComputador = computador();
    std::cout << "A escolha do computador foi " << escolhaComputador << '\n';

    vencedor(jogador, escolhaComputador);

    return 0;
}
