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

class Cachorro : public Animal {    // Cachorro herda de Animal as propriedades e métodos públicas
    public:
    void latir() {
        std::cout << "auau carai\n";
    }
};

class Gato : public Animal {
    public:
    void miar() {
        std::cout << "miau krai\n";
    }
};

class Objeto {
    public:
        double area;
        double volume;
        double massa;
};

class Cubo : public Objeto {
    public:
        double lado;
    Cubo(double lado) {
        this->lado = lado;
        this->area = lado * lado * 6;
        this->volume = pow(lado, 3);
    }
};

class Esfera : public Objeto {
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

    std::cout << cachorro1.vivo << '\n';
    cachorro1.comer();
    cachorro1.latir();

    std::cout << gato1.vivo << '\n';
    gato1.comer();
    gato1.miar();

    Cubo cubo1(5);
    Esfera esfera1(3);
    
    std::cout << "Área do cubo: " << cubo1.area << '\n';
    std::cout << "Volume do cubo: " << cubo1.volume << '\n';

    std::cout << "Área da esfera: " << esfera1.area << '\n';
    std::cout << "Volume da esfera: " << esfera1.volume << '\n';

    return 0;
}
