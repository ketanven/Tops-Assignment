//Q-7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
//82746
#include <stdio.h>

int main() {
    int number;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the number in reverse order
    printf("Reversed number: ");
    while (number != 0) {
        printf("%d", number % 10);
        number /= 10;
    }
    printf("\n");

}

