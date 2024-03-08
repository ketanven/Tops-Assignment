//16.Accept 5 numbers from user and perform sum of array

#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
	int i;
	
    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the array
    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Display the sum
    printf("Sum of the array elements: %d\n", sum);

    return 0;
}

