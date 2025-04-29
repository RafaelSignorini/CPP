#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>

template<typename T> // o template serve pra criar uma variável sem tipo até que ela seja usada, apenas então definindo seu tipo baseado no valor recebido
void printMsg(T msg, bool newLine) { // isso faz com que não seja necessário criar funções sobrecarregadas
    std::cout << msg;
    if (newLine) {
        std::cout << std::endl;
    }
}

void printHelloWorld() {
    printMsg("Olá Mundo!", true);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printMsg("bom dia viado", false);
    printMsg("bom dia viado", true);

    return 0;
}
