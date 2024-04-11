//Q-1 WAP to create simple calculator using class

#include<iostream>

using namespace std;

class Calculator{
	public:
		// Function for addition
		int fun1(int number1,int number2){
			return(number1 + number2);
		}
		
		// Function for subtraction
		int fun2(int number1,int number2){
			return(number1 - number2);
		}
		
		// Function for multiplication
		int fun3(int number1,int number2){
			return(number1*number2);
		}
		
		// Function for division
		float fun4(float number1,float number2){
			if(number2 == 0){
				cout<<"Invalid number "<<endl;
			}
			else{
				return (number1 / number2);
			}
		}
};

int main(){
	Calculator obj;
	int number1,number2;
	int choice;
	
	// Input from the user
	cout<<"\n---------Calculator---------";
	cout<<"\nEnter Number One : ";
	cin>>number1;
	
	cout<<"\nEnter Number Two :";
	cin>>number2;
	
	// Displaying options
	cout<<"--------Select Your Choice--------"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	
	cout<<"\nSelect Your Choice(1-4)  :";
	cin>>choice;
	
	// Performing the selected operation
	switch(choice){
		case 1:
			cout<<"Addition of two number is : "<<obj.fun1(number1,number2)<<endl;
			break;
		
		case 2:
			cout<<"Subtraction of two number is : "<<obj.fun2(number1,number2)<<endl;
			break;
		
		case 3:
			cout<<"Multiplication of two number is : "<<obj.fun3(number1,number2)<<endl;
			break;
		
		case 4:
			cout<<"Division of two number is : "<<obj.fun4(number1,number2)<<endl;
			break;
		
		default:
			cout<<"Invalid Choice"<<endl;
			break;					
	}
}

