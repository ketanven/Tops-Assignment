//Q- 16.Calculate the Sum ofNatural Numbers Using the While Loop


#include<stdio.h>

int main(){
    // Declare variables
	int i, num, sum = 0;
	
	// Prompt the user to enter a number
	printf("Enter Number: ");
	scanf("%d", &num);
	
	// Check if the entered number is non-positive
	if(num <= 0){
	    // If the number is non-positive, print an error message
		printf("Please Enter a Positive Number");
	}
	else{
	    // If the number is positive, initialize loop counter and sum
	    i = 1;
	    // Loop to calculate the sum of natural numbers up to the entered number
		while(i <= num){
		    // Add the current value of i to the sum
			sum = i + sum;
			// Increment the loop counter
			i++;
		}
		// Print the sum of natural numbers
		printf("Sum of natural Numbers is: %d", sum);
	}
	return 0;
}


