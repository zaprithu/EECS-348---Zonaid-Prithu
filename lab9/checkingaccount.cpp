#include "checkingaccount.h"
#include <iostream>
#include <string>
#include <iomanip>

CheckingAccount::CheckingAccount(std::string accountNumber, std::string accountHolder, double balance, double maxOverdraft) : Account(accountNumber, accountHolder, balance) {
    this->maxOverdraft = double(-maxOverdraft);
}


void CheckingAccount::withdraw(const double& amount) {
    if (this->getBalance() - amount < this->maxOverdraft) {
        std::cout << "Cannot withdraw $" << amount << " from account " << std::endl;
        std::cout << "Maximum Overdraft of $" << maxOverdraft<< std::endl;
    } else {
        Account::withdraw(amount);
    }
}

void CheckingAccount::displayDetails() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Account details for Savings Account (ID: " << this->accountNumber << ")" << std::endl;
    std::cout << "Account Holder: " << this->accountHolder << std::endl;
    std::cout << "Account Balance: $" << this->getBalance() << std::endl;
    std::cout << "Maximum Overdraft: $" << -this->maxOverdraft << std::endl;
}

CheckingAccount operator+(CheckingAccount& lhs, Account& rhs) {
    // Overloads the '+' operator to add two accounts together
    rhs.withdraw(300);
    lhs.deposit(300);
    return lhs;
}