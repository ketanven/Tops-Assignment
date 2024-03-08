//19. Patterns:


#include <stdio.h>

int main() {
    int rows , i , j;
    char alphabet = 'A';

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", alphabet++);
        }
        printf("\n");
    }

    return 0;
}

