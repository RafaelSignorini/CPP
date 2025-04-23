#include <iostream>
#include <vector>
#include <limits>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(nullptr));

    std::vector<int> randomNumbers;

    std::cout << "Números gerados aleatoriamente:" << std::endl;
    for (int i = 0; i < 12; i++) {
        int number = std::rand() % 100 - 50;
        randomNumbers.push_back(number);
        std::cout << number << " ";
    }
    
    std::cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
    
    std::cout << "Números em ordem decrescente:" << std::endl;
    for (int i = 0; i < randomNumbers.size(); ++i) {
        for (int j = 0; j < randomNumbers.size(); ++j) {
            if (randomNumbers[i] > randomNumbers[j]) {
                std::swap(randomNumbers[i], randomNumbers[j]);
            }
        }
    }

    for (int num : randomNumbers) {
        std::cout << num << " ";
    }

    return 0;
}
