//Q-8. Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading

#include <iostream>

using namespace std;

// Function to perform integer addition
int calculate(int a, int b) {
    return a + b;
}

// Function to perform double precision addition
double calculate(double a, double b) {
    return a + b;
}

// Function to perform integer subtraction
int calculate(int a, int b, int c) {
    return a - b - c;
}

// Function to perform integer multiplication
int calculate(int a, int b, int c, int d) {
    return a * b * c * d;
}

// Function to perform double precision division
double calculate(float a, float b) {
    if (b != 0.0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main() {
    int result1, result2, result3;
    double result4, result5;

    // Addition
    result1 = calculate(10, 5);
    cout << "10 + 5 = " << result1 << endl;

    result4 = calculate(10.5, 5.3);
    cout << "10.5 + 5.3 = " << result4 << endl;

    // Subtraction
    result2 = calculate(20, 10, 5);
    cout << "20 - 10 - 5 = " << result2 << endl;

    // Multiplication
    result3 = calculate(2, 3, 4, 5);
    cout << "2 * 3 * 4 * 5 = " << result3 << endl;

    // Division
    result5 = calculate(15.0, 3.0);
    cout << "15.0 / 3.0 = " << result5 << endl;

    // Attempt to divide by zero
    result5 = calculate(10.0, 0.0);

}

