#include <iostream>
#include <stdexcept>
using namespace std;

// Clase personalizada de excepción
class EdadInvalida : public runtime_error {
public:
    EdadInvalida(const string& mensaje) : runtime_error(mensaje) {}
};

int main() {
    int edad;

    try {
        cout << "Ingrese su edad: ";
        cin >> edad;

        if (cin.fail())
            throw invalid_argument("Error: Debe ingresar un numero.");
        if (edad < 0)
            throw EdadInvalida("Error: La edad no puede ser negativa.");

        cout << "Edad registrada: " << edad << endl;
    }
    catch (const EdadInvalida& e) {
        cout << e.what() << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
