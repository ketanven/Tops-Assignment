//Q-11. Find circumference of square formula : C = 4 * a
#include<stdio.h>

int main(){
	float cirofsquare, area; // Declaring float variables for circumference and area
	
	printf("ENTER THE AREA OF SQUARE : "); // Prompting the user to input the area of the square
	scanf("%f", &area); // Reading user input for the area
	
	cirofsquare = 4 * area; // Calculating the circumference of the square
	
	printf("CIRCUMFERENCE OF SQUARE IS :%.2f", cirofsquare); // Displaying the calculated circumference of the square with 2 decimal places

}

