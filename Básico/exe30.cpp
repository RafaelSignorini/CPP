#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int notas[] = {16, 97, 52, 66};

    for (int nota : notas) {
        std::cout << nota << '\n';
    }
    return 0;
}
