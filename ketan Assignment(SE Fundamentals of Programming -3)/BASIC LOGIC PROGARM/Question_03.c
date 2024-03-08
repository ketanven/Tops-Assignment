//Q-3. WAP to Find Area And Circumference of Circle
#include<stdio.h>

int main(){
	float r, area, circum; // Declaring float variables for radius, area, and circumference
	
	printf("ENTER RADIUS OF CIRCLE : "); // Prompting the user to input the radius of the circle
	scanf("%f", &r); // Reading user input for the radius
	
	area = 3.14 * r * r; // Calculating area of the circle
	circum = 2 * 3.14 * r; // Calculating circumference of the circle
	
	printf("Ara of Circle is :%.2f \n", area); // Displaying the calculated area with 2 decimal places
	printf("Circumference of Circle is :%.2f \n", circum); // Displaying the calculated circumference with 2 decimal places

}

