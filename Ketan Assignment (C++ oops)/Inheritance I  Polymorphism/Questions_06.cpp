//Q-6 Write a C++ Program to show access to Private Public and Protected using 
//Inheritance
#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    // Constructor to initialize variables
    Base(int prv, int prot, int pub) : privateVar(prv), protectedVar(prot), publicVar(pub) {}

    // Function to display the values of base class variables
    void displayBase() {
        cout << "Base Class:" << endl;
        cout << "Private Variable: Cannot access directly from derived class" << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Constructor to initialize base class variables
    Derived(int prv, int prot, int pub) : Base(prv, prot, pub) {}

    // Function to display the values of derived class variables
    void displayDerived() {
        cout << "Derived Class:" << endl;
        // Cannot access privateVar directly from derived class
        // cout << "Private Variable: " << privateVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    // Create an object of Derived class
    Derived derivedObj(10, 20, 30);

    // Access and display base class variables using derived class object
    derivedObj.displayBase();

    cout << endl;

    // Access and display derived class variables using derived class object
    derivedObj.displayDerived();

 
}

