#include <iostream>
#include <limits>

int main() {
    std::string name;
    int cpf, age;

    std::cout << "Input your age: " << std::endl;
    std::cin >> age;

    std::cin.clear(); // essa linha "limpa" o console de qualquer input inválido, neste caso como uma letra ou caractere não-numérico
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // e aqui ele ignora quaisquer valores não-numéricos na mesma linha

    std::cout << "Input your name: ";
    std::getline(std::cin, name);

    std::cout << "Welcome, " << name << ". Your registered age is " << age << std::endl;
}
