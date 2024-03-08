//WAP to find the largest of three numbers

#include<stdio.h>

int main() {
    // WAP to find the largest of three numbers
    
    // Declare variables to store the three numbers
    int num1, num2, num3;
    
    // Prompt the user to enter three numbers
    printf("Enter Number 1: ");
    // Read the input for the first number
    scanf("%d", &num1);
    
    printf("Enter Number 2: ");
    // Read the input for the second number
    scanf("%d", &num2);
    
    printf("Enter Number 3: ");
    // Read the input for the third number
    scanf("%d", &num3);
    
    // Check conditions to find the largest number among the three
    if (num1 > num2 && num1 > num3) {
        printf("\nNumber 1 is largest: %d", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("\nNumber 2 is largest: %d", num2);
    } else {
        printf("\nNumber 3 is largest: %d", num3);
    }
    
    return 0;
}

