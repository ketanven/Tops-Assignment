//2. Write a program in C to separate individual characters from a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Individual characters:\n");
    
    // Loop through each character in the string
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}

