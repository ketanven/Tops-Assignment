// WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>

int main() {
    // Declare variables to store the three numbers and the maximum number
    int num1, num2, num3, max;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    // Read the input from the user and store it in the variables num1, num2, and num3
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use nested ternary operators to find the maximum number among the three numbers
    // The outer ternary operator compares num1 and num2, then checks the result against num3 to find the maximum
    // The inner ternary operators compare num1 and num3, and num2 and num3 respectively
    // The maximum number is assigned to the variable max
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the maximum number along with the input numbers
    printf("Maximum number among %d, %d, and %d is %d.\n", num1, num2, num3, max);

    return 0;
}

