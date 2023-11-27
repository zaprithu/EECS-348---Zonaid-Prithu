#include "savingsaccount.h"
#include <iostream>
#include <string>
#include <iomanip>


SavingsAccount::SavingsAccount(std::string accountNumber, std::string accountHolder, double balance, double interestRate) : Account(accountNumber, accountHolder, balance) {
    this->interestRate = double(interestRate);
}


void SavingsAccount::withdraw(const double& amount) {
    if (this->getBalance() - amount < MIN_BALANCE) {
        std::cout << "Cannot withdraw $" << amount << " from account " << std::endl;
        std::cout << "Minimum balance of $" << MIN_BALANCE << " must be maintained" << std::endl;
    } else {
        Account::withdraw(amount);
    }
}

void SavingsAccount::displayDetails() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Account details for Savings Account (ID: " << this->accountNumber << ")" << std::endl;
    std::cout << "Account Holder: " << this->accountHolder << std::endl;
    std::cout << "Account Balance: $" << this->getBalance() << std::endl;
    std::cout << "Interest Rate: " << this->interestRate*100 << "%" << std::endl;
}

SavingsAccount operator+(SavingsAccount& lhs, Account& rhs) {
    // Overloads the '+' operator to add two accounts together
    rhs.withdraw(300);
    lhs.deposit(300);
    return lhs;
}