//13.Write a program in C to remove characters from a string except alphabets.//

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

void removeNonAlphabets(char str[]) {
    int i = 0, j = 0;

    // Loop through each character of the string
    while (str[i] != '\0') {
        // Check if the character is an alphabet
        if (isalpha(str[i])) {
            // If yes, copy it to the current position in the string
            str[j] = str[i];
            j++;
        }
        i++;
    }
    // Add null terminator to the end of the modified string
    str[j] = '\0';
}

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove non-alphabetic characters
    removeNonAlphabets(str);

    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}

