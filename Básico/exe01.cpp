#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Olá Mundo!" << std::endl;
    std::cout << "Até que eu gostei dessa linguagem." << std::endl;         // std significa standard, cout significa console out, << define que é um output
    std::cout << "Vou persistir no C++, acabei gostando da diversidade\n";  // std::endl significa end line, equivalente ao '\n' abaixo
}
