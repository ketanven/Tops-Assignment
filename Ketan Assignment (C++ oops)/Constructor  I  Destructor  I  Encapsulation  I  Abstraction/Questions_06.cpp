//Q-6Write a C++ program to implement a class called Employee that has 
//private member variables for name, employee ID, and salary. Include 
//member functions to calculate and set salary based on employee 
//performance. Using of constructor

#include <iostream>

using namespace std;

// Define the Employee class
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize Employee object with name, ID, and salary
    Employee(const string& empName, int empID, double empSalary) {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    // Function to calculate and set salary based on performance rating
    void setSalary(double performanceRating) {
        if (performanceRating > 0.0 && performanceRating <= 5.0) {
            // Increase salary based on performance rating
            salary += salary * (performanceRating / 10.0);
            cout << "Salary updated based on performance." << endl;
        } else {
            cout << "Invalid performance rating. Salary remains unchanged." << endl;
        }
    }

    // Function to display employee information
    void displayInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

int main() {
    string empName;
    int empID;
    double empSalary, performanceRating;

    // Prompt the user to enter employee details
    cout << "Enter Employee Name: ";
    getline(cin, empName); // Read the entire line for the name

    cout << "Enter Employee ID: ";
    cin >> empID;

    cout << "Enter Initial Salary: $";
    cin >> empSalary;

    // Create an Employee object using the entered details
    Employee emp(empName, empID, empSalary);

    // Display initial employee information
    cout << "\nInitial Employee Information:" << endl;
    emp.displayInfo();
    cout << endl;

    // Prompt the user to enter performance rating
    cout << "Enter performance rating (1.0 - 5.0): ";
    cin >> performanceRating;

    // Set salary based on performance rating
    emp.setSalary(performanceRating);

    // Display updated employee information after setting salary
    cout << "\nUpdated Employee Information:" << endl;
    emp.displayInfo();

}

