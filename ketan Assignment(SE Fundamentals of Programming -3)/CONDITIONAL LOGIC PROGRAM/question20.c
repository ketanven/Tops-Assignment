//20. Write a program in C to read any Month Number in integer and display the 
//number of days for this month.

#include<stdio.h>

int main(){
    int choice;
    
    // Displaying the menu for selecting a month
    printf("Days In The Month\n");
    
    printf("\n1.January\n");
    printf("2.February\n");
    printf("3.March\n");
    printf("4.April\n");
    printf("5.May\n");
    printf("6.June\n");
    printf("7.July\n");
    printf("8.August\n");
    printf("9.September\n");
    printf("10.October\n");
    printf("11.November\n");
    printf("12.December\n");
    printf("Enter Number From Given Above :");
    scanf("%d",&choice);
    
    // Checking the input to determine the days in the selected month
    if(choice == 1 || choice == 3 || choice == 5 || choice == 7 || choice == 8 || choice == 10 || choice == 12 ){
        // Months with 31 days
        printf("\nDays in this month is : 31");
    }
    else if(choice == 4 || choice == 6 || choice == 9 || choice == 11 ){
        // Months with 30 days
        printf("\nDays in this month is : 30");
    }
    else if(choice == 2 ){
        // February can have 28 or 29 days (leap year)
        printf("\nDays in this month is : 28 or 29");
    }
    else {
        // Handling invalid input
        printf("\nInvalid Number..!!");
    }
    
    return 0;
}

