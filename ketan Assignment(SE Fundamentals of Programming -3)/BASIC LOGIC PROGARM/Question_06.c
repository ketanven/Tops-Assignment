//Q-6. Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>

int main(){
	float areaoftriangle, base, height; // Declaring float variables for area, base, and height
	
	printf("ENTER THE BASE OF TRIANGLE: "); // Prompting the user to input the base of the triangle
	scanf("%f", &base); // Reading user input for the base of the triangle
	
	printf("ENTER THE HEIGHT OF TRIANGLE: "); // Prompting the user to input the height of the triangle
	scanf("%f", &height); // Reading user input for the height of the triangle
	
	areaoftriangle = (base * height) / 2; // Calculating the area of the triangle
	
	printf("AREA OF TRIANGLE IS : %.2f", areaoftriangle); // Displaying the calculated area of the triangle with 2 decimal places

}

