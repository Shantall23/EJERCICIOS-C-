#include <iostream>
using namespace std;

int fibonacci () {
    int a = 1;
    int b = 1;
    int res=0;
    while (b<4000000) {
        a=a+b;
        b=b+a;
        if (a%2==0)
            res+=a;
        if (b%2==0)
            res+=b;  
    }
    return res;
}

    
int main () {
    cout << "La suma de los  pares del Fibonacci es: "<<fibonacci()<< endl;
    return 0;
}
