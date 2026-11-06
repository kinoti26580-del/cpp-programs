//name: KINOTI EDWIN MUTUGI
//registration number: CT101/G/26580/25
// This program simulates a library book management system.

#include <iostream>
#include <limits>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        while (!(cin >> copiesAvailable) || copiesAvailable < 0) {
            cout << "Please enter a non-negative number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    void borrowBook() {
        if (copiesAvailable > 0) {
            --copiesAvailable;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "No copies are currently available to borrow.\n";
        }
    }

    void displayDetails() const {
        cout << "\nBook details\n"
             << "Title: " << title << '\n'
             << "Author: " << author << '\n'
             << "Copies available: " << copiesAvailable << '\n';
    }
};

int main() {
    Book book;

    book.inputDetails();
    book.borrowBook();
    book.displayDetails();

    return 0;
}