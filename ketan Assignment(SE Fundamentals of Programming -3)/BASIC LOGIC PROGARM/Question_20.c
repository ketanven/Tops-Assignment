//Q-20. Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary.
#include<stdio.h>

int main(){
	float salary, insurance, loan, loaninstall, remainsalary, finalsalary; // Declaring float variables for salary, insurance, loan, loan installment, remaining salary, and final salary
	
	printf("ENTER YOUR MONTHLY SALARY : "); // Prompting the user to input their monthly salary
	scanf("%f", &salary); // Reading user input for the monthly salary
	
	insurance = 0.1 * salary; // Calculating the insurance premium
	remainsalary = salary - insurance; // Calculating the remaining salary after deducting insurance premium
	loaninstall = 0.1 * remainsalary; // Calculating the loan installment
	finalsalary = remainsalary - loaninstall; // Calculating the final salary after deducting loan installment
	
	printf("YOUR MONTHLY SALARY = %.2f\n", salary); // Displaying the monthly salary with 2 decimal places
	printf("INSURANCE PREMIUM (10%%) = %.2f\n", insurance); // Displaying the insurance premium with 2 decimal places
	printf("YOUR LOAN INSTALLMENT = %.2f\n", loaninstall); // Displaying the loan installment with 2 decimal places
	printf("YOUR FINAL SALARY IS = %.2f", finalsalary); // Displaying the final salary with 2 decimal places
	
}

