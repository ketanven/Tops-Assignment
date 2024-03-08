//22. WAP to input the week number and print week day

#include<stdio.h>

int main(){
    int weekNumber;
    
    // Prompt user to input the week number
    printf("Enter Week Number: ");
    scanf("%d", &weekNumber);
    
    // Use switch statement to determine the weekday based on the week number
    switch(weekNumber){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid week number"); // Handle invalid input
    }

}

