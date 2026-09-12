#include <iostream>
using namespace std;


double calculateArea(double side) {
    return side * side;
}

double calculateArea(double length, double width) {
    return length * width;
}


double calculateArea(double base, double height, int) {
    return 0.5 * base * height;
}

int main() {
    double side, length, width, base, height;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    cout << "\nArea of square   = " << calculateArea(side) << endl;
    cout << "Area of rectangle = " << calculateArea(length, width) << endl;
    cout << "Area of triangle  = " << calculateArea(base, height, 1) << endl;

    return 0;
}
