#include <iostream> // iostream é uma biblioteca de entrada e saída, #include é um preprocessador que inclui uma biblioteca ao programa
#include <windows.h> // windows.h é uma biblioteca que contém funções para manipular o sistema operacional Windows
#include <vector> // vector é uma biblioteca de arrays dinâmicos *12, *13
#include <ctime> // ctime é uma biblioteca que contém funções para manipular o tempo
#include <cmath> // cmath é uma biblioteca que contém funções matemáticas

typedef std::string text_t;
using num_t = int;

int main() {
    SetConsoleOutputCP(CP_UTF8); // estas linha formata os caracteres especiais para UTF-8 para que possam ser impressos corretamente no console
    SetConsoleCP(CP_UTF8);

    std::cout << "Olá Mundo!\n"; // std::cout é um objeto que representa a saída padrão, << é um operador de inserção, "Olá Mundo!\n" é a string que será impressa
    std::cout.print("Olá Mundo!\n").print(std::endl); // std::endl é um manipulador de saída que insere uma nova linha e limpa o buffer de saída, porém é mais simples apenas usar '\n'
    std::cin.get(); // std::cin é um objeto que representa a entrada padrão, como um input, .get() é um método que lê um caractere da entrada padrão

    text_t nome = "Rafael"; // text_t é um alias para std::string, nome é uma variável do tipo text_t que armazena "Rafael"
    num_t idade = 18; // num_t é um alias para int, idade é uma variável do tipo num_t que armazena 18

    srand(time(0)); // srand é uma função que inicializa o gerador de números aleatórios, time(0) é uma função que retorna o tempo atual em segundos
    int numAl = rand() % 5 + 1; // rand é uma função que retorna um número aleatório, % 5 + 1 é uma operação que retorna um número aleatório entre 1 e 5

    switch (numAl) { // switch é uma instrução que executa um bloco de código dependendo do valor de uma variável
        case 1: std::cout << "Você ganhou um adesivo!"; // case é uma instrução que executa um bloco de código se o valor da variável for igual ao valor do case
        break; // break é uma instrução que interrompe a execução do switch
        case 2: std::cout << "Você ganhou uma camisa!";
        break;
        case 3: std::cout << "Você ganhou um almoço!";
        break;
        case 4: std::cout << "Você ganhou uma espada!";
        break;
        case 5: std::cout << "Você ganhou uma melhoria!";
        break;
    }

    int base = 5, expoente = 3; // base é uma variável que armazena 5, expoente é uma variável que armazena 3
    int potencia = pow(base, expoente); // pow é uma função que retorna a potência de um número, potencia é uma variável que armazena a potência de base elevado a expoente

    return 0; // return 0 é uma instrução que indica que o programa foi executado com sucesso, caso dê algum erro, retornará -1
}
