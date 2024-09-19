#include <iostream>
using namespace std;

int calcularFibonacciPar() {
    int num1 = 1;  
    int num2 = 1;  
    int sumaPares = 0;  
   
    while (num2 < 4000000) {
        num1 = num1 + num2;  
        num2 = num2 + num1;  
        if (num1 % 2 == 0)
            sumaPares += num1;
        if (num2 % 2 == 0)
            sumaPares += num2;
    }

    return sumaPares;
}

int main() {
    cout << "La suma de los números pares en Fibonacci es: " << calcularFibonacciPar() << endl;
    return 0;
}
