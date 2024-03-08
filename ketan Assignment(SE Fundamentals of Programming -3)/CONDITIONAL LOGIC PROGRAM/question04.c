//4. WAP to make simple calculator (operation include Addition, Subtraction, 
//Multiplication, Division, modulo) using conditional statement

#include<stdio.h>

int main() {
    // Declare variables to store user input and calculation results
    int num, num1, num2, sum;

    // Prompt the user to enter two numbers
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    // Display the menu options
    printf("----Menu----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter a choice: ");
    scanf("%d", &num);

    // Perform the operation based on the user's choice
    if (num == 1) {
        sum = num1 + num2;
        printf("\nAddition of Number 1 and Number 2 is: %d\n", sum);
    } else if (num == 2) {
        sum = num1 - num2;
        printf("\nSubtraction of Number 1 and Number 2 is: %d\n", sum);
    } else if (num == 3) {
        sum = num1 * num2;
        printf("\nMultiplication of Number 1 and Number 2 is: %d\n", sum);
    } else if (num == 4) {
        // Check if the second number is zero to avoid division by zero
        if (num2 != 0) {
            sum = num1 / num2;
            printf("\nDivision of Number 1 and Number 2 is: %d\n", sum);
        } else {
            printf("\nDivision by zero is not possible\n");
        }
    } else {
        printf("Invalid Choice\n");
    }

    return 0; // Added return statement to indicate successful execution
}

