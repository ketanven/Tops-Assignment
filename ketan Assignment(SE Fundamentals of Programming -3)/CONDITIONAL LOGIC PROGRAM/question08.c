//8. WAP to accept the height of a person in centimeters and categorize the 
//person according to their height.


#include<stdio.h>

int main() {
    // Declare a variable to store user input
    int centimeter;
    
    // Prompt the user to enter their height in centimeters
    printf("Enter Your Height in centimeters: ");
    // Read the height input from the user
    scanf("%d", &centimeter);
    
    // Check if the height is greater than 170 centimeters
    if (centimeter > 170) {
        printf("You're tall\n");
    } 
    // Check if the height is between 165 and 170 centimeters (inclusive)
    else if (centimeter >= 165 && centimeter <= 170) {
        printf("Your Height is Average\n");
    } 
    // If the height is less than 165 centimeters
    else {
        printf("You're Short\n");
    }

    return 0; // Added return statement to indicate successful execution
}

