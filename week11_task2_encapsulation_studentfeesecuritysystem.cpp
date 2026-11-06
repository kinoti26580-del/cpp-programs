//name: KINOTI EDWIN MUTUGI
//reg no: CT101/G/26580/25
//This program demonstrates encapsulation in C++.

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: ";
        while (!(cin >> feeBalance) || feeBalance < 0) {
            cout << "Enter a valid non-negative balance: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    void makePayment() {
        double payment;

        cout << "Enter payment amount: ";
        while (!(cin >> payment) || payment <= 0) {
            cout << "Enter a valid amount greater than zero: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (payment > feeBalance) {
            cout << "Payment exceeds the fee balance. Payment not processed.\n";
        } else {
            feeBalance -= payment;
            cout << "Payment processed successfully.\n";
        }
    }

    void displayStatus() const {
        cout << fixed << setprecision(2)
             << "\nStudent fee status\n"
             << "Name: " << studentName << '\n'
             << "Admission number: " << admissionNumber << '\n'
             << "Remaining fee balance: " << feeBalance << '\n';
    }
};

int main() {
    Student student;

    student.inputStudentData();
    student.makePayment();
    student.displayStatus();

    return 0;
}