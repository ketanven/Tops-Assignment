//Q-2Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Function to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }

    // Function to display the dimensions and area of the rectangle
    void display() const {
        cout << "Rectangle Dimensions - Length: " << length << " units, Width: " << width << " units" << endl;
        cout << "Area of Rectangle: " << calculateArea() << " square units" << endl;
    }
};

int main() {
    double length, width;

    // Prompt the user to enter dimensions of the rectangle
    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Create a Rectangle object with the given dimensions
    Rectangle rectangle(length, width);

    // Display the dimensions and area of the rectangle
    rectangle.display();

}

