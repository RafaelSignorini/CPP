#include <iostream>
#include <windows.h>
#include <cmath>

class Animal {
    public:
        bool vivo = true;
    void comer() {
        std::cout << "Este animal está comendo\n";
    }
};

class Cachorro : public Animal { // a classe Cachorro herda de Animal os atributos e métodos públicos
    public:
    void latir() { // essa classe também tem uma função própria para seus objetos
        std::cout << "auau carai\n";
    }
};

class Gato : public Animal { // da mesma forma que Cachorro herda os atribudos e métodos públicos de Animal, Gato faz isso
    public:
    void miar() { // porém não contem as mesmas funções de Cachorro e vice-versa
        std::cout << "miau krai\n";
    }
};

class Objeto { // aqui temos outro exemplo, porém de uma forma geométrica
    public:
        double area;
        double volume;
        double massa;
};

class Cubo : public Objeto { // um Cubo herda de Objeto seus atributos públicos, porém declara abaixo seus próprios atributos e métodos
    public:
        double lado;
    Cubo(double lado) {
        this->lado = lado; // definir um atributo por meio de uma variável com o prefixo 'this->' significa que *este* Cubo tem tais medidas
        this->area = lado * lado * 6; // cada Cubo terá seu próprio valor para lado, área e volume;
        this->volume = pow(lado, 3);
    }
};

class Esfera : public Objeto { // o mesmo acontece com esferas, porém seus cálucos algébricos são diferentes
    public:
        double raio;
    Esfera(double raio) {
        this->raio = raio;
        this->area = 4 * 3.1415 * pow(raio, 2);
        this->volume = (4/3.0) * 3.1415 * pow(raio,3);
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Cachorro cachorro1;
    Gato gato1;

    std::cout << cachorro1.vivo << '\n'; // exibe se o atributo 'vivo' é verdadeiro no objeto da classe Cachorro
    cachorro1.comer(); // chama ambas as funções que o objeto tem acesso, tanto de sua própria classe (Cachorro) quanto de sua classe materna (Animal)
    cachorro1.latir();
// os mesmos processos acontecem abaixo com o objeto gato1
    std::cout << gato1.vivo << '\n';
    gato1.comer();
    gato1.miar();

    Cubo cubo1(5); // o objeto cubo1 recebe um valor para calcular seu lado, área e volume dentro de seus métodos
    Esfera esfera1(3); // o mesmo ocorre com a esfera1
    
    std::cout << "Área do cubo: " << cubo1.area << '\n'; // e por fim os dados são todos exibidos
    std::cout << "Volume do cubo: " << cubo1.volume << '\n';

    std::cout << "Área da esfera: " << esfera1.area << '\n';
    std::cout << "Volume da esfera: " << esfera1.volume << '\n';

    return 0;
}
