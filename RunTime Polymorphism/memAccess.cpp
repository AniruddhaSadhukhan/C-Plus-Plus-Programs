#include<iostream>
using namespace std;

/*Write a C++ program to access members of base and derived 
classes using the pointer to objects of both the classes.*/
//		by Aniruddha

class Base
{
	public: int x;
		Base() {}
		Base(int a) : x(a) {}
};

class Child:public Base
{
	public: int y;
		Child() {}
		Child(int a) : y(a) {}
};

int main()
{	
	Base b(5);
	Child c(10);
	Base *bptr = &b;
	Child *cptr =&c;
	cout<<bptr->x<<endl;
	cout<<cptr->y<<endl;
	return 0;	
}

/*Sample Output
5
10
*/
