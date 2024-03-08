//Q-28. 1 2 3 6 9 18 27 54...
#include <stdio.h>

int main() {
    int n, i;
    int prev = 1;
    int current = 2;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("The sequence is: ");
    printf("%d ", prev); // Printing the first term
    
    for (i = 2; i <= n; i++) {
        printf("%d ", current); // Print the current term
        
        // Calculate the next term
        int next = prev + current;
        prev = current;
        current = next;
    }
    
    printf("\n");
    
    return 0;
}

