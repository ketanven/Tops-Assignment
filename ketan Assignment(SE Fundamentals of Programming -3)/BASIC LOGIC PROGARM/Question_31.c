//Q-31. Convert kilometers into meters
#include<stdio.h>
int main(){
	float kilometer,meters;
	
	// Take input from the user
	printf("ENTER THE DISTANCE IN KILOMETERS : ");
	scanf("%f",&kilometer);
	
	// Convert kilometers to meters
	meters = kilometer * 1000;
	
	// Display the result
	printf("%.2f KILOMETER IS EQUAL TO %.2f METERS.\n",kilometer,meters);
	
}
