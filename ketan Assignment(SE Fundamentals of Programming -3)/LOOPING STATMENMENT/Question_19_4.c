//19. Patterns:


#include <stdio.h>

int main() {
    int rows , i , j;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the pattern
    for (i = 0; i <= rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
      // Loop to print the pattern upside down
    for (i = rows; i >= 1; i--) {
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

