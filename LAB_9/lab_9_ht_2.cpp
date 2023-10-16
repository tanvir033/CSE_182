//Write a C++ program to find the diameter, circumference, and area of a circle using functions.

#include <iostream>
#include <cmath>

using namespace std;


double calculateDiameter(double r) {
    return 2 * r;
}


double calculateCircumference(double r) {
    return 2 * M_PI * r;
}


double calculateArea(double r) {
    return M_PI * pow(r, 2);
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double diameter = calculateDiameter(radius);
    double circumference = calculateCircumference(radius);
    double area = calculateArea(radius);

    cout << "Diameter of the circle: " << diameter << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;

    return 0;
}


