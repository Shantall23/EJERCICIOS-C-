#include <iostream>
using namespace std;

int main() {
    char c;

    cout << "Ingrese un número : ";
    cin >> c;

    int val = static_cast <int>(c);

    cout << "El carácter correspondiente al valor ASCII es: " << val << endl;

    return 0;
}
