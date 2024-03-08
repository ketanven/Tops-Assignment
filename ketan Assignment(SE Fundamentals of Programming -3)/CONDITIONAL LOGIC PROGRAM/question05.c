//5. Check Number Is Positive or Negative

#include<stdio.h>

int main() {
    // Declare a variable to store user input
    int num;
    
    // Prompt the user to enter a number
    printf("Enter Number: ");
    // Read the number input from the user
    scanf("%d", &num);
    
    // Check if the number is positive
    if (num > 0) {
        printf("Number is positive\n");
    } 
    // Check if the number is negative
    else if (num < 0) {
        printf("Number is negative\n");
    } 
    // If the number is not positive or negative, it must be zero
    else {
        printf("Number is 0\n");
    }

    return 0; // Added return statement to indicate successful execution
}

