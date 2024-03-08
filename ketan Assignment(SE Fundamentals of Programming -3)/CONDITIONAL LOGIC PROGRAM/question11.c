//WAP to find number is even or odd using ternary operator

#include<stdio.h>

int main() {
    // Declare a variable to store the input number
    int num;
    
    // Ask the user to enter a number
    printf("Enter Number: ");
    
    // Read the number entered by the user
    scanf("%d", &num);
    
    // Using a ternary operator to check if the number is even or odd
    // The condition (num % 2 == 0) checks if the remainder of the number divided by 2 is 0
    // If the remainder is 0, the number is even; otherwise, it's odd
    (num % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");
    
    // Return 0 to indicate successful execution of the program
    return 0;
}

