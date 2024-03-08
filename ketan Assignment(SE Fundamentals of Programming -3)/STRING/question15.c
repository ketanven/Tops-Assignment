//15.Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

void findLargestAndSmallestWords(char str[]) {
    char word[100], largestWord[100], smallestWord[100];
    int maxLength = 0, minLength = 100;

    // Tokenize the input string into words
    char *token = strtok(str, " \n\t");

    while (token != NULL) {
        // Check the length of the current word
        int length = strlen(token);

        // Update largest word if needed
        if (length > maxLength) {
            maxLength = length;
            strcpy(largestWord, token);
        }

        // Update smallest word if needed
        if (length < minLength) {
            minLength = length;
            strcpy(smallestWord, token);
        }

        // Get the next word
        token = strtok(NULL, " \n\t");
    }

    // Print the largest and smallest words
    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find largest and smallest words
    findLargestAndSmallestWords(str);

    return 0;
}


