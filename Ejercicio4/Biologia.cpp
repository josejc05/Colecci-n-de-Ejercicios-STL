#include <iostream>

namespace Ciencia {
    namespace Biologia {
        const double constanteBoltzmann = 1.380649e-23;
        double calcularEntropia(double energia, double temperatura) {
            return energia / temperatura;
        }
    }
}
