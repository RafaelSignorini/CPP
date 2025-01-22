#include <iostream>
#include <windows.h>

int main() {
    using std::cout;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int *ponteiro = nullptr;
    int x = 987;

    cout << ponteiro;   // O ponteiro atualmente tem o valor 0

    ponteiro = &x;      // O ponteiro agora aponta para o endereço de x

    if (ponteiro == nullptr) {
        cout << "O ponteiro não foi inicializado\n";
    } else {
        cout << "O ponteiro foi inicializado\n";
    }
    return 0;
}
