// ejercicio a
#include <iostream>
using namespace std;

int main() {
    for (char c = 'V'; c <= 'Z'; ++c) {
        cout << c << " " << static_cast<char>(c + 1) << " ";
    }
    cout << endl;
    cout << "V W X Y Z" << endl;
    cout << "V W";
    cout << " X Y Z" << endl;
    return 0;
}
