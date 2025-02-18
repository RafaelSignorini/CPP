#include <iostream>
#include <windows.h>
#include "cilindro.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Cilindro cilindro1(2.5, 6.8);
    std::cout << "O volume do cilindro é " << cilindro1.volume() << std::endl;

    return 0;
}
