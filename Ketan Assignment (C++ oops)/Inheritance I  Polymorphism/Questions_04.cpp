//Q-4Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <string>
using namespace std;

// Class to store basic student information
class Student {
protected:
    string name;
    int rollNumber;

public:
    // Function to set student name
    void setName(const string& studentName) {
        name = studentName;
    }

    // Function to set student roll number
    void setRollNumber(int studentRollNumber) {
        rollNumber = studentRollNumber;
    }

    // Function to display student information
    void displayStudentInfo() const {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Class to store subject-wise marks
class Marks {
protected:
    int marksMath;
    int marksScience;
    int marksEnglish;

public:
    // Function to set marks in Math
    void setMathMarks(int mathMarks) {
        marksMath = mathMarks;
    }

    // Function to set marks in Science
    void setScienceMarks(int scienceMarks) {
        marksScience = scienceMarks;
    }

    // Function to set marks in English
    void setEnglishMarks(int englishMarks) {
        marksEnglish = englishMarks;
    }

    // Function to calculate and return total marks
    int calculateTotalMarks() const {
        return marksMath + marksScience + marksEnglish;
    }

    // Function to display subject-wise marks
    void displaySubjectMarks() const {
        cout << "Marks in Math: " << marksMath << endl;
        cout << "Marks in Science: " << marksScience << endl;
        cout << "Marks in English: " << marksEnglish << endl;
    }
};

// Class to display student mark sheet using multiple inheritance
class MarkSheet : public Student, public Marks {
public:
    // Function to display complete mark sheet
    void displayMarkSheet() const {
        cout << "------ Mark Sheet ------" << endl;
        displayStudentInfo();    // Call base class function to display student info
        displaySubjectMarks();   // Call base class function to display subject-wise marks
        cout << "Total Marks: " << calculateTotalMarks() << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    // Create MarkSheet object
    MarkSheet markSheet;

    // Get input from user to set student information and marks
    string name;
    int rollNumber, mathMarks, scienceMarks, englishMarks;

    cout << "Enter Student Name: ";
    getline(cin, name);
    markSheet.setName(name);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    markSheet.setRollNumber(rollNumber);

    cout << "Enter Marks in Math: ";
    cin >> mathMarks;
    markSheet.setMathMarks(mathMarks);

    cout << "Enter Marks in Science: ";
    cin >> scienceMarks;
    markSheet.setScienceMarks(scienceMarks);

    cout << "Enter Marks in English: ";
    cin >> englishMarks;
    markSheet.setEnglishMarks(englishMarks);

    // Display the student mark sheet
    markSheet.displayMarkSheet();

}


