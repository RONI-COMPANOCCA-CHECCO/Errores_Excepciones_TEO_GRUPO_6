#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> lista = {10, 20, 30};
    int indice;

    cout << "Ingrese un indice (0-2): ";
    cin >> indice;

    try {
        if (cin.fail())
            throw string("Error: Debe ingresar un numero entero.");
        if (indice < 0 || indice >= lista.size())
            throw out_of_range("Error: Indice fuera de rango.");

        cout << "Elemento: " << lista[indice] << endl;
    } 
    catch (const out_of_range& e) {
        cout << e.what() << endl;
    }
    catch (const string& e) {
        cout << e << endl;
    }

    cout << "Fin del manejo de excepciones." << endl;
    return 0;
}
