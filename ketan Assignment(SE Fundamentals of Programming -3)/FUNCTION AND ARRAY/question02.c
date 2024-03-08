//Q- 2. WAP of Addition, Subtraction, Multiplication and Division using Switch 
//case.(Must Be Menu Driven)


#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    // Display the menu
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Prompt the user to enter two numbers
    printf("Enter number one: ");
    scanf("%f",&num1);
	printf("Enter number Two: ");
    scanf("%f",&num2);
	
	
    // Perform operation based on user's choice
    switch (choice) {
        case 1:  // Addition
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:  // Subtraction
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:  // Multiplication
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:  // Division
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

