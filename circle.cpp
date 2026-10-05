#include <iostream>
using namespace std;

int main() {
    double r;
    const double pi = 3.14159;

    cout << "Enter radius: ";
    cin >> r;

    double diameter = 2 * r;
    double circumference = 2 * pi * r;
    double area = pi * r * r;

    cout << "Diameter = " << diameter << endl;
    cout << "Circumference = " << circumference << endl;
    cout << "Area = " << area << endl;

    return 0;
}
