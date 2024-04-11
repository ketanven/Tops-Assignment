//Q-1. Write a program to find the multiplication values and the cubic values using
//inline function

#include<iostream>

using namespace std;

// Inline function to calculate the multiplication of two numbers
inline int multiple(int a, int b) {
    return a * b;
}

// Inline function to calculate the cubic value of a number
inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    // Asking the user to input the first number
    cout << "ENTER NUMBER ONE :";
    cin >> num1;

    // Asking the user to input the second number
    cout << "ENTER NUNBER TWO :";
    cin >> num2;
    
    // Printing the multiplication value of the given numbers
    cout << "\nMULTIPLICATION OF GIVEN NUMBER IS :" << multiple(num1, num2) << endl;
    
    // Printing the cubic value of the first number
    cout << "\nCUBIC VALUE OF " << num1 << " IS :" << cubic(num1) << endl;
    
    // Printing the cubic value of the second number
    cout << "\nCUBIC VALUE OF " << num2 << " IS :" << cubic(num2);

   
}

