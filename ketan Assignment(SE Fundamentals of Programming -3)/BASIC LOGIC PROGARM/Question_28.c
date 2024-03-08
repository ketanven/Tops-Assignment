//Q-28. Convert years into days and months
#include <stdio.h>

int main() {
    int years,i;
    printf("Enter the number of years: ");
    scanf("%d", &years);

    int days = years * 365; // Each year has 365 days
    int months = years * 12; // Each year has 12 months

    printf("%d years is equivalent to %d days and %d months.\n", years, days, months);

    return 0;
}

