//Q- 15. Convert school’s name in abbreviated form


#include <stdio.h>

int main() {
	int i;
    // Declare an array to store the school's name
    char school_name[50];
    
    // Prompt the user to enter the school's name
    printf("Enter school's name: ");
    // Read the school's name input from the user
    scanf("%s", school_name);
    
    // Print the abbreviated form of the school's name (first character of each word)
    printf("Abbreviated form of school's name: ");
    
    // Print the first character of the first word
    printf("%c", school_name[0]);
    
    // Iterate through the school's name
    for (i = 0; school_name[i] != '\0'; i++) {
        // If a space is encountered, print the next character (initial) of the word
        if (school_name[i] == ' ') {
            printf("%c", school_name[i + 1]);
        }
    }
    
    return 0; // Added return statement to indicate successful execution
}

