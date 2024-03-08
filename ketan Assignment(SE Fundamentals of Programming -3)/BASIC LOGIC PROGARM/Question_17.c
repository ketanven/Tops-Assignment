//Q-17.Calculate person’s insurance premium based on salary
#include<stdio.h>
int main(){
	float salary,premium;
	
	printf("ENTER YOUR SALARY : ");
	scanf("%f",&salary);
	
	premium = 0.10 * salary;
	
	printf("\nYOUR INSURANCE PREMIUM IS : %.2f",premium);
}

