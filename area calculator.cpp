#include <iostream>
#include <cmath>

using namespace std;

void displayMenu() {
    cout << "\nPogram to calculate area of objects:\n";
    cout << "1 - Area of a Square\n";
    cout << "2 - Area of a Circle\n";
    cout << "3 - Area of a Right Triangle\n";
    cout << "4 - Quit\n";
    cout << "Enter your choice: ";
}

void calculateSquareArea() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    if (side < 0) {
        cout << "Error: Side length cannot be negative.\n";
        return;
    }
    double area = side * side;
    cout << "The area of the square is: " << area << endl;
}

void calculateCircleArea() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    if (radius < 0) {
        cout << "Error: Radius cannot be negative.\n";
        return;
    }
    double area = M_PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;
}

void calculateTriangleArea() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    if (base < 0 || height < 0) {
        cout << "Error: Base and height cannot be negative.\n";
        return;
    }
    double area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                calculateSquareArea();
                break;
            case 2:
                calculateCircleArea();
                break;
            case 3:
                calculateTriangleArea();
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
