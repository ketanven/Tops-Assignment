//Q- 17.Calculate 5 numbers from user and calculate number of even and odd using 
//of while loop

#include <stdio.h>

int main() {
    int num, count = 0, evenCount = 0, oddCount = 0;

    // Prompt the user to enter 5 numbers
    printf("Enter 5 numbers:\n");

    // Loop to input 5 numbers
    while (count < 5) {
        scanf("%d", &num); // Read the number entered by the user

        // Check if the number is even or odd
        if (num % 2 == 0) {
            evenCount++; // Increment even count if the number is even
        } else {
            oddCount++; // Increment odd count if the number is odd
        }

        count++; // Increment count
    }

    // Display the number of even and odd numbers entered by the user
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}

