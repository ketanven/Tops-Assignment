//20. WAP program to print below output using for loop 
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19 20
//..............
//..............
//41 42 43 44 45 46 47 48 49 50


#include <stdio.h>

int main() {
    int rows = 5; // Number of rows
    int cols = 10; // Number of columns
    int number = 1; // Initialize the number to print
	int i , j;

    // Loop to print the pattern
    for (i = 1; i <= rows; i++) {
        // Loop to print each row
        for (j = 1; j <= cols; j++) {
            printf("%02d ", number++);
        }
        printf("\n");
    }

    return 0;
}

