//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)


#include <stdio.h>

int main() {
    int i, num, sum = 0; // Declare variables to store loop counter, number, and sum
    
    printf("ENTER THE NUMBER = ");
    scanf("%d", &num); // Read the number from the user
    
    // Calculate the sum of squares of numbers from 1 to num
    for(i = 1; i <= num; i++){
        sum += i * i; // Add the square of current number to the sum
    }
    
    printf("SUM : %d", sum); // Display the sum
    
    return 0; // Indicate successful execution
}




