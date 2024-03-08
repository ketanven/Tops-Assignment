//1. Display This Information using printf
//a. Your Name
//b. Your Birth date
//c. Your Age
//d. Your Address
#include<stdio.h>

int main(){
	char name[10], address[20]; // Declaring character arrays to store name and address
	int date, month, year, age; // Declaring integer variables for date of birth and age
	
	printf("ENTER YOUR NAME : \n"); // Prompting the user to input their name
	scanf("%S", &name); // Reading user input for name
	
	printf("ENTER YOUR BIRTH DATE (d-mm-yyyy) : \n"); // Prompting the user to input their birth date
	scanf("%d-%d-%d", &date, &month, &year); // Reading user input for birth date
	
	printf("ENTER YOUR AGE: \n"); // Prompting the user to input their age
	scanf("%d", &age); // Reading user input for age
	
	printf("ENTER YOUR ADDRESS : \n"); // Prompting the user to input their address
	scanf("%S", &address); // Reading user input for address
	
	printf("__________________________\n");
	printf("Your Name :%S \n", name); // Displaying the entered name
	printf("Your Birth date : %d-%d-%d \n", date, month, year); // Displaying the entered birth date
	printf("Your Age : %d \n", age); // Displaying the entered age
	printf("Your Address : %S", address); // Displaying the entered address
	
}

