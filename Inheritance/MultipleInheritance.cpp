#include<iostream>
using namespace std;

/* Create two Classes – Class A and Class B which include a data each and
member functions to display their data members. Derive a Class Child from
those two Classes and it has also a member function show () to show the
result of multiplying two data members inherited from parent classes.
(Multiple Inheritance: Resolve ambiguity due to same function name display
() in child class). */
//		by Aniruddha

class A
{
	protected:
		int x;
		A(int a)
		{
			x=a;
			cout<<"Constructor of A called\n";
		}
		void display()
		{
			cout<<"x = "<<x<<endl;
		}
};

class B
{
	protected:
		int y;
		B(int b)
		{
			y=b;
			cout<<"Constructor of B called\n";
		}
		void display()
		{
			cout<<"y = "<<y<<endl;
		}
};

class C:private B,A	//constructor call depend on this order
{
	public:
		C(int a, int b):A(a),B(b)	//constructor call DON'T depend on this order
		{
			cout<<"Constructor of C called\n";
		}
		void show()
		{
			A::display();
			B::display();
			cout<<"x*y = "<<x*y<<endl;
		}
};

int main()
{	
	C *ob = new C(5,10);
	ob->show();
	return 0;
}

/*Sample Output
Constructor of B called
Constructor of A called
Constructor of C called
x = 5
y = 10
x*y = 50
*/
