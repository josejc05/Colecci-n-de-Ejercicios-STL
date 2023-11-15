#include <iostream>
#include <cmath>

namespace Geometria {
    class Triangulo {
    private:
        double base, altura;
    public:
        Triangulo(double b, double h) : base(b), altura(h) {}
        double calcularArea() {
            return (base * altura) / 2;
        }
        double calcularPerimetro() {
            return base + altura + sqrt(base * base + altura * altura);
        }
    };
}
