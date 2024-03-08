//Q-14 14. Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>

long long fact(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num * fact(num - 1); // Recursive call to calculate factorial
    }
}

int main(){
    int i, number[5];
    
    printf("ENTER FIVE NUMBERS :\n");
    for(i = 0; i < 5; i++){
        printf("NUMBER %d : ", i + 1);
        scanf("%d", &number[i]); // Read five numbers from the user
    }
    
    printf("FACTORIAL : \n");
    for(i = 0; i < 5; i++){
        printf("FACT OF %d = %lld\n", number[i], fact(number[i])); // Calculate and print factorial for each number
    }
 
}

