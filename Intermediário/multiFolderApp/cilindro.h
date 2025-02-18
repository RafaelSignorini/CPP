#include "constantes.h"

class Cilindro {
    double raio{1.0};
    double altura{1.0};
public:
    Cilindro() = default;
    Cilindro(double param_raio, double param_altura);
    double volume();
    double getRaio();
    double getAltura();
    void setRaio(double param_raio);
    void setAltura(double param_altura);
};
