#include <iostream>
#include <windows.h>

void helloworld() {
    std::cout << "Olá Mundo!" << std::endl;
}

void msg(std::string msg) {
    std::cout << msg << std::endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    helloworld();
    msg("Olá meu amorzinho <3!");

    return 0;
}
