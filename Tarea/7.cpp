#include <iostream>
using namespace std;

bool verificarPrimo(int numero) {
    if (numero < 2) 
        return false;
    if (numero == 2) 
        return true;
    if (numero % 2 == 0) 
        return false;
    for (int divisor = 3; divisor * divisor <= numero; divisor += 2) {
        if (numero % divisor == 0) 
            return false;
    }
    return true;
}

int main() {
    int contador = 0;  
    int candidato = 2; 
    while (contador < 10001) {
        if (verificarPrimo(candidato)) {
            contador++;
        }
        candidato++;
    }

    cout << "El primo número 10001 es: " << candidato - 1 << endl;
    return 0;
}
