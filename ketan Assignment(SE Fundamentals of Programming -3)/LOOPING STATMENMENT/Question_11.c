//Q-11. Accept 5 names from user at run time.
#include<stdio.h>
int main(){
	int i;
	char name[20];
	for(i=0;i<5;i++){
		printf("ENTER YOUR NAME : ");
		scanf("%s",name);
		printf("ENTERED NAME IS : %s\n",name);
	}
	
}
