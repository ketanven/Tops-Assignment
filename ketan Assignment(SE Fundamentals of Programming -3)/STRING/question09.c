//9. Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int max_chars = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Counting characters until null terminator is encountered
    for (i = 0; str[i] != '\0'; i++) {
        max_chars++;
    }

    printf("Maximum number of characters in the string: %d\n", max_chars);

    return 0;
}

