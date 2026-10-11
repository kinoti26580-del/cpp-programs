//name:KINOTI EDWIN MUTUGI
//reg no:CT101/G/26580/25       
//course:COMPUTER SCIENCE
//this is a payroll system that calculates the salary of an employee based on their hours worked and hourly rate        

#include <iostream>
#include <string>
using namespace std;

// Global variables shared by the functions
string name;
double basicSalary;
double overtimeHours;
double ratePerHour = 500.0; //hourly rate for overtime pay     

// i. Get employee details
void getEmployeeDetails() {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

// ii. Overtime Pay = Overtime Hours x Rate Per Hour
double calculateOvertimePay() {
    return overtimeHours * ratePerHour;
}

// iii. Net Salary = Basic Salary + Overtime Pay
double calculateNetSalary(double overtimePay) {
    return basicSalary + overtimePay;
}

// iv. Display payslip
void displayPayslip(double overtimePay, double netSalary) {
    cout << "\n==============================" << endl;
    cout << "           PAYSLIP            " << endl;
    cout << "==============================" << endl;
    cout << "Employee Name  : " << name << endl;
    cout << "Basic Salary   : " << basicSalary << endl;
    cout << "Overtime Hours : " << overtimeHours << endl;
    cout << "Rate Per Hour  : " << ratePerHour << endl;
    cout << "Overtime Pay   : " << overtimePay << endl;
    cout << "------------------------------" << endl;
    cout << "NET SALARY     : " << netSalary << endl;
    cout << "==============================" << endl;
}

// v. Main calls the functions in order
int main() {
    getEmployeeDetails();

    double overtimePay = calculateOvertimePay();
    double netSalary = calculateNetSalary(overtimePay);

    displayPayslip(overtimePay, netSalary);

    return 0;
}