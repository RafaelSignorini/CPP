#include <iostream> // o código abaixo é um jogo da velha
#include <windows.h>

void drawBoard(char *spaces) { // essa função desenha o tabuleiro, recebendo um ponteiro de char com espaços vazios como parâmetro
    std::cout << std::endl; // quebra de linha simples
    std::cout << "      |     |     \n"; // desenho do tabuleiro
    std::cout << "   " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << " \n"; // essa linha não só desenha o tabuleiro, mas seus espaços também, sejam eles vazios ou preenchidos
    std::cout << "______|_____|_____\n";
    std::cout << "      |     |     \n";
    std::cout << "   " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << " \n"; 
    std::cout << "______|_____|_____\n";
    std::cout << "      |     |     \n";
    std::cout << "   " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << " \n"; 
    std::cout << "      |     |     \n";
}

void playerMove(char *spaces, char player) { // essa função verifica os movimentos feitos pelo jogador após seus inputs
    int numero; // variável que armazena o número escolhido pelo jogador para preencher o espaço vazio escolhido
    std::cout << "Sua vez, escolha um número de 1 a 9: ";
    do {
        std::cin >> numero;
        numero--; // decrementa o número escolhido pelo jogador para que ele possa ser usado como índice do array, se não haveria um erro de lógica
        if (spaces[numero] == ' ') {
            spaces[numero] = player;
            break;
        } else {
            continue;
            std::cout << "Essa posição já foi escolhida, tente novamente: ";
        }
    } while (numero < 1 || numero > 9); // enquanto o número escolhido pelo jogador for menor que 1 ou maior que 9, o loop continua, proibindo respostas impossíveis de serem implementadas
}

void computerMove(char *spaces, char computer) { // essa função é responsável por fazer o movimento do computador, escolhendo um espaço vazio aleatório para preencher
    int numero;
    srand(time(NULL)); // função que gera um número aleatório
    while (true) {
        numero = rand() % 9;
        if (spaces[numero] == ' ') { // se o espaço escolhido pelo computador estiver vazio, ele preenche com o caractere do computador
            spaces[numero] = computer; // se não, ele escolhe outro espaço
            break; // e o loop continua até que um espaço vazio seja encontrado
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) { // essa função verifica se há um vencedor, seja o jogador ou o computador
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
        return false; // se nenhuma das condições acima for satisfeita, a função retorna falso, gerando um empate na função 'checkTie'
    }
    return true; // se alguma das condições acima for satisfeita, a função retorna verdadeiro, gerando um vencedor
} // a função acima verifica todas as possibilidades de vitória, seja na horizontal, vertical ou diagonal, e imprime o vencedor
// não há forma mais eficiente de se fazer isso, pois é necessário verificar todas as possibilidades manualmente enquanto o computador não consegue fazer isso sozinho baseado em "noção de jogo"

bool checkTie(char *spaces) { // essa função verifica se houve um empate
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') { // se houver um espaço vazio, o jogo continua
            return false;
        }
    }
    std::cout << "Empate!\n"; // se não houver espaços vazios, o jogo acaba em empate
    return true;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; // a array de char que representa os espaços vazios do tabuleiro
    char player = 'X'; // o caractere do jogador
    char computer = 'O'; // o caractere do computador
    bool running = true; // variável que controla o loop do jogo

    drawBoard(spaces); // desenha o tabuleiro com os espaços vazios

    while (running) { // enquanto o jogo estiver rodando, o loop continua recebendo informações tanto do computador quanto do jogador
        playerMove(spaces, player); // função que recebe o input do jogador
        drawBoard(spaces); // desenha o tabuleiro com o input do jogador, como um 'refresh' do tabuleiro
        if (checkWinner(spaces, player, computer)) { // verifica se o jogador venceu
            running = false; // se sim, o jogo acaba
            break;
        } else if (checkTie(spaces)) { // verifica se houve um empate
            running = false; // se sim, o jogo acaba
            break;
        }

        computerMove(spaces, computer); // função que faz o movimento do computador
        drawBoard(spaces); // desenha o tabuleiro, agora com o input do computador
        if (checkWinner(spaces, player, computer)) { // verifica se o computador venceu
            running = false; // se sim, o jogo acaba
            break;
        } else if (checkTie(spaces)) { // verifica se houve um empate
            running = false; // se sim, o jogo acaba
            break;
        }
    }
    std::cout << "Fim de jogo!\n"; // mensagem de fim de jogo
    return 0;
}
