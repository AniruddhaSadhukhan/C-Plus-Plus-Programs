#include<iostream>
using namespace std;

/* Program to show difference between static and non-static 
member variables of a class using member function and 
to declare static object and display its contents. */
//		by Aniruddha
class Num
{
	static int a;
	int b ;
	public:
		Num()
		{
			a = a + 10;
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
};			

int Num :: a = 10;

int main()
{
	cout<<"Creating non static objects\n";
	Num p,q,r;		/*a is initialised only once,b is initialised for every objects by garbage value*/
	cout<<"Creating static objects\n";
	static Num x,y,z;	/*nonstatic member variable (b) is initialised with 0 every time*/
	return 0;
}



/*Sample Output
Creating non static objects
a = 20 b = 2
a = 30 b = 0
a = 40 b = 4197712
Creating static objects
a = 50 b = 0
a = 60 b = 0
a = 70 b = 0
*/
