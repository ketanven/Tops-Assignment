//Q-25. Accept 5 expense from user and find average of expense
#include<stdio.h>
#include<stdio.h>

int main(){
	int expensive1, expensive2, expensive3, expensive4, expensive5, total, average; // Declaring integer variables for expenses and total/average expenses
	
	printf("First Expensive :");
	scanf("%d", &expensive1);
	
	printf("\nSecond Expensive :");
	scanf("%d", &expensive2);
	
	printf("\nThird Expensive :");
	scanf("%d", &expensive3);
	
	printf("\nFourth Expensive :");
	scanf("%d", &expensive4);
	
	printf("\nFifth Expensive :");
	scanf("%d", &expensive5);
	
	total = expensive1 + expensive2 + expensive3 + expensive4 + expensive5; // Calculating total expenses
	average = total / 5; // Calculating average expenses
	
	printf("\nAverage of all Expenses is : %d", average); // Displaying average expenses

}

