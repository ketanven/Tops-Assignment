//Q_ 8. WAP to reverse a string and check that the string is palindrome or not
//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//andage
//b. Write a program of structure for five employee that 
//provides the following information -print and display
//empno, empname, address andage


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Function to check if a string is a palindrome
bool isPalindrome(char *str) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Reverse the string
    reverseString(str);
    printf("Reversed string: %s\n", str);

    // Check if the original string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

