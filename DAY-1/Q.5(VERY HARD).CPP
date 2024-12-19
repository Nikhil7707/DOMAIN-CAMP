//VERY HARD
/*Create a C++ program that demonstrates function overloading to calculate the area of different geometric shapes. Implement three overloaded functions named calculateArea that compute the area for the following shapes:
Circle: Accepts the radius.
Rectangle: Accepts the length and breadth.
Triangle: Accepts the base and height.
Additionally, use a menu-driven program to let the user choose the type of shape and input the respective parameters. Perform necessary validations on the input values.*/
#include <iostream>
#include <cmath>
using namespace std;

class Geometry {
public:
    // Function to calculate the area of a circle
    double calculateAreaCircle(double radius) {
        if (radius <= 0) {
            cout << "Invalid radius. Please enter a positive value." << endl;
            return -1;
        }
        return 3.14159 * radius * radius;
    }

    // Function to calculate the area of a rectangle
    double calculateAreaRectangle(double length, double breadth) {
        if (length <= 0 || breadth <= 0) {
            cout << "Invalid dimensions. Length and breadth must be positive values." << endl;
            return -1;
        }
        return length * breadth;
    }

    // Function to calculate the area of a triangle
    double calculateAreaTriangle(double base, double height) {
        if (base <= 0 || height <= 0) {
            cout << "Invalid dimensions. Base and height must be positive values." << endl;
            return -1;
        }
        return 0.5 * base * height;
    }
};

int main() {
    Geometry geo;
    int choice;
    double result, dimension1, dimension2;

    do {
        cout << "\nMenu:\n";
        cout << "1. Calculate Area of Circle\n";
        cout << "2. Calculate Area of Rectangle\n";
        cout << "3. Calculate Area of Triangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius of the circle: ";
                cin >> dimension1;
                result = geo.calculateAreaCircle(dimension1);
                if (result != -1) {
                    cout << "Area of Circle: " << result << endl;
                }
                break;

            case 2:
                cout << "Enter length of the rectangle: ";
                cin >> dimension1;
                cout << "Enter breadth of the rectangle: ";
                cin >> dimension2;
                result = geo.calculateAreaRectangle(dimension1, dimension2);
                if (result != -1) {
                    cout << "Area of Rectangle: " << result << endl;
                }
                break;

            case 3:
                cout << "Enter base of the triangle: ";
                cin >> dimension1;
                cout << "Enter height of the triangle: ";
                cin >> dimension2;
                result = geo.calculateAreaTriangle(dimension1, dimension2);
                if (result != -1) {
                    cout << "Area of Triangle: " << result << endl;
                }
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
