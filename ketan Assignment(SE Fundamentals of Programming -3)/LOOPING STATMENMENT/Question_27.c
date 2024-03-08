//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6...........n


#include <stdio.h>

int main() {
    int num;
    double i, sum = 0; // Declare variables to store the number, loop counter, and sum
    
    printf("ENTER THE NUMBER = ");
    scanf("%d", &num); // Read the number from the user
    
    // Loop to calculate the sum of the series
    for(i = 1; i <= num; i++){
        if((int)i % 2 == 1){
            sum += i / (i + 1); // Add the fraction i/(i+1) if i is odd
        }
        else{
            sum -= i / (i + 1); // Subtract the fraction i/(i+1) if i is even
        }
    }
    
    printf("SUM : %.2f", sum); // Display the sum
    
    return 0; // Indicate successful execution
}


