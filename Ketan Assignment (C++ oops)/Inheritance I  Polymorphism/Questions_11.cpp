//Q-11. Write a program to calculate the area of circle, rectangle and triangle 
//using Function Overloading
//Rectangle: Area * breadth 
//Triangle: ½ *Area* breadth 
//Circle: Pi * Area *Area

#include <iostream>

using namespace std;

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    // Variables to store user input
    double length, breadth, base, height, radius;

    // Get input for rectangle dimensions
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    // Calculate and display the area of rectangle
    double rectangleArea = calculateArea(length, breadth);
    cout << "Area of rectangle: " << rectangleArea << endl;

    // Get input for triangle dimensions
    cout << "\nEnter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;

    // Calculate and display the area of triangle
    double triangleArea = calculateArea(base, height);
    cout << "Area of triangle: " << triangleArea << endl;

    // Get input for circle radius
    cout << "\nEnter radius of circle: ";
    cin >> radius;

    // Calculate and display the area of circle
    double circleArea = calculateArea(radius);
    cout << "Area of circle: " << circleArea << endl;

}

