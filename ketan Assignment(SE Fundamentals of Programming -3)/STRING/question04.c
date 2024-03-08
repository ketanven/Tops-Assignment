//4. Write a program in C to count the total number of words in a string.

#include <stdio.h>

int main() {
    char str[100];
    int words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets to handle spaces
    int i;

    // Loop through each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        // If current character is a space, increment word count
        if (str[i] == ' ') {
            words++;
        }
    }

    // Add 1 to account for the last word (no space after it)
    words++;

    printf("Total number of words: %d\n", words);

    return 0;
}

