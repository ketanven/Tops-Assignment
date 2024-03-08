//Q-27. Convert days into months
#include <stdio.h>

int main() {
    int days;
    float months;

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Convert days into months (approximation: 1 month = 30 days)
    months = (float)days / 30;

    // Output number of months
    printf("Approximate number of months: %.2f\n", months);

   
}

