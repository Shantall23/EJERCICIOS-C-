#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount1{"Jane Green",50};
    Account myAccount2{"John Blue", -7};

    cout << "account1: "<< myAccount1.getName() << "el saldo es $"
            << myAccount1.getBalance();
    cout << "\naccount2: "<< myAccount2.getName() << "el saldo es $"
            << myAccount2.getBalance();

    cout << "\n\nIngresar la cantidad del deposito para account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "Añadir " << depositAmount << "al saldo de account1";
    myAccount1.deposit(depositAmount);

    cout << "\n\nIngresar la cantidad del retiro para account1: ";
    int withdrawAmount;
    cin >> withdrawAmount;
    cout << "Retirar " << withdrawAmount << "al saldo de account1";
    myAccount1.withdraw(withdrawAmount);

    cout << "\n\naccount1: " << myAccount1.getName() << " su saldo es $"
      << myAccount1.getBalance();
    cout << "\naccount2: " << myAccount2.getName() << " su saldo es $"
      << myAccount2.getBalance();

    cout << "\n\nIngresar la cantidad del deposito para account2: ";
    cin >> depositAmount;
    cout << "Añadir " << depositAmount << " al saldo de account2";
    myAccount2.deposit(depositAmount);

    cout << "\n\nIngresar la cantidad del retiro para account2: ";
    cin >> withdrawAmount;
    cout << "Retirar " << withdrawAmount << "al saldo de account2";
    myAccount2.withdraw(withdrawAmount);

    cout << "\n\naccount1: " << myAccount1.getName() << " su saldo es $"
      << myAccount1.getBalance();
    cout << "\naccount2: " << myAccount2.getName() << " su saldo es $"
      << myAccount2.getBalance() << endl;
}