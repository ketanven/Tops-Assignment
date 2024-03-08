//Q-9. Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>

int main(){
	float ciroftriangle, side1, side2, side3; // Declaring float variables for circumference and sides
	
	printf("ENTER THE LENGTH OF SIDE 1 :  "); // Prompting the user to input the length of side 1
	scanf("%f", &side1); // Reading user input for side 1
	
	printf("ENTER THE LENGTH OF SIDE 2 : "); // Prompting the user to input the length of side 2
	scanf("%f", &side2); // Reading user input for side 2
	
	printf("ENTER THE LENGTH OF SIDE 3 : "); // Prompting the user to input the length of side 3
	scanf("%f", &side3); // Reading user input for side 3
	
	ciroftriangle = side1 + side2 + side3; // Calculating the circumference of the triangle
	
	printf(" CIRCUMFERENCE OF TRIANGLE is : %.2f", ciroftriangle); // Displaying the calculated circumference of the triangle with 2 decimal places
	
}

