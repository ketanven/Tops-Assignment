//Q- 4. WAP to find factorial using recursion


#include<stdio.h>

// Function to calculate factorial using recursion
int factorial(int n){
    // Base case: factorial of 0 or 1 is 1
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n-1);
    }
}

int main(){
    int num;
    
    // Input from the user
    printf("Enter a number: ");
    scanf("%d",&num);
    
    // Check if the number is negative
    if(num < 0){
        printf("Factorial is not defined for negative numbers");
    }
    else{
        // Calculate factorial
        int fact = factorial(num);
        printf("Factorial of %d is: %d",num,fact);
    }
    
    return 0;
}

