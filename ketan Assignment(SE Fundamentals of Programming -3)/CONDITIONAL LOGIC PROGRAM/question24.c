//24. Accept the input month number and print number of days in that
//month.

#include<stdio.h>

int main(){
    int MonthNumber;
    
    // Prompt user to input the month number
    printf("Enter Month Number: ");
    scanf("%d", &MonthNumber);
    
    // Use switch statement to determine the days based on the Month number
    switch(MonthNumber){
        case 1:
            printf("January 31 days");
            break;
        case 2:
            printf("Febuary 28 or 29 days");
            break;
        case 3:
            printf("March 31 days");
            break;
        case 4:
            printf("April 30 days");
            break;
        case 5:
            printf("May 31 days");
            break;
        case 6:
            printf("Jun 30 days");
            break;
        case 7:
            printf("July 31 days");
            break;
        case 8:
            printf("August 31 days");
            break;
        case 9:
            printf("September 30 days");
            break;
        case 10:
            printf("Octomber 31 days");
            break;
        case 11:
            printf("November 30 days");
            break;
        case 12:
            printf("December 31 day2s");
            break;
        default:
            printf("Invalid Month number"); // Handle invalid input
    }

}
