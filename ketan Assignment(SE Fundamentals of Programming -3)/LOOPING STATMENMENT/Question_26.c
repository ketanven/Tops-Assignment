//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)


#include <stdio.h>


#include <stdio.h>

int main() {
    int i, j, num, sum = 0; // Declare variables to store loop counters, number, and sum
    
    printf("ENTER THE NUMBER = ");
    scanf("%d", &num); // Read the number from the user
    
    // Nested loops to calculate the sum of numbers from 1 to num
    for(i = 1; i <= num; i++){
        for(j = 1; j <= i; j++){
            sum += j; // Add the current number to the sum
        }
    }
    
    printf("SUM : %d", sum); // Display the sum
    
    return 0; // Indicate successful execution
}





