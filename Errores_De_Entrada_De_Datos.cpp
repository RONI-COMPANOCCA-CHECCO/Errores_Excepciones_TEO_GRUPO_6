#include <iostream>
using namespace std;

int main() {
    string nombre;
    int edad;

    try {
        cout << "Ingrese su nombre: ";
        cin >> nombre;

        cout << "Ingrese su edad: ";
        cin >> edad;

        if (cin.fail())
            throw "Error: La edad debe ser un numero entero.";

        cout << "Hola " << nombre << ", tienes " << edad << " años." << endl;
    } catch (const char* e) {
        cout << e << endl;
    }

    return 0;
}
