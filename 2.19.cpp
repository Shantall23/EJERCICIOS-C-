#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingrese tres números enteros diferentes: ";
    cin >> num1 >> num2 >> num3;

    int suma = num1 + num2 + num3;
    int producto = num1 * num2 * num3;
    float promedio = suma / 3.0;

    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    if (num1 > num2 && num2 < num3) {
        cout << " El mayor es " << num1 << endl;
    } else if (num2 > num1 && num1 < num3) {
        cout << " El mayor es " << num2 << endl;
    } else if (num3 > num2 && num2 < num1) {
        cout << " El mayor es " << num3 << endl;
    } 

    if (num1 > num2 && num2 < num3) {
        cout << " El menor es " << num2 << endl;
    } else if (num3 > num1 && num1 < num2) {
        cout << " El menor es " << num1 << endl;
    } else if (num3 > num2 && num2 < num1) {
        cout << " El menor es " << num2 << endl;
    } 

    return 0;
}
