//name:KINOTI EDWIN MUTUGI
//reg no:CT101/G/26580/25 
//course:COMPUTER SCIENCE
//this is a simple admission decision system that evaluates the eligibility of a student for admission based on their academic performance and other criteria.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // i. Declare variables
    string studentName;
    int age;
    double score;

    // Prompt the user for details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    // ii. Nested if statements
    string decision;

    if (age >= 18) {
        if (score >= 50) {
            decision = "Admitted";
        } else {
            decision = "Not Admitted: Low Score";
        }
    } else {
        decision = "Not Admitted: Underage";
    }

    // iii. Display the decision
    cout << "\n--- Admission Decision ---" << endl;
    cout << "Name     : " << studentName << endl;
    cout << "Age      : " << age << endl;
    cout << "Score    : " << score << endl;
    cout << "Decision : " << decision << endl;

    return 0;
}