//*Using the statements you wrote in Exercise 2.4, write a complete program that calculates and displays the product of three integers. Add comments to the code where appropriate. [Note:You'll need to write the necessary using declarations or directive.]

// Calcula el producto de tres enteros
#include <iostream>
using namespace std;

int x{0};
int y{0};
int z{0};
int result {0};
int main(){
    cout << "Ingresa tres enteros";
    cin >> x >> y >> z;
    result = x*y*z;
    cout << "The product is " << result << endl;
    return 0; 
}
