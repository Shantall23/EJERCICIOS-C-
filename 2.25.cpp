#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese dos números enteros: ";
    cin >> num1 >> num2;

    if (num2 % num1 == 0) {
        cout << num1 << " es un factor de " << num2 << endl;
    } else {
        cout << num1 << " no es un factor de " << num2 << endl;
    }

    return 0;
}
