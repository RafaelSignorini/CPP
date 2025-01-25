#include <iostream> // apenas utilizada de exemplo para mostrar a diferença entre o código anterior e este com relação ao preprocessador abaixo
#include <windows.h> // windows.h é uma biblioteca que contém funções para manipular o sistema operacional Windows, será sempre usada a partir de agora

int main() {
    SetConsoleOutputCP(CP_UTF8); // estas linha formata os caracteres especiais para UTF-8 para que possam ser impressos corretamente no console
    SetConsoleCP(CP_UTF8);

    std::cout << "Bom dia, como você está?\n"; // note que neste código 'ê' e 'á' nas últimas duas palavras são impressos corretamente, diferente do arquivo anterior

    return 0;
}
