#include<iostream>
using namespace std;

/*Create two classes Alpha and Beta which include a data member and constructors
to initialize the Data Create another class Gamma which is public derivation of the
Classes Alpha and Beta and includes its own data members and a constructor to
initialize them. Write a C++ program to implement how constructors are called in
derived Classes.*/
//		by Aniruddha

class Alpha
{
	protected:
		int x;
		Alpha(int a)
		{
			x=a;
			cout<<"Constructor of Alpha called\n";
		}
};

class Beta
{
	protected:
		int y;
		Beta(int b)
		{
			y=b;
			cout<<"Constructor of Beta called\n";
		}
};

class Gamma:public Beta,Alpha	//constructor call depend on this order
{
	int z;
	public:
		Gamma(int a, int b,int c):Alpha(a),Beta(b)	//constructor call DON'T depend on this order
		{
			cout<<"Constructor of Gamma called\n";
			z=c;
		}
};

int main()
{	
	Gamma *ob = new Gamma(5,10,15);
	return 0;
}

/*Sample Output
Constructor of Beta called
Constructor of Alpha called
Constructor of C called

*/

