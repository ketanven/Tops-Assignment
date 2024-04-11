//Q-3. Write a C++ program to create a class called Car that has private 
//member variables for company, model, and year. Implement member 
//functions to get and set these variables.

#include <iostream>

using namespace std;

// Define the Car class
class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor to initialize the Car object
    Car(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    // Getter function to retrieve the company
    string getCompany() const {
        return company;
    }

    // Setter function to set the company
    void setCompany(const string& c) {
        company = c;
    }

    // Getter function to retrieve the model
    string getModel() const {
        return model;
    }

    // Setter function to set the model
    void setModel(const string& m) {
        model = m;
    }

    // Getter function to retrieve the year
    int getYear() const {
        return year;
    }

    // Setter function to set the year
    void setYear(int y) {
        year = y;
    }
};

int main() {
    // Create an instance of Car
    Car myCar("Toyota", "Camry", 2022);

    // Display the initial details of the car
    cout << "Initial Details:" << endl;
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    // Update the car details
    myCar.setModel("Corolla");
    myCar.setYear(2023);

    // Display the updated details of the car
    cout << "\nUpdated Details:" << endl;
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

}

