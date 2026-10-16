#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Numero: ";
    cin >> n;

    if (n <= 0) cout << "Error";
    else for (int i = 5; i <= n; i += 5) cout << i << " ";
    
    return 0;
}