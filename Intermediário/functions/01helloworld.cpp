#include <iostream>
#include <windows.h>

void msg(std::string msg) {
    std::cout << msg << std::endl;
}

void helloworld() {
    msg("Olá meu amor <3!");
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    helloworld();

    return 0;
}
