#include<iostream>
using namespace std;

/*Do the following programs:
a. Create a Class Parent which includes two data members and member
functions to put and get values of the data members. Create another Class
Child which is a public derivation of class Parent. Child class has its own
data member and member functions to multiply the data members inherited
from Parent class and to display the result. Write a C++ program to
implement these two classes. (SINGLE INHERITANCE)

b. Do the above program where Child Class is the private derivation of Parent
Class. (SINGLE INHERITANCE).

c. Do the above program where data members are protected in Parent class and
Child class is the public derivation of Parent class. (SINGLE
INHERITANCE).*/

//		by Aniruddha

class Parent
{
	//protected : int a,b;	//for c
	public:
		int a,b;		//for a
		void get()
		{
			cout<<"a = "<<a<<"\tb = "<<b<<endl;
		}
		void put(int x,int y)
		{
			a = x , b = y;
		}
};

class Child:public Parent//for a & c
//class Child:private Parent//for b
{
	int m;
	public:
		void multiply()
		{
			m = a*b;
		}
		void show()
		{
			cout<<"a*b = "<<m<<endl;
		}
};

int main()
{	
	Child c ;
	c.put(5,10);
	c.get();
	c.multiply();
	c.show();
	return 0;	
}

/*Sample Output
a and c)
a = 5	b = 10
a*b = 50

b)
Error:Member function of Parents are Private in Child

*/

