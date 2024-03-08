//Q-9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>


int main() {
    int number, digit, sum = 0;

    // Accept the number from the user
    printf("ENTER A NUMBER: ");
    scanf("%d", &number);
   
    // Calculate the summation of digits
    while (number != 0) {
        digit = number % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit
    }

    // Print the summation
    printf("SUMMATION OF GIVEN DIGITS = %d\n", sum);
    
}

