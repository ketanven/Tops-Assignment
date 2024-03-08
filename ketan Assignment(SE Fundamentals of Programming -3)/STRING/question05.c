//5. Write a program in C to compare two strings without using string library 
//functions.

#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Compare characters until either a mismatch is found or both strings end
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Strings are not equal
        }
        i++;
    }

    // Check if both strings have ended at the same point
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; // Strings are equal
    } else {
        return 0; // Strings are not equal
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (compareStrings(str1, str2)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}

