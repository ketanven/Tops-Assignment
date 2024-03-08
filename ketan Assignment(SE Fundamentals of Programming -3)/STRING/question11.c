//11.Write a program in C to read a sentence and replace lowercase characters with 
//uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

void toggleCase(char sentence[]) {
    int i = 0;

    // Loop through each character of the string
    while (sentence[i] != '\0') {
        // Check if the character is uppercase
        if (isupper(sentence[i])) {
            // Convert uppercase to lowercase
            sentence[i] = tolower(sentence[i]);
        } else if (islower(sentence[i])) {
            // Convert lowercase to uppercase
            sentence[i] = toupper(sentence[i]);
        }
        i++;
    }
}

int main() {
    char sentence[MAX_SIZE];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Call function to toggle case
    toggleCase(sentence);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}

