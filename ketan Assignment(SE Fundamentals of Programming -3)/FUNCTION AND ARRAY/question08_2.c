//Q- 8. WAP to reverse a string and check that the string is palindrome or not
//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//andage
//b. Write a program of structure for five employee that 
//provides the following information -print and display
//empno, empname, address andage


#include <stdio.h>

// Define a structure for an employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to print information of an employee
void printEmployeeInfo(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");
}

int main() {
    // Create an array of structures for five employees
    struct Employee employees[5];
	int i;
    // Input information for each employee
    for (i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname); // Assuming no spaces in names
        printf("Address: ");
        scanf("%s", employees[i].address); // Assuming no spaces in addresses
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    // Print information of all employees
    printf("\nInformation of all employees:\n");
    
    for (i = 0; i < 5; i++) {
        printf("Details of Employee %d:\n", i + 1);
        printEmployeeInfo(employees[i]);
    }

    return 0;
}

