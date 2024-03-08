//18. Write a C program to calculate profit and loss on a transaction

#include<stdio.h>

int main() {
    // Declare variables to store cost price, selling price, profit, and loss
    float cost, sell, profit, loss;

    // Prompt the user to enter the cost price
    printf("Enter the cost price: ");
    scanf("%f", &cost);

    // Prompt the user to enter the selling price
    printf("Enter the sell price: ");
    scanf("%f", &sell);

    // Calculate profit or loss based on the entered values
    if (sell > cost) {
        // Calculate profit
        profit = sell - cost;
        printf("\n%.2f Profit\n", profit);
    } else if (cost > sell) {
        // Calculate loss
        loss = cost - sell;
        printf("\n%.2f Loss\n", loss);
    } else {
        // If cost price equals selling price, there is neither profit nor loss
        printf("\nNo Profit, No Loss\n");
    }

    return 0;
}

