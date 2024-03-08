// Write a C program to check whether a triangle can be formed with the given 
//values for the angles.


#include<stdio.h>
int main(){
	
	int angle1 , angle2 ,angle3;
	printf("Enter Angle 1 :");
	scanf("%d",&angle1);
	printf("Enter Angle 2 :");
	scanf("%d",&angle2);
	printf("Enter Angle 3 :");
	scanf("%d",&angle3);
	
	if((angle1 + angle2 + angle3 == 180) && (angle1 >0 && angle2>0 && angle3>0)){
		printf("Tringle can be formed with %d , %d , %d",angle1,angle2,angle3);
	}
	else{
		printf("Tringle can not be formed with %d , %d , %d",angle1,angle2,angle3);
	}
}
