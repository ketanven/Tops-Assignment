//Q-24. Accept 5 employees name and salary and count average and total salary
#include<stdio.h>

int main(){
	char name1[10], name2[10], name3[10], name4[10], name5[10]; // Declaring character arrays for employee names
	int salary1, salary2, salary3, salary4, salary5, totalsalary, averagesalary; // Declaring integer variables for employee salaries and total/average salary
	
	printf("Enter First employee Name and salary :- \n");
	printf("Name : ");
	scanf("%s", name1); // Reading employee name
	printf("Salary :");
	scanf("%d", &salary1); // Reading employee salary
	
	printf("\nEnter Secound employee Name and salary :- \n");
	printf("Name : ");
	scanf("%s", name2); // Reading employee name
	printf("Salary :");
	scanf("%d", &salary2); // Reading employee salary
	
	printf("\nEnter Third employee Name and salary :- \n");
	printf("Name : ");
	scanf("%s", name3); // Reading employee name
	printf("Salary :");
	scanf("%d", &salary3); // Reading employee salary
	
	printf("\nEnter Fourth employee Name and salary :- \n");
	printf("Name : ");
	scanf("%s", name4); // Reading employee name
	printf("Salary :");
	scanf("%d", &salary4); // Reading employee salary
	
	printf("\nEnter Fifth employee Name and salary :- \n");
	printf("Name : ");
	scanf("%s", name5); // Reading employee name
	printf("Salary :");
	scanf("%d", &salary5); // Reading employee salary
	
	totalsalary = salary1 + salary2 + salary3 + salary4 + salary5; // Calculating total salary
	averagesalary = totalsalary / 5; // Calculating average salary
	
	printf("\nTotal salary of 5 employees is : %d\n", totalsalary); // Displaying total salary
	printf("\nAverage salary of 5 employees is : %d", averagesalary); // Displaying average salary
	
}

