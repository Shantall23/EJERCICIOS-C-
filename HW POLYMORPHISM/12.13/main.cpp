#include <iostream>
#include <vector>
#include <memory>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

int main() {
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<SavingsAccount>(1000.0, 0.03)); // 3% interest rate
    accounts.push_back(std::make_unique<CheckingAccount>(1000.0, 1.0)); // $1 transaction fee

    for (auto& account : accounts) {
        double depositAmount, withdrawAmount;

        std::cout << "\nCurrent balance: $" << account->getBalance() << "\n";

        std::cout << "Enter amount to deposit: ";
        std::cin >> depositAmount;
        account->credit(depositAmount);

        std::cout << "Enter amount to withdraw: ";
        std::cin >> withdrawAmount;
        if (!account->debit(withdrawAmount)) {
            std::cout << "Debit amount exceeded account balance.\n";
        }

        // If it's a SavingsAccount, calculate and apply interest
        if (SavingsAccount* savings = dynamic_cast<SavingsAccount*>(account.get())) {
            double interest = savings->calculateInterest();
            savings->credit(interest); // Apply interest
            std::cout << "Interest of $" << interest << " applied.\n";
        }

        std::cout << "Updated balance: $" << account->getBalance() << "\n";
    }

    return 0;
}