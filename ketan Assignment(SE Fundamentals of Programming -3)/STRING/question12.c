//12.Write a program in C to find the number of times a given word 'is' appears in 
//the given string.

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int countOccurrences(char str[], char word[]) {
    int count = 0;
    int wordLength = strlen(word);
    int strLength = strlen(str);
    int i;

    // Loop through the string
    for (i = 0; i <= strLength - wordLength; i++) {
        // Check if the word appears in the string
        if (strncmp(&str[i], word, wordLength) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[MAX_SIZE];
    char word[] = "is";

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count the occurrences of the word 'is'
    int occurrences = countOccurrences(str, word);

    printf("Number of times '%s' appears in the string: %d\n", word, occurrences);

    return 0;
}

