#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream archivo("datos.txt");

    try {
        if (!archivo.is_open()) {
            throw "Error: No se pudo abrir el archivo.";
        }

        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } catch (const char* e) {
        cout << e << endl;
    }

    cout << "Lectura finalizada." << endl;
    return 0;
}
