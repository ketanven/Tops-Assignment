//Q-8. Find circumference of Rectangle formula : C = 4 * a
#include<stdio.h>

int main(){
	float cirofrectangle, area; // Declaring float variables for circumference and area
	
	printf("ENTER THE AREA FOR CIRCUMFERENCE OF RECTANGLE : "); // Prompting the user to input the area for circumference of the rectangle
	scanf("%f", &area); // Reading user input for the area
	
	cirofrectangle = 4 * area; // Calculating the circumference of the rectangle
	
	printf("CIRCUMFERENCE OF RECTANGLE IS : %.0f", cirofrectangle); // Displaying the calculated circumference of the rectangle without decimal places
	
}

