//8. Write a C++ program to implement a class called Student that has private 
//member variables for name, class, roll number, and marks. Include 
//member functions to calculate the grade based on the marks and display 
//the student's information. Accept address from each student implement 
//using of aggregation

#include <iostream>

using namespace std;

// Address class definition
class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;

public:
    // Constructor to initialize Address object
    Address(const string& street, const string& city, const string& state, const string& zipCode)
        : street(street), city(city), state(state), zipCode(zipCode) {}

    // Function to display address information
    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << " " << zipCode << endl;
    }
};

// Student class definition
class Student {
private:
    string name;
    string className;
    int rollNumber;
    double marks;
    Address address; // Aggregation: Student has an Address

public:
    // Constructor to initialize Student object
    Student(const string& studentName, const string& studentClass, int studentRollNumber, double studentMarks, const Address& studentAddress)
        : name(studentName), className(studentClass), rollNumber(studentRollNumber), marks(studentMarks), address(studentAddress) {}

    // Function to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    // Function to set student information
    void setStudentInfo(const string& studentName, const string& studentClass, int studentRollNumber, double studentMarks, const Address& studentAddress) {
        name = studentName;
        className = studentClass;
        rollNumber = studentRollNumber;
        marks = studentMarks;
        address = studentAddress;
    }

    // Function to display student information
    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << " (Grade: " << calculateGrade() << ")" << endl;
        address.displayAddress(); // Display student's address
    }
};

int main() {
    string name, className, street, city, state, zipCode;
    int rollNumber;
    double marks;

    // Prompt the user to enter student information
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Class Name: ";
    getline(cin, className);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cin.ignore(); // Clear newline character from input buffer

    cout << "Enter Marks: ";
    cin >> marks;
    cin.ignore(); // Clear newline character from input buffer

    cout << "Enter Street Address: ";
    getline(cin, street);

    cout << "Enter City: ";
    getline(cin, city);

    cout << "Enter State: ";
    getline(cin, state);

    cout << "Enter Zip Code: ";
    getline(cin, zipCode);

    // Create an Address object for the student
    Address studentAddress(street, city, state, zipCode);

    // Create a Student object and set student information
    Student student("", "", 0, 0.0, Address("", "", "", "")); // Initialize with default values
    student.setStudentInfo(name, className, rollNumber, marks, studentAddress);

    // Display student information using the Student object's member function
    cout << "\nStudent Information:" << endl;
    student.displayStudentInfo();

    return 0;
}



