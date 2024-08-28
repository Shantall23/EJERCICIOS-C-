#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese dos números enteros: ";
    cin >> num1 >> num2;

    if (num1 % 2 != 0 && num2 % 2 != 0) {
        cout << "La suma de " << num1 << " y " << num2 << " es impar." << endl;
    } else if ((num1%2==0 && num2%2!=0)||(num2%2==0 && num1%2!=0)) {
        cout << "La suma de " << num1 << " y " << num2 << " es impar." << endl;
    } else if (num1 % 2 == 0 && num2 % 2 == 0){
        cout << "La suma de " << num1 << " y " << num2 << " es par." << endl;
    }

    return 0;
}
