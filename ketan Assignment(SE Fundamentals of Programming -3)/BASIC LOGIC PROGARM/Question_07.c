//Q-7. Find area of Rectangle Formula : A=wl
#include<stdio.h>

int main(){
	float areaofrectangle, width, length; // Declaring float variables for area, width, and length
	
	printf("ENTER THE WIDTH OF RECTANGLE : "); // Prompting the user to input the width of the rectangle
	scanf("%f", &width); // Reading user input for the width of the rectangle
	
	printf("ENTER THE LENGTH OF LENGTH : "); // Prompting the user to input the length of the rectangle
	scanf("%f", &length); // Reading user input for the length of the rectangle
	
	areaofrectangle = width * length; // Calculating the area of the rectangle
	
	printf("AREA OF RECTANGLE IS : %.2f", areaofrectangle); // Displaying the calculated area of the rectangle with 2 decimal places
	
}

