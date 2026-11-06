//name: KINOTI EDWIN MUTUGI
//reg no: CT101/G/26580/25
//This program demonstrates the use of constructors and destructors in C++.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double accountBalance;

public:
    BankAccount(const string& name, const string& number, double balance)
        : accountHolderName(name),
          accountNumber(number),
          accountBalance(balance) {
        cout << "Account successfully created\n";
    }

    void displayAccount() const {
        cout << fixed << setprecision(2)
             << "\nAccount holder: " << accountHolderName
             << "\nAccount number: " << accountNumber
             << "\nAccount balance: " << accountBalance << '\n';
    }

    ~BankAccount() {
        cout << "Account closed successfully\n";
    }
};

int main() {
    BankAccount account("Jane Doe", "ACC1001", 2500.00);
    account.displayAccount();

    return 0;
}