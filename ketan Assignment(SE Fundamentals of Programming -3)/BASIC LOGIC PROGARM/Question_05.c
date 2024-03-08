//Q-5 Find Area of Cube formula : a = 6a2
#include<stdio.h>

int main(){
	int area, cube; // Declaring integer variables for area and cube
	
	printf("ENTER THE AREA OF CUBE : "); // Prompting the user to input the area of the cube
	scanf("%d", &area); // Reading user input for the area of the cube
	
	cube = 6 * area * area; // Calculating the area of the cube
	
	printf("AREA OF CUBE IS :%d", cube); // Displaying the calculated area of the cube
	
}

