//Q-5. Write a C++ program to create a class called Triangle that has private 
//member variables for the lengths of its three sides. Implement member 
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

// Define the Triangle class
class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor to initialize the Triangle object with side lengths
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to check if the triangle is equilateral
    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Function to check if the triangle is isosceles
    bool isIsosceles() {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    // Function to check if the triangle is scalene
    bool isScalene() {
        return (side1 != side2 && side1 != side3 && side2 != side3);
    }

    // Function to display the type of triangle based on side lengths
    void displayType() {
        if (isEquilateral()) {
            cout << "\nThe triangle is equilateral." << endl;
        } else if (isIsosceles()) {
            cout << "\nThe triangle is isosceles." << endl;
        } else if (isScalene()) {
            cout << "\nThe triangle is scalene." << endl;
        } else {
            cout << "\nInvalid triangle." << endl;
        }
    }
};

int main() {
    double side1, side2, side3;
    
    // Prompt the user to enter the lengths of the triangle's sides
    cout << "Enter the length of side 1: ";
    cin >> side1;
    
    cout << "Enter the length of side 2: ";
    cin >> side2;
    
    cout << "Enter the length of side 3: ";
    cin >> side3;
    
    // Create an instance of Triangle with the provided side lengths
    Triangle triangle(side1, side2, side3);
    
    // Display the type of triangle
    triangle.displayType();
    
}

