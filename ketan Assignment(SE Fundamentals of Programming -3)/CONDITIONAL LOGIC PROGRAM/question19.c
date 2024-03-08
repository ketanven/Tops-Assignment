//19. Write a program in C to calculate and print the electricity bill of a given 
//customer. The customer ID, name, and unit consumed by the user should 
//be captured from the keyboard to display the total amount to be paid to the 
//customer. The charge are as follow :
//20. Unit 21. Charge/unit
//22. upto 350 23. @1.20
//24. 350 and above but less than 600 25. @1.50
//26. 600 and above but less than 800 27. @1.80
//28. 800 and above 29. @2.00



#include<stdio.h>

int main() {
    // Declare variables
    int customerId, units;
    char customerName[50];
    float charge, total;
    
    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Calculate charge based on units consumed
    if (units <= 350) {
        charge = 1.20;
    } else if (units < 600) {
        charge = 1.50;
    } else if (units < 800) {
        charge = 1.80;
    } else {
        charge = 2.00;
    }

    // Calculate total amount to be paid
    total = charge * units;
    
    // Display bill
    printf("\nCustomer Name: %s\n", customerName);
    printf("Customer ID: %d\n", customerId);
    printf("Units Consumed: %d\n", units);
    printf("Charge per Unit: %.2f\n", charge);
    printf("Total Amount to be Paid: %.2f\n", total);

    return 0;
}

