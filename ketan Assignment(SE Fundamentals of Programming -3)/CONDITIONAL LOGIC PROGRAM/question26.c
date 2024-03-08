//26. WAP to show
//i. Monday to Sunday using switch case
//ii. Vowel or Consonant using switch case

#include<stdio.h>
int main(){
	int weeknumber;  
	char vowel;
	printf("Enter Number of Week :");
	scanf("%d",&weeknumber);
	printf("Enter Vowel :");
	scanf(" %c",&vowel);
	
	
	switch(weeknumber){
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
            printf("Invalid week number");
	}
	
	switch(vowel){
		case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\nThe character %c is a vowel.",vowel);
            break;
        default:
            printf("\nThe character is a consonant.");
    }
    
}
	

