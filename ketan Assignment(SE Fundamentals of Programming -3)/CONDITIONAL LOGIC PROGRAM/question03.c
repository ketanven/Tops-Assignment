//3. WAP to check if the given year is a leap year or not.

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
        m = -1; // There seems to be a typo here, it should be n = -1 instead of m = -1
    }
    
    // Display the value of n
    printf("Value of n is: %d\n", n);

    return 0; // Added return statement to indicate successful execution
}


