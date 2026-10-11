//name:KINOTI EDWIN MUTUGI
//reg no:CT101/G/26580/25
//course:COMPUTER SCIENCE
//this is a simple calculator that performs basic arithmetic operations 

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1, num2, result;
    char operation;

    // Prompt the user for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on the operator
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1;
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}




