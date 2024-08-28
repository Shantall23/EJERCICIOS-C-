#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese dos números enteros: ";
    cin >> num1 >> num2;

    int suma = num1 + num2;
    int producto = num1 * num2;
    int resta = num1 - num2;
    float cociente = static_cast<float>(num1) / num2;

    cout << "Suma: " << suma << endl;
    cout << "Producto: " << producto << endl;
    cout << "Resta: " << resta << endl;
    cout << "Cociente: " << cociente << endl;

    return 0;
}
