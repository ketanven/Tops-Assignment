//14.Write a program in C to combine two strings manually

#include <stdio.h>

#define MAX_SIZE 100

void combineStrings(char str1[], char str2[], char combined[]) {
    int i, j;

    // Copy characters from the first string to the combined string
    for (i = 0; str1[i] != '\0'; i++) {
        combined[i] = str1[i];
    }

    // Concatenate characters from the second string to the combined string
    for (j = 0; str2[j] != '\0'; j++, i++) {
        combined[i] = str2[j];
    }

    // Add null terminator to the end of the combined string
    combined[i] = '\0';
}

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE], combined[2 * MAX_SIZE];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Combine strings
    combineStrings(str1, str2, combined);

    printf("Combined string: %s", combined);

    return 0;
}

