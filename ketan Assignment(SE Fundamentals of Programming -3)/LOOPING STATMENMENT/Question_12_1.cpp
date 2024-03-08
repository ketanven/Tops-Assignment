#include<stdio.h>
int main(){
	int num,tem,a,sum;
	
	printf("ENTER A NUM : ");
	scanf("%d",&num);
	tem=num;
	while(num>0){
		a=num%10;
		sum = sum+(a*a*a);
		num = num/10;
	}
	if(tem==sum){
		printf("ENTERED NUMBER IS ARMSTRONG ");
	}
	else{
	 	printf("ENTERED NUMBER IS NOT A  ARMSTRONG ");

	}
}
