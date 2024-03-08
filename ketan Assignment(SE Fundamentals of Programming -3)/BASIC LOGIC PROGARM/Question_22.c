//Q-22. Calculate compound interest(Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include<stdio.h>

int main(){
	float amount, principle, rate, time, compoundintrest; // Declaring float variables for amount, principle, rate, time, and compound interest
	
	printf("Enter Principle amount :");
	scanf("%f", &principle);
	printf("Enter Rate :");
	scanf("%f", &rate);
	printf("Enter Time :");
	scanf("%f", &time);
	
	amount = principle * (1 + rate / 100) * time; // Calculating the total amount
	compoundintrest = amount - principle; // Calculating the compound interest
	
	printf("\nCompound Intrest is : %.2f", compoundintrest); // Displaying the compound interest with 2 decimal places
	
}

