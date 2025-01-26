#include <iostream>
#include <windows.h>

void assarPizza() { // as três funções com mesmo nome são funções sobrecarregadas, ou 'ouverloaded', dessa forma, o compilador escolhe qual função chamar baseado nos argumentos passados
    std::cout << "Aqui está sua pizza\n"; // contendo 0 argumentos, o compilador chama essa função
}
void assarPizza(std::string sabor1) { // enquanto essa função é chamada quando é passado 1 argumento
    std::cout << "Aqui está sua pizza de " << sabor1 << '\n';
}
void assarPizza(std::string sabor1, std::string sabor2) { // e essa função é chamada quando são passados 2 argumentos
    std::cout << "Aqui está sua pizza de " << sabor1 << " e " << sabor2 << '\n';
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    assarPizza(); // aqui é chamada a função sem argumentos por não conter argumentos
    assarPizza("pepperoni"); // aqui é chamada a função com 1 argumento
    assarPizza("frango com catupiri", "strogonoff"); // e aqui é chamada a função com 2 argumentos
    /* Funções sobrecarregadas são úteis para quando você quer que uma função faça a mesma coisa, 
    mas com diferentes argumentos, sem precisar criar uma função para cada combinação de argumentos
    */
    return 0;
}
