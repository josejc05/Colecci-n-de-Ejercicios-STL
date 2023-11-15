#include <iostream>
#include <cmath>

namespace Geometria {
    class Rectangulo {
    private:
        double base, altura;
    public:
        Rectangulo(double b, double h) : base(b), altura(h) {}
        double calcularArea() {
            return base * altura;
        }
        double calcularPerimetro() {
            return 2 * (base + altura);
        }
    };
}

