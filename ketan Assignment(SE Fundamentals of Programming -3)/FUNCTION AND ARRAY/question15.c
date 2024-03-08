//15.Store 5 numbers in array and sort it in ascending order

#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on an array

void bubbleSort(int arr[], int n) {
	int i , j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[5];

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order
    bubbleSort(arr, 5);

    // Display the sorted array
    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

