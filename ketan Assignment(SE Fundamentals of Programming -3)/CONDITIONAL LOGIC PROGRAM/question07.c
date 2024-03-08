//7. Accept marks from user and check pass or fail


#include<stdio.h>

int main() {
    // Declare a variable to store user input
    int mark;
    
    // Prompt the user to enter their marks (out of 500)
    printf("Enter Your marks (from 500): ");
    // Read the marks input from the user
    scanf("%d", &mark);
    
    // Check if the marks are greater than 380 (passing marks)
    if (mark > 380) {
        printf("You pass\n");
    } 
    // If the marks are not greater than 380, the user fails
    else {
        printf("You fail\n");
    }

    return 0; // Added return statement to indicate successful execution
}

