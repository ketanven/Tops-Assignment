//2. Write a C program to read the value of an integer m and display the value of 
//n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0

#import <stdio.h>

int main() {
    // Declare variables to store user input and calculation results
    int m, n;
    
    // Prompt the user to enter the value of m
    printf("Enter value of m: ");
    // Read the value of m input from the user
    scanf("%d", &m);
    
    // Check the value of m
    if (m > 0) {
        // If m is greater than 0, set n to 1
        n = 1;
    } else if (m == 0) {
        // If m is equal to 0, set n to 0
        n = 0;
    } else {
        // If m is less than 0, set n to -1
        n = -1;
    }
    
    // Display the value of n
    printf("Value of n is: %d\n", n);

    return 0; // Added return statement to indicate successful execution
}

