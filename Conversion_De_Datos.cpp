#include <iostream>
using namespace std;

int main() {
    int numero;

    try {
        cout << "Ingrese un numero entero: ";
        cin >> numero;

        if (cin.fail()) {
            throw "Error: Debe ingresar solo numeros enteros.";
        }

        cout << "Numero ingresado: " << numero << endl;
    } catch (const char* e) {
        cout << e << endl;
    }

    return 0;
}
