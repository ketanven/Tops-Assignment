//13. WAP to find minimum number among 3 numbers using ternary operator


#include<stdio.h>

int main() {
    // Declare variables to store the three numbers and the minimum number
    int num1, num2, num3, min;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    // Read the input from the user and store it in the variables num1, num2, and num3
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use nested ternary operators to find the minimum number among the three numbers
    // The outer ternary operator compares num1 and num2, then checks the result against num3 to find the minimum
    // The inner ternary operators compare num1 and num3, and num2 and num3 respectively
    // The minimum number is assigned to the variable min
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Print the minimum number along with the input numbers
    printf("Minimum number among %d, %d, and %d is %d.\n", num1, num2, num3, min);

    return 0;
}

