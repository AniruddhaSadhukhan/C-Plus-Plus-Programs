#include<iostream>
using namespace std;

/*Write a C++ program to invoke member functions of base 
and derived classes using the pointer to base class object*/
//		by Aniruddha

class Base
{
	public: 
		void fun()
		{
			cout<<"Base Class Function\n";
		}
		virtual void show() = 0;
};

class Child:public Base
{
	public: 
		void show()
		{
			cout<<"Child Class Function\n";
		}
};

int main()
{	
	Child c;
	Base *b = &c;
	b->fun();
	b->show();
	return 0;	
}

/*Sample Output
Base Class Function
Child Class Function

*/
