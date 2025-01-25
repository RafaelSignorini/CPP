#include <iostream>

int main() {
    double x = (int) 3.14; // Conversão explícita de um double para um int
    std::cout << x << '\n';

    std::cout << (char) 100 << '\n'; // Conversão implícita de um double para um int

    int corretas = 8;
    int questoes = 10;
    double nota = corretas / (double) questoes * 100;

    std::cout << nota << "%\n";

    return 0;
}
