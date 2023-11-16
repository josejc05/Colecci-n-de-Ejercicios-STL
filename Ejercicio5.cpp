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
