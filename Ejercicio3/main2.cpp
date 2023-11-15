#include <iostream>
#include "circulo2.cpp"
#include "triangulo2.cpp"
#include "rectangulo.cpp"
#include "cuadrado.cpp"
#include "trapecio.cpp"

int main() {
    Geometria::Circulo circulo(5);
    std::cout << "Área del círculo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo: " << circulo.calcularPerimetro() << std::endl;

    Geometria::Triangulo triangulo(4, 3);
    std::cout << "Área del triángulo: " << triangulo.calcularArea() << std::endl;
    std::cout << "Perímetro del triángulo: " << triangulo.calcularPerimetro() << std::endl;

    Geometria::Rectangulo rectangulo(4, 6);
    std::cout << "Área del rectángulo: " << rectangulo.calcularArea() << std::endl;
    std::cout << "Perímetro del rectángulo: " << rectangulo.calcularPerimetro() << std::endl;

    Geometria::Cuadrado cuadrado(4);
    std::cout << "Área del cuadrado: " << cuadrado.calcularArea() << std::endl;
    std::cout << "Perímetro del cuadrado: " << cuadrado.calcularPerimetro() << std::endl;

    Geometria::Trapecio trapecio(3, 5, 4);
    std::cout << "Área del trapecio: " << trapecio.calcularArea() << std::endl;
    std::cout << "Perímetro del trapecio: " << trapecio.calcularPerimetro() << std::endl;

    return 0;
}
