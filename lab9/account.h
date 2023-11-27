#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
protected:
    std::string accountNumber;
    double balance;
    std::string accountHolder;
public:
    Account(std::string accountNumber, std::string accountHolder, double balance);
    Account();
    Account(const Account& orig);
    void deposit(const double& amount);
    virtual void withdraw(const double& amount);
    double getBalance() const;
    virtual void displayDetails() const;
    friend std::ostream& operator<<(std::ostream& os, const Account& account);
};



#endif // ACCOUNT_H
