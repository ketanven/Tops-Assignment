//Q-10 Write a program to concatenate the two strings using Operator Overloading
#include<iostream>

using namespace std;
//class create
class concatenate{
	public:
		string str;
//	constructor
	concatenate(string s)
	{
		str = s;
	}
	//		operator overloading
	string operator +(concatenate obj)
	{
		return str+obj.str;
	}
};


int main()
{
	concatenate obj("KETAN");
	concatenate obj1(" PILLAI");
	cout<<obj+obj1;

}
