//Write a C program to read temperature in centigrade and display a suitable 
//message according to the temperature state below:
//Temp < 0 then Freezing weather 
//Temp 0-10 then Very Cold weather 
//Temp 10-20 then Cold weather 
//Temp 20-30 then Normal in Temp 
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot

#include<stdio.h>

int main(){
	int temp;
	
	printf("Enter temperature in celsius :");
	scanf("%d",&temp);
	
	
	if(temp <0){
		printf("\nFreezing weather");
	}
	else if(temp >=0 && temp <=10){
		printf("\nVery Cold weather");
	}
	else if(temp >=11 && temp <=20){
		printf("\nCold weather ");
	}
	else if(temp >=21 && temp <=30){
		printf("\nNormal in Temp");
	}
	else if(temp >=31 && temp <=40){
		printf("\nIts Hot");
	}
	else{
		printf("\nVery Hot");
	}
	
	
}
