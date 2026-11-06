//name: KINOTI EDWIN MUTUGI
//reg no: CT101/G/26580/25
//This program demonstrates inheritance in C++.



#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() const {
        cout << "Name: " << name << '\n'
             << "Age: " << age << '\n';
    }
};

class Student : public Person {
private:
    string admissionNumber;
    string className;

public:
    void inputStudent() {
        inputPerson();

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter class: ";
        getline(cin, className);
    }

    void displayStudent() const {
        displayPerson();
        cout << "Admission number: " << admissionNumber << '\n'
             << "Class: " << className << '\n';
    }
};

int main() {
    Student student;

    student.inputStudent();

    cout << "\nStudent details\n";
    student.displayStudent();

    return 0;
}