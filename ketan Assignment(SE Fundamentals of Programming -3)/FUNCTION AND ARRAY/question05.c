//Q5 -WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice
#include<stdio.h>

// Function to sort the array in ascending or descending order based on user choice
int sort(int choice){
    int i, j, tem;
    int arr[5]; // Declare an array to store the numbers
    
    // Sort in ascending order if choice is 1
    if(choice == 1){
        // Read numbers from the user
        for(i = 0; i < 5; i++){
            printf("ENTER THE ARRAY %d : ", i);
            scanf("%d", &arr[i]);
        }

        // Bubble sort algorithm to sort the array in ascending order
        for(i = 0; i < 5; i++){
            for(j = i + 1; j < 5; j++){
                if(arr[i] > arr[j]){
                    tem = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tem;
                }
            }
        }

        // Print the sorted array
        for(i = 0; i < 5; i++){
            printf("%d \t", arr[i]);
        }
    }
    // Sort in descending order if choice is 2
    else if(choice == 2){
        // Read numbers from the user
        for(i = 0; i < 5; i++){
            printf("ENTER THE ARRAY %d : ", i);
            scanf("%d", &arr[i]);
        }

        // Bubble sort algorithm to sort the array in descending order
        for(i = 0; i < 5; i++){
            for(j = i + 1; j < 5; j++){
                if(arr[i] < arr[j]){
                    tem = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tem;
                }
            }
        }

        // Print the sorted array
        for(i = 0; i < 5; i++){
            printf("%d \t", arr[i]);
        }
    }
    // If choice is neither 1 nor 2, display "INVALID"
    else{
        printf("INVALID \n");
    }
}

int main(){
    int choice;
    
    // Display the menu for user choice
    printf("1. ASCENDING \n");
    printf("2. DESCENDING \n");
    
    // Read user choice
    printf("SELECT YOUR CHOICE : ");
    scanf("%d", &choice);
    
    // Call the sort function with user choice
    sort(choice);
}

