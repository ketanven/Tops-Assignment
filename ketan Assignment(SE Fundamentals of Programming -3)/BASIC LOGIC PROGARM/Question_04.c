//Q-4 Find Area of Square formula : a = a2
#include<stdio.h>

int main(){
	int area, areaofsquare; // Declaring integer variables for area of square and area of circle
	
	printf("ENTER AREA OF SQUARE : "); // Prompting the user to input the area of the square
	scanf("%d", &area); // Reading user input for the area of the square
	
	areaofsquare = area * area; // Calculating the area of the square
	
	printf("AREA OF CIRCLE IS : %d", areaofsquare); // Displaying the calculated area of the circle

}

