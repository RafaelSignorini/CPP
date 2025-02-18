#include "cilindro.h"

Cilindro::Cilindro(double param_raio, double param_altura) {
    raio = param_raio;
    altura = param_altura;
}
double Cilindro::volume() {
    return PI * raio * raio * altura;
}
double Cilindro::getRaio() {
    return raio;
}
double Cilindro::getAltura() {
    return altura;
}
void Cilindro::setRaio(double param_raio) {
    raio = param_raio;
}
void Cilindro::setAltura(double param_altura) {
    altura = param_altura;
}
