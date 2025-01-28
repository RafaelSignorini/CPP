#include <iostream>
#include <windows.h>

class Humano { // uma classe é um modelo para um objeto, e um objeto é uma instância de uma classe, com atributos e métodos específicos
    public: // public é um modificador de acesso, que especifica que os membros da classe são acessíveis de fora da classe
        std::string nome; // aqui estão alguns exemplos de atributos da classe Humano
        std::string trabalho;
        int idade;

        void comer() { // aqui estão alguns exemplos de métodos* da classe Humano
            std::cout << nome << " está comendo...\n";
        }
        void beber() {
            std::cout << nome << " está bebendo...\n";
        }
        void dormir() {
            std::cout << nome << " está dormindo...\n";
        }
}; // *métodos são funções que pertencem a uma classe

class Carro { // aqui temos outra classe com atributos e métodos próprios, diferente da classe Humano
    public:
        std::string marca;
        std::string modelo;
        int ano;
        std::string cor;

        void acelerar() { // seus métodos também são diferentes
            std::cout << "Você pisou no acelerador\n";
        }
        void freiar() {
            std::cout << "Você pisou no freio\n";
        }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Humano humano1; // para cada classe, podemos criar vários objetos diferentes com atributos e métodos diferentes, porém compartilhando atributos e métodos públicos
    Humano humano2; // as classes de origem dos objetos são declaradas com a primeira letra maiúscula e o objeto com sua letra minúscula

    humano1.nome = "Ivar"; // define um valor próprio ao atributo público 'nome' do objeto 'humano1' da classe 'Humano'
    humano1.trabalho = "Militante"; // a mesma coisa acontece aqui com seu trabalho
    humano1.idade = 25; // e aqui com sua idade

    humano2.nome = "Astana"; // aqui temos mais um exemplo com outro objeto da mesma classe
    humano2.trabalho = "Veterinária";
    humano2.idade = 26;
// uma informação importante de anotar é que por mais que 'nome' seja um atributo em comum de todos os objetos da classe Humano, os valores inseridos nesse atributo são individuais, próprios

    std::cout << "Nome: " << humano1.nome << '\n'; // os atributos dos objetos da clase Humano são exibidos no terminal
    std::cout << "Trabalho: " << humano1.trabalho << '\n';
    std::cout << "Idade: " << humano1.idade << '\n';
    
    std::cout << "Nome: " << humano2.nome << '\n';
    std::cout << "Trabalho: " << humano2.trabalho << '\n';
    std::cout << "Idade: " << humano2.idade << '\n';

    humano1.comer(); // suas funções são chamadas
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
