#include <iostream>
#include <windows.h>

int getDigit(const int numero) {
    //      18 % 10 = 8;  18 / 10 = 1, 1 % 10 = 1       apenas um exemplo
    return numero % 10 + (numero / 10 % 10);
}

int somarPares(const std::string numCartao) {
    int soma = 0;   // recebe um dígito a cada 2 a partir do penúltimo indo da direita para a esquerda
    for (int i = numCartao.size() - 2; i >= 0; i -= 2) {
        //              Primeiro é necessário subtrair o valor do char 0 pra que o código não o multiplique por 2 e gere um erro
        soma += getDigit((numCartao[i] - '0') * 2);
    }
    return soma;
}

int somarImpares(const std::string numCartao) {
    int soma = 0;
    for (int i = numCartao.size() - 1; i >= 0; i -= 2) {
        soma += numCartao[i] - '0';
    }
    return soma;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string numCartao;
    int resultado = 0;
    bool valido = false;

    do {
        std::cout << "Insira um número de cartão: ";
        std::cin >> numCartao;

        resultado = somarImpares(numCartao) + somarPares(numCartao);

        if (resultado % 10 == 0) {
            std::cout << "O número do cartão inserido é válido.\n";
            valido = true; // 4666145416516565 foi um chute e deu certo de primeira
        } else {
            std::cout << "O número do cartão inserido é inválido.\n";
        }
    } while (valido != true);
    return 0;
}
