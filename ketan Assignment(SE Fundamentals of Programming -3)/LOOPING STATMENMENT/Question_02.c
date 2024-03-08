//Q-2. WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>

int main() {
    int number,i;

    // Accept 5 numbers from the user and display them
    printf("ENTER 5 NUMBERS :\n");

    for (i = 1; i <= 5; i++) { // Loop to accept 5 numbers
        printf("NUMBER %d: ", i); // Prompt for each number
        scanf("%d", &number); // Accept the number
        printf("ENTERED NUMBERS : %d\n", number); // Display the entered number
    }

    return 0;
}


