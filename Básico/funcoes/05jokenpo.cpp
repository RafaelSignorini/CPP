#include <iostream>
#include <windows.h>
#include <ctime>

int usuario() { // esta função serve principalmente para exibir as opções de escolha para o usuário e receber a escolha dele
    int jogador;
    std::cout << "Pedra, Papel e Tesoura em C++\n";
    do { // foi escolhido um dowhile para que o código seja executado pelo menos uma vez
        std::cout << "Escolha sua jogada:\n1 [ pedra ]\n2 [ papel ]\n3 [ tesoura ]\n";
        std::cin >> jogador;
    } while (jogador != 1 && jogador != 2 && jogador != 3); // o loop é executado até que o usuário escolha um número entre 1 e 3
    return jogador; // a escolha do usuário é retornada para ser usada na função vencedor()
}

std::string computador() { // o computador escolhe aleatoriamente uma opção
    srand(time(0));
    int num = rand() % 3 + 1; // a opção escolhida é limitada a números entre 0 e 2, então é adicionado 1 para que seja entre 1 e 3, dessa forma o switch case pode ser usado

    switch (num) {
        case 1: return "Pedra"; // os casos são convertidos em strings para que possam ser comparados com a escolha do usuário na função vencedor() e então exibidas no terminal
        case 2: return "Papel"; // em todos estes casos a resposta é retornada para ser usada na função main() após ser comparada na função vencedor()
        case 3: return "Tesoura";
    }
    return "Erro"; // caso o número aleatório não seja entre 1 e 3, a função retornará "Erro"
}

void escolha(int escolha) { // a escolha do usuário é recebida para ser convertida em strings e depois comparada com a do computador
    switch (escolha) {
        case 1: std::cout << "Pedra\n";
        break;
        case 2: std::cout << "Papel\n";
        break;
        case 3: std::cout << "Tesoura\n";
        break;
        default: std::cout << "ERRO.\n"; // o default fica sem break pois o erro é o último caso e dessa forma ele repete a pergunta até que seja inserida uma resposta válida
    }
}

void vencedor(int jogador, const std::string& escolhaComputador) { // as escolhas do usuário e do computador são comparadas para determinar o vencedor
    if ( // todas as possibilidades de vitória do usuário são listadas
        (jogador == 1 && escolhaComputador == "Tesoura") ||
        (jogador == 2 && escolhaComputador == "Pedra") ||
        (jogador == 3 && escolhaComputador == "Papel")
    ) {
        std::cout << "O Usuário venceu\n";
    } else if ( // todas as possibilidades de vitória do computador são listadas
        (jogador == 1 && escolhaComputador == "Papel") ||
        (jogador == 2 && escolhaComputador == "Tesoura") ||
        (jogador == 3 && escolhaComputador == "Pedra")
    ) {
        std::cout << "O computador venceu\n";
    } else { // caso nenhuma das opções acima seja verdadeira, o jogo é considerado um empate
        std::cout << "Empate\n";
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int jogador;
    std::string escolhaComputador;

    jogador = usuario(); // a escolha do usuário é recebida através do terminal
    std::cout << "Sua escolha foi ";
    escolha(jogador); // e então a escolha do usuário é convertida em string e exibida no terminal após ser processada pela função escolha()

    escolhaComputador = computador(); // a escolha do computador é recebida através da função computador()
    std::cout << "A escolha do computador foi " << escolhaComputador << '\n';

    vencedor(jogador, escolhaComputador); // e por fim o programa exibe os resultados do jogo através da função vencedor()

    return 0;
}
