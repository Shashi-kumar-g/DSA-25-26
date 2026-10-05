#include <iostream>
using namespace std;

int main() {
    double P, R, T, SI, amount;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time: ";
    cin >> T;

    SI = (P * R * T) / 100;
    amount = P + SI;

    cout << "Simple Interest = " << SI << endl;
    cout << "Total Amount = " << amount << endl;

    return 0;
}
