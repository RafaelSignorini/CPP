#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const double PI = 3.14159;  // torna o valor de uma variável imutável
    double radio = 10;
    double circum = 2 * PI * radio;
    
    const int VELOCIDADE_LUZ = 299792458;

    std::cout << "O total da circumferência é " << circum << '\n';
    std::cout << "A velocidade da luz é equivalente a " << VELOCIDADE_LUZ << " km/h\n";

    return 0;
}
