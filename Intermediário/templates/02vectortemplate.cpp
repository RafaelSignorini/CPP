#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>

std::vector<int> generateRandomNumbers(int qnt) { // int qnt é o parâmetro da quantidade de valores a serem gerados
    std::srand(time(nullptr)); // gera números verdadeiramente aleatórios, impossibilitando números pseudoaleatórios
    std::vector<int> randomNumbers;
    
    std::cout << "Números gerados aleatoriamente:" << std::endl;
    for (int i = 0; i < qnt; i++) {
        int number = std::rand() % 100 - 50; // gera números de -50 a 49
        randomNumbers.push_back(number); // adiciona na última posição do vetor
        std::cout << number << " ";
    }
    return randomNumbers;
}

void sortVector(std::vector<int>& vectorToSort) { // cria a variável vectorToSort e utiliza os valores como referência (&) assim evitando sobreuso de memória
    for (int i = 0; i < vectorToSort.size(); i++) {
        for (int j = 0; j < vectorToSort.size(); j++) {
            if (vectorToSort[i] < vectorToSort[j]) {
                std::swap(vectorToSort[i], vectorToSort[j]); // organiza em ordem crescente os valores do vetor
            }
        }
    }
}

template<typename T>
void printVector(const std::vector<T>& vectorToPrint) { // cria outra referência da variável 'randomNumbers', dessa vez uma constante, evitando alterações
    std::cout << "Números em ordem crescente:" << std::endl;
    for (T element : vectorToPrint) {
        std::cout << element << " ";
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> randomNumbers = generateRandomNumbers(7); 

    std::cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;

    sortVector(randomNumbers);
    printVector(randomNumbers);
    printVector<std::string>(std::vector<std::string>{"Rafael", "Stéfany", "Zara", "Lilith"});

    return 0;
}
