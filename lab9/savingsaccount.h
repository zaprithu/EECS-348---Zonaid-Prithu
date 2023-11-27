#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"
#define MIN_BALANCE 100
class SavingsAccount : public Account {
private: 
    double interestRate;
public:
    SavingsAccount(std::string accountNumber, std::string accountHolder, double balance, double interestRate);
    void withdraw(const double& amount) override;
    void displayDetails() const override;
    friend SavingsAccount operator+(SavingsAccount& lhs, Account& rhs);
};


#endif // SAVINGSACCOUNT_H