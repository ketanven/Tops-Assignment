//7. Write a program in C to copy one string to another string.

#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", source);

    // Copying characters from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Adding null terminator to the end of the destination string

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}


