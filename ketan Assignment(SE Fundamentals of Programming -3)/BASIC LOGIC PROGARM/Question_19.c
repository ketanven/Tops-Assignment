//Q-19.Calculate compound interest
#include<stdio.h>

int main(){
	int amount, principal, compoundinst; // Declaring integer variables for amount, principal, and compound interest
	
	printf("ENTER THE TOTAL AMOUNT FOR COMPOUND INTERST :"); // Prompting the user to input the total amount for compound interest
	scanf("%d", &amount); // Reading user input for the total amount
	
	printf("ENTER THE PRINCIPAL FOR COMPOUND INTERST : "); // Prompting the user to input the principal for compound interest
	scanf("%d", &principal); // Reading user input for the principal
	
	compoundinst = amount - principal; // Calculating the compound interest
	
	printf("COMPOUND INTEREST OF GIVEN NUMBER IS : %d", compoundinst); // Displaying the calculated compound interest

}

