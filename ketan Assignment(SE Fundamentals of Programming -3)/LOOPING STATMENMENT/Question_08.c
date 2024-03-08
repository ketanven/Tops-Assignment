//Q- 8. Write a program to find out the max from given number (E.g., No: -1562 
//Max number is 6)


#include<stdio.h>

int main(){
    int number, digit, maxdigit = -1;
    
    // Accept a number from the user
    printf("ENTER NUMBER : ");
    scanf("%d", &number);
    
    // Loop to find the maximum digit in the number
    while(number != 0){
        digit = number % 10; // Extract the last digit
        if(digit > maxdigit){
            maxdigit = digit; // Update maxdigit if current digit is greater
        }
        number /= 10; // Remove the last digit
    }
    
    // Print the maximum digit
    printf("MAX NUMBER IS : %d", maxdigit);
   
}

