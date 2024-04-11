//Q-9 Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
//class create
class Addition{
	public:
		int a;
//	constructor
	Addition(int c)
	{
		a=c;
	}
	//	operator overloading
	int operator +(Addition obj)
	{
		return a+obj.a;
	}
};


int main()
{
	Addition obj(90);
	Addition obj1(52);
	cout<<obj+obj1;

}
