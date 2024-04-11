//Q-5 Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.


#include<iostream>

using namespace std;

// Declaration of the Rectangle class
class Rectangle{
    // Private member variables
	private:
		double length;
		double width;
	
	public:
	    // Setter function for setting length
		void Setlength(double l){
			length = l;
		}
		
		// Setter function for setting width
		void Setwidth(double w){
			width = w;
		}
		
		// Member function to calculate area of rectangle
		double Calculatearea(){
			return length * width; // Area = length * width
		}
		
		// Member function to calculate perimeter of rectangle
		double Calculateperi(){
			return 2 * (length + width); // Perimeter = 2 * (length + width)
		}
};

// Main function
main(){
	Rectangle result;
	double length,width;
	
	// Prompting user to input length of rectangle
	cout<<"\nENTER THE LENGTH OF THE RECTANGLE : ";
	cin>>length;
	
	// Prompting user to input width of rectangle
	cout<<"\nENTER THE WIDTH OF THE RECTANGLE : ";
	cin>>width;
	
	// Setting the length and width of the rectangle
	result.Setlength(length);
	result.Setwidth(width);

    // Calculating and printing the area of the rectangle
    cout<<"\nAREA OF THE RECTANGLE IS :"<<result.Calculatearea()<<endl;
	
	// Calculating and printing the perimeter of the rectangle
	cout<<"\nPERIMETER OF THE RECTANGLE IS :"<<result.Calculateperi();	
}

