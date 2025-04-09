#include <iostream>
#include <vector> // importa a biblioteca de vetores

int main() {
    std::vector<int> numsVec = { 46, 685, 5 }; // cria um vetor contendo 3 números do tipo int

    std::cout << numsVec.size() << " is the current size of this int vector array" << std::endl; // .size() exibe o tamanho do vetor em componentes, não bytes
    std::cout << "the last number in the int vector array is " << numsVec[numsVec.size() - 1] << std::endl;

    numsVec.push_back(57); // vetores são listas de tamanhos mutáveis, nesta linha ele adiciona uma posição no final do vetor e adiciona o valor dentro dos parênteses
    std::cout << "a new number was added to the array" << std::endl;
    std::cout << numsVec.back() << " is the new last number in the int vector array" << std::endl; // exibe apenas o último valor do vetor
    std::cout << numsVec.front() << " is the first number in the int vector array" << std::endl; // exibe apenas o primeiro valor do vetor

    numsVec.insert(2, 76); // adiciona um valor na posição 2, "empurrando" tanto o valor nesta posição quanto os valores seguintes uma posição "à frente"
    std::cout << "a new number was added to the array" << std::endl;
    std::cout << numsVec.front() << " is the new first number in the int vector array" << std::endl;

    numsVec.erase(numsVec.begin()); // apaga o valor na posição inserida dentro dos parênteses
    std::cout << "the first number of the int vector array was removed" << std::endl;
    return 0;
}
