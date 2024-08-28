#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cout << "Ingrese cinco números enteros: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int menor, mayor;

    // Determinando el menor número
    if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5) {
        menor = num1;
    } else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5) {
        menor = num2;
    } else if (num3 <= num1 && num3 <= num2 && num3 <= num4 && num3 <= num5) {
        menor = num3;
    } else if (num4 <= num1 && num4 <= num2 && num4 <= num3 && num4 <= num5) {
        menor = num4;
    } else {
        menor = num5;
    }

    // Determinando el mayor número
    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5) {
        mayor = num1;
    } else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5) {
        mayor = num2;
    } else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5) {
        mayor = num3;
    } else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5) {
        mayor = num4;
    } else {
        mayor = num5;
    }

    cout << "El menor es: " << menor << endl;
    cout << "El mayor es: " << mayor << endl;

    return 0;
}

