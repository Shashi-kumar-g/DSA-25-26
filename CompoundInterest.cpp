#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, R, T, amount, CI;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time: ";
    cin >> T;

    amount = P * pow((1 + R / 100), T);
    CI = amount - P;

    cout << "Compound Interest = " << CI << endl;
    cout << "Total Amount = " << amount << endl;

    return 0;
}
