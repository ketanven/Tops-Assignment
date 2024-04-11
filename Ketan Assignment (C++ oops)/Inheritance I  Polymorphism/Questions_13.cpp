//Q-13. Write a program to find the max number from given two numbers 
//using friend function
#include <iostream>

using namespace std;

// Forward declaration of class
class NumberPair;

// Friend function declaration (outside the class)
int findMax(const NumberPair pair);

// Class representing a pair of numbers
class NumberPair {
private:
    int first;
    int second;

public:
    // Constructor to initialize the pair of numbers
    NumberPair(int a, int b) : first(a), second(b) {}

    // Declare findMax as a friend function of this class
    friend int findMax(const NumberPair pair);
};

// Friend function definition (outside the class)
int findMax(const NumberPair pair) {
    // Compare the two numbers and return the maximum
    return (pair.first > pair.second) ? pair.first : pair.second;
}

int main() {
    // Create a NumberPair object with two numbers
    NumberPair pair(10, 20);

    // Call the friend function to find the maximum number
    int maxNumber = findMax(pair);

    // Display the maximum number
    cout << "Maximum number: " << maxNumber << endl;

}

