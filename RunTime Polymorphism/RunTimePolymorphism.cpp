#include<iostream>
using namespace std;

/*Create a class “Base” with two member functions display () and show (). Declare
the show() function as virtual. Create a class “Derived” with the member functions
display() and show(),which is derived from the Parent class “Base”. Implement the
main method to show how “RUN TIME POLYMORPHISM” works.*/
//		by Aniruddha

class Base
{
	public: 
		void display()
		{
			cout<<"Base Class Display\n";
		}
		virtual void show() = 0;
};

class Child:public Base
{
	public: 
		void show()
		{
			cout<<"Child Class Show\n";
		}
		void display()
		{
			cout<<"Child Class Display\n";
		}
};

int main()
{	
	Child c;
	Child *cptr = &c;
	Base *bptr = &c;
	bptr->display();
	cptr->display();
	bptr->show();
	return 0;	
}

/*Sample Output
Base Class Display
Child Class Display
Child Class Show

*/
