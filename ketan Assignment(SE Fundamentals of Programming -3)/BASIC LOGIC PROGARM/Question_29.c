//Q-29. Convert minutes into seconds and hours
#include<stdio.h>

int main(){
	int min, seconds;
	float hour;

	printf("ENTER THE NUMBER OF MINUTES : ");
	scanf("%d", &min);
	
	seconds = 60 * min;
	printf("%d MINUTES IS EQUAL TO %d SECONDS.\n", min, seconds);
	
	hour = min / 60.0; // Using floating point division to get accurate result
	printf("%d MINUTES IS EQUAL TO %.2f HOURS.\n", min, hour);

	return 0;
}

