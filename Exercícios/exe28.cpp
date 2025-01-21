#include <iostream>
#include <windows.h>

int localizarArray(int array[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int localizarComida(std::string array[], int tamanho, std::string elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(nums)/sizeof(int);
    int index;
    int num;

    std::cout << "Insira o elemento a ser encontrado: ";
    std::cin >> num;

    index = localizarArray(nums, tamanho, num);

    if (index != -1) {
        std::cout << num << " está no índex " << index << '\n';
    } else {
        std::cout << num << " não está na lista.\n";
    }

    std::string comidas[] = {"Pizza", "Hamburguer", "Cachorro-Quente"};
    int tamanho2 = sizeof(comidas)/sizeof(std::string);
    int index2;
    std::string minhaComida;

    std::cout << "Insira a comida que deseja: ";
    std::cin >> minhaComida;

    index2 = localizarComida(comidas, tamanho2, minhaComida);

    if (index2 != -1) {
        std::cout << minhaComida << " está no índex " << index2 << '\n';
    } else {
        std::cout << minhaComida << " não está na lista.\n";
    }

    return 0;
}
