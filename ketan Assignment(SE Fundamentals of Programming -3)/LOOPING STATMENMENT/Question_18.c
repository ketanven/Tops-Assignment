//Q_ 18.Write a C Program to Print the Multiplication Table of N
//i. E.g. 5 * 1 = 5
//ii. 5 * 2 = 10
//1. .
//2. .
//iii. 5 * 10 = 50

#include <stdio.h>

int main() {
    int N ,i;

    // Prompt the user to enter the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Validate if N is non-positive
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } 
    else {
        // Print the multiplication table of N from 1 to 10
        printf("Multiplication table of %d:\n", N);
        for (i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", N, i, N * i);
        }
    }

    return 0;
}

