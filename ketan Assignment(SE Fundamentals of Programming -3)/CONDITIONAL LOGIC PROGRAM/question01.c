//1. Write a C program to accept two integers and check whether they are equal 
//or not

#include<stdio.h>

int main() {
    // Declare variables to store user input
    int num1, num2;
    
    // Prompt the user to enter the first number
    printf("Enter Number 1: ");
    // Read the first number input from the user
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter Number 2: ");
    // Read the second number input from the user
    scanf("%d", &num2);
    
    // Check if the two numbers are equal
    if (num1 == num2) {
        // If the numbers are equal, print a message indicating that
        printf("\nNumber 1 and Number 2 are equal.\n");
    } else {
        // If the numbers are not equal, print a message indicating that
        printf("\nNumber 1 and Number 2 are not equal.\n");
    }

    return 0; // Added return statement to indicate successful execution
}

