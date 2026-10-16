#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n < 0) {
        cout << "Número inválido. Por favor, ingrese un número mayor o igual a 0." << endl;
    } else {
        //si
        for (int i = n; i >= 0; i--) {
            cout << i << endl;
        }
    }

    return 0;
}