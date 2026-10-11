//name:KINOTI EDWIN MUTUGI
//reg no:CT101/G/26580/25
//course:COMPUTER SCIENCE 
//this is an employee bonus system that calculates the bonus for an employee based on their performance and the bonus rate

#include <iostream>
#include <string>
using namespace std;



int main() {
    // i. Declare variables
    string name;
    double basicSalary, bonus, totalSalary;

    // ii. for loop for 5 employees
    for (int i = 1; i <= 5; i++) {
        cout << "\n--- Employee " << i << " ---" << endl;

        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter basic salary: ";
        cin >> basicSalary;
        cin.ignore(1000, '\n');   // clear the leftover newline before the next getline

        // iii. Bonus = 0.05 x Basic Salary
        bonus = 0.05 * basicSalary;

        // iv. Total Salary = Basic Salary + Bonus
        totalSalary = basicSalary + bonus;

        // v. Display report
        cout << "\n*** Report for Employee " << i << " ***" << endl;
        cout << "Name          : " << name << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "Bonus         : " << bonus << endl;
        cout << "Total Salary  : " << totalSalary << endl;
    }

    return 0;
}    
