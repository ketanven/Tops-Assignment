//Q- 13. calculate the Factorial of a Given Number using while loop


#include <stdio.h>

int main() {
    // Declare variables to store the number and its factorial
    int num, fac = 1;

    // Prompt the user to enter a positive number
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Check if the entered number is negative
    if (num < 0) {
        printf("\nEnter a positive number!!");
    } 
    else {
        // Calculate the factorial using a while loop
        while (num > 0) {
            fac =  fac * num; // Multiply fac by num and store the result in fac
            --num; // Decrement num by 1
        }
        
        // Print the factorial
        printf("Factorial : %d", fac);
    }

    return 0;
}

