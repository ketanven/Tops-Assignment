//Q- 16. Convert country’s name in abbreviate form

#include <stdio.h>

int main() {
    // Declare an array to store the country's name
    char country_name[50];
    
    // Prompt the user to enter the country's name
    printf("Enter country's name: ");
    // Read the country's name input from the user
    scanf("%s", country_name);
    
    // Print the abbreviated form of the country's name (first three characters)
    printf("Abbreviated form of country's name: ");
    
    // Print the first three characters of the country's name
    printf("%c", country_name[0]); // Print the first character
    printf("%c", country_name[1]); // Print the second character
    printf("%c", country_name[2]); // Print the third character
    
    return 0; // Added return statement to indicate successful execution
}

