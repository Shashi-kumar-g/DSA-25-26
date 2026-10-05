#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double side;

    cout << "Enter side: ";
    cin >> side;

    double area = (sqrt(3) / 4) * side * side;

    cout << "Area of Equilateral Triangle = " << area;

    return 0;
}
