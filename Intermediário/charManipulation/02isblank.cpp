#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string user_msg;
    int blank_count;
    std::cout << "Insira uma frase para que o programa verifique em quais posições há um espaço em branco:\n";
    std::getline(std::cin, user_msg);
    for (int i = 0; i < std::size(user_msg); i++) {
        if (std::isblank(user_msg[i])) {
            std::cout << "Um espaço em branco foi encontrado na " << i << "ª posição.\n";
            blank_count++;
        }
    }
    std::cout << "Um total de " << blank_count << " espaços em branco foram encontrados na frase.\n";
    return 0;
}
