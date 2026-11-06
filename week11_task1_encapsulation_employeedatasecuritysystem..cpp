//name: KINOTI EDWIN MUTUGI
//reg no: CT101/G/26580/25
//This program demonstrates encapsulation in C++.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    void displayAccount() const {
        cout << "Account Holder: " << accountHolder << '\n'
             << "Balance: $" << balance << '\n';
    }
};

int main() {
    BankAccount account("John Doe", 1000.0);
    account.displayAccount();

    account.deposit(500.0);
    account.displayAccount();

    account.withdraw(200.0);
    account.displayAccount();

    return 0;
}