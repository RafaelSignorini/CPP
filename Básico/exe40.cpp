#include <iostream>
#include <windows.h>

class Humano {
    public:
        std::string nome;
        std::string trabalho;
        int idade;

        void comer() {
            std::cout << nome << " está comendo...\n";
        }
        void beber() {
            std::cout << nome << " está bebendo...\n";
        }
        void dormir() {
            std::cout << nome << " está dormindo...\n";
        }
};

class Carro {
    public:
        std::string marca;
        std::string modelo;
        int ano;
        std::string cor;

        void acelerar() {
            std::cout << "Você pisou no acelerador\n";
        }
        void freiar() {
            std::cout << "Você pisou no freio\n";
        }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Humano humano1;
    Humano humano2;

    humano1.nome = "Ivar";
    humano1.trabalho = "Militante";
    humano1.idade = 25;

    humano2.nome = "Astana";
    humano2.trabalho = "Veterinária";
    humano2.idade = 26;

    std::cout << "Nome: " << humano1.nome << '\n';
    std::cout << "Trabalho: " << humano1.trabalho << '\n';
    std::cout << "Idade: " << humano1.idade << '\n';
    
    std::cout << "Nome: " << humano2.nome << '\n';
    std::cout << "Trabalho: " << humano2.trabalho << '\n';
    std::cout << "Idade: " << humano2.idade << '\n';

    humano1.comer();
    humano1.beber();
    humano1.dormir();

    humano2.comer();
    humano2.beber();
    humano2.dormir();


    Carro carro1;
    Carro carro2;

    carro1.marca = "Chevrolet";
    carro1.modelo = "Zafira";
    carro1.ano = 2006;
    carro1.cor = "Preta";

    carro2.marca = "Mitsubishi";
    carro2.modelo = "Lancer";
    carro2.ano = 2018;
    carro2.cor = "Prata";

    std::cout << "O primeiro carro é uma " << carro1.modelo << " da " << carro1.marca << ", é " << carro1.cor << " e foi comprado em " << carro1.ano << '\n';
    std::cout << "O primeiro carro é um " << carro2.modelo << " da " << carro2.marca << ", é " << carro2.cor << " e foi comprado em " << carro2.ano << '\n';

    return 0;
}
