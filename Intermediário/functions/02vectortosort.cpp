#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>

std::vector<int> generateRandomNumbers(int qnt) {
    std::srand(time(nullptr));
    std::vector<int> randomNumbers;

    std::cout << "Números gerados aleatoriamente:" << std::endl;
    for (int i = 0; i < 12; i++) {
        int number = std::rand() % 100 - 50;
        randomNumbers.push_back(number);
        std::cout << number << " ";
    }
    std::cout << std::endl;
    return randomNumbers;
}

std::vector<int> sortVector(std::vector<int> vectorToSort) {
    std::cout << "Números em ordem crescente:" << std::endl;
    for (int i = 0; i < vectorToSort.size(); i++) {
        for (int j = 0; j < vectorToSort.size(); j++) {
            if (vectorToSort[i] < vectorToSort[j]) {
                std::swap(vectorToSort[i], vectorToSort[j]);
            }
        }
    }
    return vectorToSort;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> randomNumbers = generateRandomNumbers(5);

    std::cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;

    std::vector<int> sorted = sortVector(randomNumbers);

    std::cout << "Números ordenados:" << std::endl;
    for (int num : sorted) {
        std::cout << num << " ";
    }

    return 0;
}
