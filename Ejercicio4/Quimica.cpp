#include <iostream>

namespace Ciencia {
    namespace Quimica {
        const double constanteAvogadro = 6.022e23;
        double calcularMoles(double particulas) {
            return particulas / constanteAvogadro;
        }
    }
}
