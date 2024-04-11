//Q-2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor

#include<iostream>

using namespace std;

class Calculator{
    private:
        float num1;
        float num2;
        
    public:
        // Constructor to initialize num1 and num2
        Calculator(float n1,float n2){
            num1 = n1;
            num2 = n2;
        }
        
        // Method to perform addition
        float add(){
            return num1 + num2;
        }
        
        // Method to perform subtraction
        float sub(){
            return num1 - num2;
        }
        
        // Method to perform multiplication
        float mul(){
            return num1 * num2;
        }
        
        // Method to perform division
        float div(){
            if(num2 == 0){
                cout<<"\nDivision can't be with zero";
            }
            else{
                return num1 / num2;
            }
        }
};

int main(){
    // Variables to store user input
    float num1,num2;

    // Prompting user for input
    cout<<"\nENTER FIRST NUMBER :";
    cin>>num1;
    
    cout<<"\nENTER SECOND NUMBER :";
    cin>>num2;
    
    // Creating an instance of the Calculator class
    Calculator calculator(num1,num2);
    
    // Performing arithmetic operations and displaying results
    cout<<"\nADDTION :"<<calculator.add()<<endl;
    cout<<"\nSUBTRACTION :"<<calculator.sub()<<endl;
    cout<<"\nMULTIPLICATION :"<<calculator.mul()<<endl;
    cout<<"\nDIVISION :"<<calculator.div()<<endl;

}

