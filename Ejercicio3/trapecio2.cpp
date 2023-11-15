#include <iostream>
#include <cmath>

namespace Geometria {
    class Trapecio {
    private:
        double baseMayor, baseMenor, altura;
    public:
        Trapecio(double bm, double bM, double h) : baseMenor(bm), baseMayor(bM), altura(h) {}
        double calcularArea() {
            return ((baseMayor + baseMenor) * altura) / 2;
        }
        double calcularPerimetro() {
            return baseMenor + baseMayor + 2 * sqrt(altura * altura + pow((baseMayor - baseMenor) / 2, 2));
        }
    };
}
