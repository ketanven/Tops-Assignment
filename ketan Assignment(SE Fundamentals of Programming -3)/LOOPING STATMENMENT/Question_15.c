//Q- 15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() {
    int num, sum = 0, count = 0; // Declare variables for number, sum, and count

    // Loop to input 10 numbers
    while (count < 10) { // Continue loop until count reaches 10
        printf("Enter Number %d: ", count + 1); // Prompt user to enter a number
        scanf("%d", &num); // Read the number entered by the user
        sum = sum + num; // Add the entered number to the sum
        count++; // Increment count to keep track of the number of inputs
    }

    // Display the sum of the 10 numbers
    printf("Sum of 10 Numbers: %d", sum);

    return 0;
}

