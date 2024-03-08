//7. WAP Find out length of string without using inbuilt function

#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char *str) {
    int length = 0;

    // Iterate through the characters until null terminator is found
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate and print the length of the string
    printf("Length of the string: %d\n", stringLength(str));

    return 0;
}

