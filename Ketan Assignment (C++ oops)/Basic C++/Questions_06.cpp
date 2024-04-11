//Q-6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include<iostream>

using namespace std;

// Declaration of the Person class
class Person {
private:
    // Private member variables
    string name, country;
    int age;
    
public:
    // Setter function to set the member variables
    void Set(string n, string c, int a) {
        name = n;
        country = c;
        age = a;
    }
    
    // Getter function to print the member variables
    void get() {
        cout << "\nNAME : " << name << endl;
        cout << "\nCOUNTRY : " << country << endl;
        cout << "\nAGE :" << age;
    }
};

// Main function
main() {
    // Creating an object of the Person class
    Person person;
    
    // Setting the member variables
    person.Set("ketan", "India", 22);
    
    // Printing the member variables
    person.get();
}

