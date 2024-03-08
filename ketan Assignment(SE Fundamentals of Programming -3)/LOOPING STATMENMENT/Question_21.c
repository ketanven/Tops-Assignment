//22. Accept 3 numbers from user using while loop and check each numbers 
//palindrome

#include <stdio.h>

int main() {
    int count = 0; // Initialize count to keep track of input numbers
    int number, reversedNumber, remainder;

    // Accept three numbers from the user using a while loop
    while (count < 3) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        // Store the original number in a variable
        int originalNumber = number;

        // Initialize reversed number to 0
        reversedNumber = 0;

        // Reverse the number
        while (number != 0) {
            remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }

        // Check if the original number is equal to the reversed number
        if (originalNumber == reversedNumber) {
            printf("%d is a palindrome.\n", originalNumber);
        } else {
            printf("%d is not a palindrome.\n", originalNumber);
        }

        // Increment count
        count++;
    }

    return 0;
}

