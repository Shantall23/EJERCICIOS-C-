#include <iostream>
using namespace std;

int obtenerMayorFactorPrimo(long long numero) {
    int divisor = 2;  

    while (numero > 1) {
        if (numero % divisor == 0) {
            numero = numero / divisor;
        } else {
            ++divisor; 
        }
    }

    return divisor;
}

int main() {
    cout << "El mayor factor primo es: " << obtenerMayorFactorPrimo(600851475143) << endl;
    return 0;
}
