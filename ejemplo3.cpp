#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> m;

    int A[m], B[m];

    for (int i = 0; i < m; i++) {
        cout << "Ingrese A[" << i << "]: ";
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        B[i] = A[i];
    }

    cout << " Arreglo clon B: ";
    for (int i = 0; i < m; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++) {
        A[i] = B[m - 1 - i];
    }

    cout << " Arreglo A despues de intercambio con la clon invertida: ";
    for (int i = 0; i < m; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

