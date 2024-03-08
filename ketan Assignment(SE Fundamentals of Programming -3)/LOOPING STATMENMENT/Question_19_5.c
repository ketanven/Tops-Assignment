//19. Patterns:


#include <stdio.h>

int main() {
    int rows , i , j;
    int num = 1; // Initialize the number to print

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the pattern
    for (i = 1; i <= rows; i++) {
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}

