//Q- 1. Write a program to find out the max number from given array using function


#include <stdio.h>

// Function to find the maximum number in an array
int find_max(int arr[], int size) {
    // Check if the array is empty
    if (size == 0) {
        printf("Array is empty");
    }

    // Initialize max_number with the first element of the array
    int max_number = arr[0];
    int i;

    // Iterate through the array to find the maximum number
    for (i = 1; i < size; i++) {
        if (arr[i] > max_number) {
            max_number = arr[i];
        }
    }

    // Return the maximum number found
    return max_number;
}

int main() {
    int size, i;

    // Prompt the user to enter the size of the array
    printf("Enter Size Of array:");
    scanf("%d", &size);

    int array[size];

    // Prompt the user to enter the elements of the array
    printf("Enter Elements of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Find the maximum number in the array
    int max_number = find_max(array, size);

    // Print the maximum number found
    if (max_number != -1) {
        printf("Maximum number in the array is: %d", max_number);
    } else {
        printf("Array is empty");
    }

    return 0;
}






