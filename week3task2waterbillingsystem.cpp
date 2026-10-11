//name:KINOTI EDWIN MUTUGI
//reg no:CT101/G/26580/25
//course:COMPUTER SCIENCE 
//this is a water billing system that calculates the water bill for a customer based on their water consumption and the rate per unit   

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// The task does not give a rate, so it is set here as a constant (change as needed)
const double RATE_PER_UNIT = 50.0;

// i. Get customer details (values returned through reference parameters)
void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter number of units consumed: ";
    cin >> units;
}

// ii. Water Bill = Units Consumed x Rate Per Unit
double calculateBill(double units, double ratePerUnit) {
    return units * ratePerUnit;
}

// iii. 10% discount if units are more than 100; returns the discount amount
double applyDiscount(double bill, double units) {
    if (units > 100) {
        return bill * 0.10;
    }
    return 0.0;
}

// iv. Display the full bill
void displayBill(string name, double units, double ratePerUnit,
                 double billBeforeDiscount, double discount, double finalAmount) {
    cout << fixed << setprecision(2);
    cout << "\n==================================" << endl;
    cout << "          WATER BILL              " << endl;
    cout << "==================================" << endl;
    cout << left << setw(25) << "Customer Name:"        << name << endl;
    cout << left << setw(25) << "Units Consumed:"       << units << endl;
    cout << left << setw(25) << "Rate Per Unit:"        << ratePerUnit << endl;
    cout << left << setw(25) << "Bill Before Discount:" << billBeforeDiscount << endl;
    cout << left << setw(25) << "Discount:"             << discount << endl;
    cout << "----------------------------------" << endl;
    cout << left << setw(25) << "AMOUNT PAYABLE:"       << finalAmount << endl;
    cout << "==================================" << endl;
}

// v. Main calls everything in sequence
int main() {
    string name;
    double units;

    getCustomerDetails(name, units);

    double bill        = calculateBill(units, RATE_PER_UNIT);
    double discount    = applyDiscount(bill, units);
    double finalAmount = bill - discount;

    displayBill(name, units, RATE_PER_UNIT, bill, discount, finalAmount);

    return 0;
}
