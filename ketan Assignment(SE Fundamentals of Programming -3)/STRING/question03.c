//3. Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count the length of the string
    while (str[length] != '\0') {
        length++;
    }

    printf("Individual characters in reverse order:\n");

    // Print characters in reverse order
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}

