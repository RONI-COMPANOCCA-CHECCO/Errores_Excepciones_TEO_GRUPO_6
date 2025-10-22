#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {5, 10, 15};
    int pos;

    try {
        cout << "Ingrese una posicion (0-2): ";
        cin >> pos;

        if (cin.fail())
            throw string("Error: Debe ingresar un numero entero.");
        if (pos < 0 || pos >= numeros.size())
            throw out_of_range("Error: Posicion fuera de rango.");

        cout << "Elemento seleccionado: " << numeros[pos] << endl;
    } 
    catch (const out_of_range& e) {
        cout << e.what() << endl;
    }
    catch (const string& e) {
        cout << e << endl;
    }

    return 0;
}
