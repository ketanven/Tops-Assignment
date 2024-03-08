//6. Write a program in C to count the total number of alphabets, digits and special 
//characters in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special_characters = 0;

    // Prompt the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet
        if (isalpha(str[i])) {
            alphabets++;
        } 
        // Check if the character is a digit
        else if (isdigit(str[i])) {
            digits++;
        } 
        // Check if the character is a special character
        else if (!isspace(str[i])) {
            special_characters++;
        }
    }

    // Print the total number of alphabets, digits, and special characters
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", special_characters);

    return 0;
}


