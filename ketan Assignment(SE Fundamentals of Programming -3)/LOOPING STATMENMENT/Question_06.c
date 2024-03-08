//Q-6 WAP to print Fibonacci series up to given numbers
#include<stdio.h>

int main(){
    int num, first = 0, second = 1, i, next;
    
    // Accept the number of terms from the user
    printf("ENTER THE NUMBER OF TERMS: ");
    scanf("%d", &num);
    
    // Display a message indicating the Fibonacci series up to 'num' terms
    printf("FIBONACCI SERIES UP TO %d:\n", num);
    
    printf("%d\n", first); // Print the first term
    
    next = first + second; // Calculate the next term
    
    // Loop to generate and print Fibonacci series up to 'num' terms
    while (next <= num) {
        printf("%d\n", next); // Print the next term
        first = second; // Update first term
        second = next; // Update second term
        next = first + second; // Calculate next term
    }
   
}

