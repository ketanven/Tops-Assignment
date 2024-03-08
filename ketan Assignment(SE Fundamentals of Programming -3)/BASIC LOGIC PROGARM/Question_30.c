//Q-30. WAP to convert years into days and days into years
#include<stdio.h>

int main(){
    int choice, years;
    
    printf("1. Years to Days\n");
    printf("2. Days to Years\n");
    printf("ENTER YOUR CHOICE 1 OR 2 : ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:{
            printf("Enter the number of years : ");
            scanf("%d", &years);
            printf("%d years is equivalent to %d days.\n", years, years * 365);
            break;
        }
        case 2: {
            int days;
            printf("Enter the number of days: ");
            scanf("%d", &days);
            printf("%d days is equivalent to %d years.\n", days, days / 365);
            break;
        }
        default:
            printf("Invalid choice.\n");
    }

}

