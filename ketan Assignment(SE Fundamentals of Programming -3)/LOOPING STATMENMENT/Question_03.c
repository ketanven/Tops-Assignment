//Q- 3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers


#include<stdio.h>

int main(){
	
	// Declare variables to store user input and counts
	int number, i, even = 0, odd = 0, sumofeven = 0, sumofodd = 0;
	
	// Loop 10 times to get 10 numbers from the user
	for(i = 0; i < 10; i++){
		printf("ENTER YOUR NUMBERS: ");
		scanf("%d", &number);
		
		// Check if the number is even
		if(number % 2 == 0){
			even = even + 1;    // Increment count of even numbers
			sumofeven = sumofeven + number;  // Add even number to even sum
		}
		else{
			odd = odd + 1;      // Increment count of odd numbers
			sumofodd = sumofodd + number;    // Add odd number to odd sum
		}
	}
	
	// Print the total count of even and odd numbers, and their sums
	printf("TOTAL ENTERED EVEN NUMBERS : %d \n", even);
	printf("TOTAL ENTERED ODD NUMBERS :  %d \n", odd);
	printf("TOTAL SUM OF EVEN NUMBERS: %d \n", sumofeven);
	printf("TOTAL sum of odd numbers: %d", sumofodd);
	
}

