#include "constantes.h"

class Cilindro {
    double raio{1.0};
    double altura{1.0};
public:
    Cilindro() = default;
    Cilindro(double param_raio, double param_altura) {
        raio = param_raio;
        altura = param_altura;
    }
    double volume() {
        return PI * raio * raio * altura;
    }
    double getRaio() {
        return raio;
    }
    double getAltura() {
        return altura;
    }
    void setRaio(double param_raio) {
        raio = param_raio;
    }
    void setAltura(double param_altura) {
        altura = param_altura;
    }
};
