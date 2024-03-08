//25. Write a C program to input electricity unit charges and calculate total
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit 
//For next 100 units Rs. 0.75/unit 
//For next 100 units Rs. 1.20/unit 
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill


#include<stdio.h>

int main() {
    float units, total_bill, surcharge = 0.20;
    
    // Input the electricity units consumed
    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);
    
    // Calculate total bill based on the given conditions
    if (units <= 50) {
        total_bill = units * 0.50;
    } else if (units <= 150) {
        total_bill = 25 + (units - 50) * 0.75;
    } else if (units <= 250) {
        total_bill = 100 + (units - 150) * 1.20;
    } else {
        total_bill = 220 + (units - 250) * 1.50;
    }
    
    // Add surcharge
    total_bill += total_bill * surcharge;
    
    // Print the total bill
    printf("Total electricity bill: Rs. %.2f", total_bill);
    
    return 0;
}

