#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    cout << "Vector despues de agregar 6: ";
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    auto it = find(numeros.begin(), numeros.end(), 3);
    if (it != numeros.end()) {
        numeros.erase(it);
    }

    cout << "Vector despues de eliminar el 3: ";
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    map<string, int> edades;
    edades["Jose"] = 25;
    edades["Maria"] = 30;

    string nombre = "Jose";
    auto iter = edades.find(nombre);
    if (iter != edades.end()) {
        cout << "La edad de " << nombre << " es " << iter->second << " anos." << endl;
    } else {
        cout << nombre << " no encontrado en el map." << endl;
    }

    cout << "Map antes de borrar a Jose:" << endl;
    for (const auto& par : edades) {
        cout << par.first << ": " << par.second << endl;
    }
