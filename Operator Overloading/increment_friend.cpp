#include<iostream>
using namespace std;

// Program to increment the value of a number using 
//unary (!) operator overloading using friend function
//			by Aniruddha

class A
{
	int i;
	public:
		A(): i(5) {}
		A(int x): i(x) {}

		friend A operator ! (A a)
		{
			return ++a.i;
		}
		
		void show()
		{
			cout<<"a : i = "<<i<<endl;
		}
};

int main()
{
	A a = 10;
	a.show();
	cout<<"After increment :\n";
	a=!a;
	a.show();
	return 0;
}

/* Sample Output:
a : i = 10
After increment :
a : i = 11


*/
