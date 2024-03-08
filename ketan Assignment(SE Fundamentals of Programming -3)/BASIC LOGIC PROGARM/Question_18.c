//Q-18. Calculate person’s Annual salary
#include<stdio.h>

int main(){
	float salary, annualsalary; // Declaring float variables for salary and annual salary
	
	printf("ENTER YOUR SALARY : "); // Prompting the user to input their salary
	scanf("%f", &salary); // Reading user input for the salary
	
	annualsalary = salary * 12; // Calculating the annual salary
	
	printf("YOUR ANNUAL SALARY IS  : $ %.0f", annualsalary); // Displaying the calculated annual salary without decimal places
	
}

