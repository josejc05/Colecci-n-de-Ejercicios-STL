#include <iostream>
#include "Fisica.cpp"
#include "Quimica.cpp"
#include "Biologia.cpp"

int main() {
    std::cout << "Energia (Fisica): " << Ciencia::Fisica::calcularEnergia(10) << std::endl;

    std::cout << "Moles (Quimica): " << Ciencia::Quimica::calcularMoles(6.022e24) << std::endl;

    double energia = 2.5e-21;
    double temperatura = 300;
    std::cout << "Entropia (Biologia): " << Ciencia::Biologia::calcularEntropia(energia, temperatura) << std::endl;

    return 0;
}
