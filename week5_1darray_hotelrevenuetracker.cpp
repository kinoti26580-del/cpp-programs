//name:KINOTI EDWIN MUTUGI
//registration number:CT101/G/26580/25
//hotel revenue tracker using 1d array

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double revenue[7];
    double total = 0.0;

    for (int day = 0; day < 7; ++day) {
        cout << "Enter revenue for day " << day + 1 << ": ";
        cin >> revenue[day];
        total += revenue[day];
    }

    double average = total / 7;

    cout << fixed << setprecision(2);
    cout << "\nTotal weekly revenue: " << total << '\n';
    cout << "Average daily revenue: " << average << '\n';

    return 0;
}