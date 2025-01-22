#include <iostream>
#include <windows.h>

void assarPizza() {
    std::cout << "Aqui está sua pizza\n";
}
void assarPizza(std::string sabor1) {
    std::cout << "Aqui está sua pizza de " << sabor1 << '\n';
}
void assarPizza(std::string sabor1, std::string sabor2) {
    std::cout << "Aqui está sua pizza de " << sabor1 << " e " << sabor2 << '\n';
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    assarPizza();
    assarPizza("pepperoni");
    assarPizza("frango com catupiri", "strogonoff");

    return 0;
}
