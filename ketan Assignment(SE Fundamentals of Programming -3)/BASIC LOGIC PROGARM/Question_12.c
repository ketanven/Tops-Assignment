//Q-12. Accept number of students from user. I need to give 5 apples to each 
//student. How many apples are required?
#include<stdio.h>

int main(){
	int students, totalapples; // Declaring integer variables for number of students and total apples
	
	printf("HOW MANY STUDENTS ARE THERE (1 STUDENT = 5 APPLES)"); // Prompting the user to input the number of students
	scanf("%d", &students); // Reading user input for the number of students
	
	totalapples = students * 5; // Calculating the total number of apples required
	
	printf("TOTAL NUMBER OF APPLES YOU REQUIRED TO GIVE %d STUDENTS IS %d", students, totalapples); // Displaying the total number of apples required

}

