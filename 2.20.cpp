#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
    int radio;
    cout << "Ingrese el radio de un círculo: ";
    cin >> radio;

    int diametro = 2 * radio;
    float circunferencia = 2 * PI * radio;
    float area = PI * radio * radio;

    cout << "Diámetro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Área: " << area << endl;

    return 0;
}
