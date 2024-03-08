//Q-12. Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>

int main(){
    int num, temp, digit, sum = 0; // Declare variables to store the number, temporary variable, digit, and sum
    
    printf("ENTER A NUM : ");
    scanf("%d", &num); // Read the number from the user
    temp = num; // Store the original number in a temporary variable
    
    // Calculate the sum of cubes of digits
    while(num > 0){
        digit = num % 10; // Extract the last digit
        sum = sum + (digit * digit * digit); // Cube the digit and add to the sum
        num = num / 10; // Remove the last digit
    }
    
    // Check if the original number is equal to the sum of cubes of its digits
    if(temp == sum){
        printf("ENTERED NUMBER IS ARMSTRONG");
    }
    else{
        printf("ENTERED NUMBER IS NOT AN ARMSTRONG");
    }

}

