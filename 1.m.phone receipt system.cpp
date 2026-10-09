// KINOTI EDWIN MUTUGI
// CT101/G/26580/25

// This program is a simple phone receipt system that allows users to input their phone purchase details and generates a receipt.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string customerName;
    string phoneModel;
    int quantityBought;
    double pricePerPhone;

    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantityBought;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    const double totalSalesAmount = quantityBought * pricePerPhone;

    cout << fixed << setprecision(2);
    cout << "\n========== CUSTOMER RECEIPT ==========\n";
    cout << "Customer name:       " << customerName << '\n';
    cout << "Phone model:         " << phoneModel << '\n';
    cout << "Quantity bought:     " << quantityBought << '\n';
    cout << "Price per phone:     " << pricePerPhone << '\n';
    cout << "Total sales amount:  " << totalSalesAmount << '\n';
    cout << "=======================================\n";

    return 0;
}
