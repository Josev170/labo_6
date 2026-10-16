 #include <iostream>
using namespace std;

int main() {
    int n, suma = 0, cont = 0;
    
    cout << "Numero limite: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        suma += i;
        cont++;
    }
    if (n < 0) {
        cout << "Número inválido. Por favor, ingrese un número mayor o igual a 0." << endl;
    } else {}
        
        for (int i = n; i >= 0; i--) {
            cout << i << endl;

    cout << "Cantidad de impares: " << cont << "\n";
    cout << "Suma total: " << suma;
    
    return 0;
        }
}
