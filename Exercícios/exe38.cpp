#include <iostream>
#include <windows.h>

void drawBoard(char *spaces) {
    std::cout << '\n';
    std::cout << "      |     |     \n";
    std::cout << "   " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << " \n"; 
    std::cout << "______|_____|_____\n";
    std::cout << "      |     |     \n";
    std::cout << "   " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << " \n"; 
    std::cout << "______|_____|_____\n";
    std::cout << "      |     |     \n";
    std::cout << "   " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << " \n"; 
    std::cout << "      |     |     \n";
}
void playerMove(char *spaces, char player) {
    int numero;
    do {
        std::cout << "Sua vez, escolha um número de 1 a 9: ";
        std::cin >> numero;
        numero--;
        if (spaces[numero] == ' ') {
            spaces[numero] = player;
            break;
        }
    } while (numero < 1 || numero > 9);
}
void computerMove(char *spaces, char computer) {
    int numero;
    srand(time(NULL));
    while (true) {
        numero = rand() % 9;
        if (spaces[numero] == ' ') {
            spaces[numero] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer) {
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]) {
        spaces[0] == player ? std::cout << "Você venceu!\n" : std::cout << "Você perdeu!\n";
    } else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) {
        spaces[3] == player ? std::cout << "Você venceu!\n" : std::cout << "Você perdeu!\n";
    } else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]) {
        spaces[6] == player ? std::cout << "Você venceu!\n" : std::cout << "Você perdeu!\n";
    } else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) {
        spaces[0] == player ? std::cout << "Você venceu!\n" : std::cout << "Você perdeu!\n";
    } else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) {
        spaces[1] == player ? std::cout << "Você venceu!\n" : std::cout << "Você perdeu!\n";
    } else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) {
        spaces[2] == player ? std::cout << "Você venceu!\n" : std::cout << "Você perdeu!\n";
    } else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) {
        spaces[0] == player ? std::cout << "Você venceu!\n" : std::cout << "Você perdeu!\n";
    } else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) {
        spaces[2] == player ? std::cout << "Você venceu!\n" : std::cout << "Você perdeu!\n";
    } else {
        return false;
    }
    return true;
}
bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "Empate!\n";
    return true;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } else if (checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } else if (checkTie(spaces)) {
            running = false;
            break;
        }
    }
    std::cout << "Fim de jogo!\n";
    return 0;
}
