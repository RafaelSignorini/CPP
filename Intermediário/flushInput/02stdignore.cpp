#include <iostream>
#include <limits>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
	float km = 0;

	std::cout << "Por favor insira uma distância em quilometros:" << std::endl;
	std::cin >> km;

	while (!std::cin.good()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // essa linha faz com que valores incompativeis com o tipo da variável sejam desconsiderados, evitando erros

		std::cout << "Erro. Por favor insira um valor válido:" << std::endl;
		std::cin >> km;
	}

	std::cout << "A distância registrada é " << km << "km" << std::endl;
	return 0;
}
