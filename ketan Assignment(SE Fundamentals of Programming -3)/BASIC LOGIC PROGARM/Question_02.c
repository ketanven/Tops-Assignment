//2. Write a program to make Simple calculator (to make addition, subtraction, 
//multiplication, division and modulo)
#include<stdio.h>

int main(){
	int num1, num2, choice; // Declaring integer variables for numbers and choice
	
	printf("ENTER FIRST NUMBER\n"); // Prompting the user to input the first number
	scanf("%d", &num1); // Reading user input for the first number
	
	printf("ENTER SECOND NUMBER\n"); // Prompting the user to input the second number
	scanf("%d", &num2); // Reading user input for the second number
	
	// Displaying menu options for arithmetic operations
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulus\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d", &choice); // Reading user choice
	
	// Switch statement to perform the selected arithmetic operation
	switch(choice){
		case 1:
			printf(" Addition is :%d", num1 + num2); // Addition
			break;
		case 2:
			printf(" Subtraction is :%d", num1 - num2); // Subtraction
			break;
		case 3:
			printf(" Multiplication is :%d", num1 * num2); // Multiplication
			break;
		case 4:
			printf(" Division is :%d", num1 / num2); // Division
			break;
		case 5:
			printf(" Modulus is :%d", num1 % num2); // Modulus
			break;
		default:
			printf("INVALID NUMBER\n"); // Handling invalid input
	}

}

