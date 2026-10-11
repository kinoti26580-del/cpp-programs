//name:KINOTIEDWINMUTUGI
//registration number:ct101/G/26580/25
//course: BACHELOR OF SCIENCE IN COMPUTER SCIENCE
//this program is a simple password verification system that allows users to enter a password and checks if it matches the predefined password. It provides feedback on whether the entered password is correct or incorrect.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // i. Predefined credentials
    const string correctUsername = "admin";
    const string correctPassword = "1234";

    string username, password;
    bool accessGranted = false;

    // ii. do-while loop: runs at least once
    do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        // iii. Check the input
        if (username == correctUsername && password == correctPassword) {
            cout << "\nAccess Granted" << endl;
            accessGranted = true;
        } else {
            cout << "Incorrect credentials, try again\n" << endl;
        }

    } while (!accessGranted);   // iv. repeat until correct

    return 0;
}