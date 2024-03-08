//Q - 10. Write a program you have to make a summation of first and last Digit. (E.g., 
//1234 Ans: -5)

#include<stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;
    
    // Prompt the user to enter a number
    printf("ENTER NUMBER : ");
    scanf("%d", &number);
    
    // Extract the first digit of the number
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    
    // Extract the last digit of the number
    lastDigit = number % 10;
    
    // Calculate the sum of the first and last digits
    sum = firstDigit + lastDigit;
    
    // Display the sum
    printf("SUM OF FIRST AND LAST DIGIT : %d", sum);
    
}

