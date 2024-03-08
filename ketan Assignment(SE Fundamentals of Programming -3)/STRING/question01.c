//1. Write a program in C to find the length of a string without using library 
//functions.


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    
    printf("ENTER A STRING : ");
    scanf("%s", str);

    // Counting characters until null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    
    printf("LENGTH OF THE STRING IS : %d\n", length);

    return 0;
}

