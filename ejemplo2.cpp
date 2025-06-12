#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Ingrese el numero de elementos: ";
    cin >> m;

    float A[m]; 
    float S = 0;

    for (int i = 1; i <= m; i++) {
        cout << "Ingrese el elemento A[" << i << "]: ";
        cin >> A[i];
        S = S + A[i];
    }

    float prom = S / m;


    float mayor;
    bool encontrado = false;

    for (int i = 0; i < m; i++) {
        if (A[i] > prom) {
            if (!encontrado || A[i] > mayor) {
                mayor = A[i];
                encontrado = true;
            }
        }
    }

    if (encontrado) {
        cout << "El elemento mayor que el promedio es: " << mayor << endl;
    } else {
        cout << "No hay elementos mayores que el promedio." << endl;
    }

    return 0;
}

