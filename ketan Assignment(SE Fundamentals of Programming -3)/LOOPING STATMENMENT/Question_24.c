//24. 1 + 2 + 3 + 4 + 5 + ... + n


#include <stdio.h>

int main() {
    int n, i , sum = 0;

    // Prompt the user to enter n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

