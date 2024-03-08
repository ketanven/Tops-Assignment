//WAP to check whether a number is negative, positive or zero.

#include<stdio.h>

int main() {
    // Declare a variable to store the input number
    int num;
    
    // Ask the user to enter a number
    printf("Enter Number: ");
    
    // Read the number entered by the user
    scanf("%d", &num);
    
    // Check if the number is greater than 0
    if(num > 0) {
        // If it's greater than 0, it's positive
        printf("\nNumber is Positive: %d", num);
    }
    // If the number is less than 0
    else if(num < 0) {
        // If it's less than 0, it's negative
        printf("\nNumber is Negative: %d", num);
    }
    // If the number is neither greater than nor less than 0, it must be 0
    else {
        // So, it's zero
        printf("\nNumber is Zero!");
    }
    
    // Return 0 to indicate successful execution of the program
    return 0;
}

