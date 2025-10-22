#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese el numerador: ";
    cin >> a;
    cout << "Ingrese el denominador: ";
    cin >> b;

    try {
        if (b == 0)
            throw "Error: No se puede dividir entre cero.";
        cout << "Resultado: " << a / b << endl;
    } catch (const char* e) {
        cout << e << endl;
    }

    cout << "Operacion finalizada." << endl;
    return 0;
}
