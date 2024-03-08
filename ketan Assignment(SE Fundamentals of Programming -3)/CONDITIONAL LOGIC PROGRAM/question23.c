//23. Accept month number and display month name

#include<stdio.h>

int main(){
    int MonthNumber;
    
    // Prompt user to input the month number
    printf("Enter Month Number: ");
    scanf("%d", &MonthNumber);
    
    // Use switch statement to determine the Month based on the Month number
    switch(MonthNumber){
        case 1:
            printf("January");
            break;
        case 2:
            printf("Febuary");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("Jun");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Octomber");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid Month number"); // Handle invalid input
    }

}
