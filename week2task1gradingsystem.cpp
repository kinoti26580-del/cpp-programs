//name:KINOTI EDWIN MUTUGI
//reg no:CT101/G/26580/25
//course:COMPUTER SCIENCE
//this is a simple grading system that evaluates the performance of a student based on their marks in different subjects. The system will take input from the user regarding their marks, and then provide an evaluation based on predefined criteria.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // i. Declare variables
    string studentName;
    int marks;
    char grade;

    // Prompt the user for details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0 - 100): ";
    cin >> marks;

    // ii. if-else ladder with full ranges
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    } else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    } else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    } else if (marks >= 0 && marks < 40) {
        grade = 'E';
    } else {
        cout << "fail." << endl;
        return 1;
    }

    // iii. Display results
    cout << "\n--- Student Result ---" << endl;
    cout << "Name  : " << studentName << endl;
    cout << "Marks : " << marks << endl;
    cout << "Grade : " << grade << endl;

    return 0;
}