#include <iostream>
using namespace std;

int main() {
    double fahrenheit;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Celsius = " << celsius;

    return 0;
}
