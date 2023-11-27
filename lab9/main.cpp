#include <iostream>
#include <string>
#include "savingsaccount.h"
#include "checkingaccount.h"

int main() {
    SavingsAccount savings("S123", "John Doe", 1000, 0.02);
    CheckingAccount current("C456", "Jane Doe", 2000, 500);

    std::cout << savings << current << std::endl << std::endl;

    savings.deposit(500);
    current.withdraw(1000);
    
    std::cout << "Account details after transactions: " << std::endl;
    std::cout << savings << current << std::endl << std::endl;

    current = current + savings;

    std::cout << "Account details after transfer: " << std::endl;
    std::cout << savings << current << std::endl << std::endl;

    return 0;
}