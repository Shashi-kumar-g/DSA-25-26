#include <iostream>
using namespace std;

int main() {
    double centimeter;

    cout << "Enter distance in centimeters: ";
    cin >> centimeter;

    double meter = centimeter / 100;
    double kilometer = centimeter / 100000;

    cout << "Meters = " << meter << endl;
    cout << "Kilometers = " << kilometer << endl;

    return 0;
}
