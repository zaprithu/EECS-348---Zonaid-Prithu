#include "account.h"
#include <iostream>
#include <string>
#include <random>


Account::Account(std::string accountNumber, std::string accountHolder, double balance)
{
    // Constructor for Account class
    this->balance = double(balance);
    this->accountHolder = std::string(accountHolder);
    this->accountNumber = std::string(accountNumber);
}

Account::Account(const Account& orig)
{
    // Copies constructor
    this->accountNumber = std::string(orig.accountNumber);
    this->balance = double(orig.balance);
    this->accountHolder = std::string(orig.accountHolder);
}



void Account::deposit(const double& money) 
{
    // Deposits money into the account
    (this->balance) += money;
}
double Account::getBalance() const
{
    return this->balance;
}

void Account::withdraw(const double& money)
{
    // Withdraws money from the account
    if (money > this->balance)
    {
        std::cout << "Funds are Insufficient" << std::endl;
    }
    else
    {
        (this->balance) -= money;
    }
}

void Account::displayDetails() const {
    // Display account details
    std::cout << "Account Holder: " << this->accountHolder << std::endl;
    std::cout << "Account Number: " << this->accountNumber << std::endl;
    std::cout << "Balance: " << this->balance << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Account& account) {
    account.displayDetails();
    return os;
}