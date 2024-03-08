//10.Write a program in C to extract a substring from a given string

#include <stdio.h>

void extractSubstring(char source[], char destination[], int start, int end) {
    int i, j = 0;

    // Copy characters from source to destination within the specified range
    for (i = start; i <= end; i++) {
        destination[j++] = source[i];
    }

    // Add null terminator to the end of the destination string
    destination[j] = '\0';
}

int main() {
    char source[100], substring[100];
    int start, end;

    printf("Enter a string: ");
    scanf("%s", &source);

    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the ending index of the substring: ");
    scanf("%d", &end);

    // Extracting substring
    extractSubstring(source, substring, start, end);

    printf("Substring: %s\n", substring);

    return 0;
}


