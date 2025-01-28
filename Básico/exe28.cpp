#include <iostream>
#include <windows.h>

int localizarArray(int array[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            return i; // se o elemento for encontrado, a posição dele na lista é retornada
        }
    }
    return -1; // se o elemento não for encontrado, -1 é retornado
}

int localizarComida(std::string array[], int tamanho, std::string elemento) { // ambas as funções são iguais, com a diferença de que uma recebe uma lista de inteiros e a outra uma lista de strings
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

    std::cout << "Insira o elemento a ser encontrado: "; // esse número será procurado na lista criada acima
    std::cin >> num;

    index = localizarArray(nums, tamanho, num); // com essas 3 informações, a função 'localizarArray' é chamada para encontrar a posição de tal número na lista

    if (index != -1) { // se o número for encontrado, sendo o retorno da função localizarArray diferente de -1, a posição dele na lista é exibida
        std::cout << num << " está no índex " << index << '\n';
    } else { // caso contrário, é exibido que o número não está na lista
        std::cout << num << " não está na lista.\n";
    }

    std::string comidas[] = {"Pizza", "Hamburguer", "Cachorro-Quente"};
    int tamanho2 = sizeof(comidas)/sizeof(std::string);
    int index2;
    std::string minhaComida;

    std::cout << "Insira a comida que deseja: "; // o processo é o mesmo para strings, com a diferença de que a lista é de strings
    std::cin >> minhaComida;

    index2 = localizarComida(comidas, tamanho2, minhaComida); // e a função 'localizarComida' é chamada para encontrar a posição da comida na lista, da mesma forma que a função 'localizarArray'

    if (index2 != -1) {
        std::cout << minhaComida << " está no índex " << index2 << '\n';
    } else {
        std::cout << minhaComida << " não está na lista.\n";
    }

    return 0;
}
