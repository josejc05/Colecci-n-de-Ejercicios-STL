#include <iostream>
#include <cmath>

namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
}
