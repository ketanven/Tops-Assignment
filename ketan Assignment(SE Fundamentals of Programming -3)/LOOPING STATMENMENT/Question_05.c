//Q-5. WAP to print factorial of given number
#include <stdio.h>

int main() {
    int num,i;
    float factorial = 1;

    // Accept the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate factorial only if the number is non-negative
    for (i = 1; i <= num; i++) {
        factorial = factorial* i;
    }
    
    // Print the factorial
    printf("Factorial of %d = %.0f", num, factorial);

    return 0;
}

