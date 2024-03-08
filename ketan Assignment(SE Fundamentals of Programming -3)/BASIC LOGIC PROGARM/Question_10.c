//Q-10. find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>

int main(){
	float areaofrectp, width, height, length; // Declaring float variables for area, width, height, and length
	
	printf("ENTER THE WIDTH OF PRISM : "); // Prompting the user to input the width of the prism
	scanf("%f", &width); // Reading user input for the width of the prism
	
	printf("ENTER THE LENGTH OF PRISM :"); // Prompting the user to input the length of the prism
	scanf("%f", &length); // Reading user input for the length of the prism
	
	printf("ENTER THE HEIGHT OF PRISM :"); // Prompting the user to input the height of the prism
	scanf("%f", &height); // Reading user input for the height of the prism
	
	areaofrectp = 2 * ((width * length) + (height * length) + (height * width)); // Calculating the area of the rectangular prism
	
	printf("AREA OF RECTANGULAR PRISM IS :%.2f", areaofrectp); // Displaying the calculated area of the rectangular prism with 2 decimal places

}

