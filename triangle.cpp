#include <iostream>
using namespace std;

int main() {
    double base, height;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter height: ";
    cin >> height;

    double area = (base * height) / 2;

    cout << "Area of Triangle = " << area;

    return 0;
}
