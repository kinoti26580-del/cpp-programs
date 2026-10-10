//name:KINOTI EDWIN MUTUGI
//reg no:CT101/G/26580/25   
//course:COMPUTER SCIENCE
//this is a simple driving test evaluation system that evaluates the performance of a driver based on their driving skills and knowledge of traffic rules. The system will take input from the user regarding their driving skills and knowledge, and then provide an evaluation based on predefined criteria.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theoryMarks;
    double practicalMarks;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    const double averageScore = (theoryMarks + practicalMarks) / 2.0;

    cout << fixed << setprecision(2);
    cout << "\n===== DRIVING TEST RESULTS =====\n";
    cout << "Student name:    " << studentName << '\n';
    cout << "Theory marks:    " << theoryMarks << '\n';
    cout << "Practical marks: " << practicalMarks << '\n';
    cout << "Average score:   " << averageScore << '\n';
    cout << "Result:          " << (averageScore >= 50.0 ? "Passed" : "Failed") << '\n';
    cout << "================================\n";

    return 0;
}