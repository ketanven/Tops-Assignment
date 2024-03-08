//19. Patterns:



#include <stdio.h>

int main() {
    int rows , i , j;
    char letter = 'A'; // Initialize the letter to print

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the pattern
    for (i = 1; i <= rows; i++) {
        // Print letters
        for (j = 1; j <= i; j++) {
            printf("%c ", letter++);
        }
        printf("\n");
    }

    return 0;
}

