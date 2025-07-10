#include<iostream>
using namespace std;
int main(){
    int n, max, A[20];
    cin >> n;
    for(int i = 0; i<n ; i++){
        cin >> A[i];
}
max = A[0];
for(int i = 1; i < n; i++){
    if (A[i] > max){
    max = A[i];
    }
}
cout << max;

}

#include <iostream>
using namespace std;

int main() {
    int n, max, A[20];

    cout << "Ingrese la cantidad de elementos (máx 20): ";
    cin >> n;

    if (n > 20 || n <= 0) {
        cout << "Cantidad no válida. Debe estar entre 1 y 20." << endl;
        return 1;
    }

    cout << "Ingrese " << n << " números: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    cout << "El número mayor es: " << max << endl;
    return 0;
}
