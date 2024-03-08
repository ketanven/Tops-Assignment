//6. Find the Character Is Vowel or Not

#include<stdio.h>

int main() {
    // Declare a variable to store user input
    char input;
    
    // Prompt the user to enter a character
    printf("Enter a character: ");
    // Read the character input from the user
    scanf("%c", &input);
    
    // Check if the input character is a vowel (lowercase or uppercase)
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ||
        input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U') {
        printf("%c is a vowel\n", input);
    } 
    // If the input character is not a vowel, it is a consonant
    else {
        printf("%c is not a vowel\n", input);
    }

    return 0; // Added return statement to indicate successful execution
}

