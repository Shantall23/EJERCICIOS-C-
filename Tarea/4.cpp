#include <iostream>
using namespace std;

bool esPalindromo(int numero) {
    int numOriginal = numero;
    int numInvertido = 0;

    while (numero > 0) {
        numInvertido = numInvertido * 10 + numero % 10;
        numero /= 10;
    }

    return numOriginal == numInvertido;
}

int main() {
    int mayorPalindromo = 0;
    for (int x = 100; x < 1000; x++) {
        for (int y = 100; y < 1000; y++) {
            int resultado = x * y;
            if (esPalindromo(resultado) && resultado > mayorPalindromo) {
                mayorPalindromo = resultado;
            }
        }
    }

    cout << "El mayor número palíndromo es: " << mayorPalindromo << endl;
    return 0;
}
