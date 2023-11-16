#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double velocidadLuz = 299792458;
        double calcularEnergia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
    }
}
