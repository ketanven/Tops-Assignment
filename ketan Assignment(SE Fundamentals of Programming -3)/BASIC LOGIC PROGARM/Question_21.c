#include<stdio.h>

int main(){
	int num1, num2, num3;
	
	printf("----Swapping numbers using a third variable----\n");
	
	printf("\nEnter number One : ");
	scanf("%d", &num1);
	printf("Enter number Two : ");
	scanf("%d", &num2);

	printf("\nBefore Swapping :-\n");
	printf("\nnum1 = %d , num2 = %d \n", num1, num2);
	
	num3 = num1; // Store the value of num1 in a temporary variable
	num1 = num2; // Assign the value of num2 to num1
	num2 = num3; // Assign the value of the temporary variable to num2
	
	printf("\nAfter Swapping :-\n");
	printf("\nnum1 = %d , num2 = %d\n", num1, num2);
	
	printf("----Swapping numbers without using a third variable----\n");
	
	printf("Before Swapping :-\n");
	printf("\nnum1 = %d , num2 = %d \n", num1, num2);
	
	num1 = num1 + num2; // Add num1 and num2 and store the result in num1
	num2 = num1 - num2; // Subtract num2 from the updated num1 and store the result in num2
	num1 = num1 - num2; // Subtract num2 from the updated num1 and store the result in num1
	
	printf("\nAfter Swapping :-\n");
	printf("\nnum1 = %d , num2 = %d\n", num1, num2);

}

