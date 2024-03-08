//Q-4. WAP to print table up to given numbers
#include<stdio.h>

int main() {
    int i, j, number;

    // Accept the number from the user
    printf("ENTER THE NUMBER TO PRINT THE TABLE OF : ");
    scanf("%d", &number);

    // Loop through each multiplier from 1 to 10
    for (i = 1; i <= 10; i++) {
        // Print the multiplication of the number and the current multiplier
        printf("%d x %d = %d\n", number, i, number * i);
        printf("\n"); // Add a newline after each table
    }

}

