#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount1{"Jane Green",50};
    Account myAccount2{"John Blue", -7};
    cout << "account1: "<< myAccount1.getName() << "balance is $"
            << myAccount1.getBalance();
    cout << "account2: "<< myAccount2.getName() << "balance is $"
            << myAccount2.getBalance();

    cout << "\n\nIngresar la cantidad del deposito para account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "Añadir " << depositAmount << "al saldo de account1";
    myAccount1.deposit(depositAmount);

    cout <<
}