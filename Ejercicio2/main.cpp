// main.cpp

#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "rectangulo.cpp"
#include "cuadrado.cpp"
#include "trapecio.cpp"

using namespace std;

int main() {
    cout << "Area del triángulo: " << Geometria::calcularAreaTriangulo(5, 3) << endl;
    cout << "Area del círculo: " << Geometria::calcularAreaCirculo(3) << endl;
    cout << "Area del rectángulo: " << Geometria::calcularAreaRectangulo(4, 6) << endl;
    cout << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(4) << endl;
    cout << "Area del trapecio: " << Geometria::calcularAreaTrapecio(3, 5, 4) << endl;

    return 0;
}
