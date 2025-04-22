#include <iostream>
#include <vector>
#include <limits>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(NULL));

    std::vector<int> randomNumbers;

    for (int i = 0; i < 12; i++) {
        int number = std::rand() % 100 - 50;
        randomNumbers.push_back(number);
        std::cout << number << " ";
    }

    int menor = std::numeric_limits<int>::max();

    for (int num : randomNumbers) {
        if (num < menor) {
            menor = num;
        }
    }

    std::cout << "O menor número é " << menor << std::endl;
    return 0;
}
