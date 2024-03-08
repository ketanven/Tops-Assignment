//3. WAP to find reverse of string using recursion


#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[]) {
    // Base case: if the string is empty or has only one character, it is already reversed
    if (strlen(str) <= 1) {
        return;
    }

    // Recursive case: swap the first and last characters, and then reverse the substring
    char temp = str[0];
    str[0] = str[strlen(str) - 1];
    str[strlen(str) - 1] = temp;

    // Recursive call to reverse the substring excluding the first and last characters
    reverseString(str + 1);
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Call the function to reverse the string
    reverseString(str);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

