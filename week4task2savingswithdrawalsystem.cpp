//name:KINOTIEDWINMUTUGI
//registration number:ct101/G/26580/25
//course: BACHELOR OF SCIENCE IN COMPUTER SCIENCE
//this program is a simple savings and withdrawal system that allows users to deposit and withdraw money from their account. It keeps track of the account balance and provides options for the user to perform transactions.

#include <iostream>
using namespace std;

int main() {
    // i. Declare variables
    double balance, withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;

    // ii. Loop continues while there is money in the account
    while (balance > 0) {
        cout << "\nEnter amount to withdraw: ";
        cin >> withdrawal;

        // Stop condition: withdrawal greater than balance
        if (withdrawal > balance) {
            cout << "Insufficient balance. Withdrawal of " << withdrawal
                 << " is more than your balance of " << balance << "." << endl;
            break;
        }

        // Reject zero or negative amounts and ask again
        if (withdrawal <= 0) {
            cout << "Please enter an amount greater than zero." << endl;
            continue;
        }

        // iii. Deduct and display remaining balance
        balance = balance - withdrawal;
        cout << "Withdrawal successful. Remaining balance: " << balance << endl;
    }

    // Stop condition: balance has reached zero
    if (balance == 0) {
        cout << "\nYour balance is now zero. No more withdrawals possible." << endl;
    }

    cout << "Thank you for using our service." << endl;
    return 0;
}