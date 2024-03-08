//C Program to Check Uppercase or Lowercase or Digit or Special 
//Character

#include <stdio.h>

int main() {
    // Declare a variable to store the input character
    char input;
    
    // Ask the user to enter a character
    printf("Enter a character: ");
    
    // Read the character entered by the user
    scanf("%c", &input);
    
    // Check if the input is an alphabet (uppercase or lowercase)
    if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        // If it's an alphabet, print that it's a character
        printf("%c is a Character.\n", input);
        
        // Check if it's a lowercase alphabet
        if(input >= 'a' && input <= 'z') {
            // If it's lowercase, print that it's lowercase
            printf("%c is Lowercase.\n", input);
        }
        // If it's not lowercase, it must be uppercase
        else {
            // So, print that it's uppercase
            printf("%c is Uppercase.\n", input);
        }
    }
    // If it's not an alphabet, check if it's a digit
    else if(input >= '0' && input <= '9') {
        // If it's a digit, print that it's a number
        printf("%c is a Number.\n", input);
    }
    // If it's neither an alphabet nor a digit, it's a special character
    else {
        // So, print that it's a special character
        printf("%c is Special character.\n", input);
    }
    
    // Return 0 to indicate successful execution of the program
    return 0;
}

