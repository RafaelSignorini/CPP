#include <iostream> // iostream é uma biblioteca de entrada e saída, #include é um preprocessador que inclui uma biblioteca ao programa

int main() { // int é o tipo de dado que a função main retorna, main é a função principal do programa
    std::cout << "Olá Mundo!\n"; // std::cout é um objeto que representa a saída padrão, << é um operador de inserção, "Olá Mundo!\n" é a string que será impressa
    std::cout.print("Olá Mundo!\n").print(std::endl); // std::endl é um manipulador de saída que insere uma nova linha e limpa o buffer de saída, porém é mais simples apenas usar '\n'
    std::cin.get(); // std::cin é um objeto que representa a entrada padrão, como um input, .get() é um método que lê um caractere da entrada padrão

    return 0; // return 0 é uma instrução que indica que o programa foi executado com sucesso, caso dê algum erro, retornará -1
}
