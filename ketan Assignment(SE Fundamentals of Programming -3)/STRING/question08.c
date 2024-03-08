//8. Write a program in C to count the total number of vowels or consonants in a 
//string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // Convert character to lowercase for easy comparison
        char ch = tolower(str[i]);
        
        // Check if character is an alphabet
        if (ch >= 'a' && ch <= 'z') {
            // Check if character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}

