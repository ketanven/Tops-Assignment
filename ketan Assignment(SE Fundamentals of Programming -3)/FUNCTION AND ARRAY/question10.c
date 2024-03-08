//Q-10.WAP to perform Palindrome number using for loop and function
#include<stdio.h>

// Function to check if a number is a palindrome
int palim(int num){
    int orgnum = num; // Store the original number
    int revnum = 0; // Initialize the reversed number

    // Loop to reverse the number
    for(; num > 0; num /= 10){
        int digit = num % 10; // Extract the last digit of the number
        revnum = revnum * 10 + digit; // Append the digit to the reversed number
    }

    // Check if the original number is equal to its reverse
    return (orgnum == revnum);
}

// Main function
int main(){
    int number;
    
    // Prompt the user to enter a number
    printf("ENTER A NUMBER : ");
    scanf("%d", &number); // Read the number from user input
    
    // Check if the number is a palindrome using the palim function
    if(palim(number)){
        printf("%d is a palindrome", number); // Print if the number is a palindrome
    }
    else{
        printf("%d is not a palindrome", number); // Print if the number is not a palindrome
    }
   
}

