#include<iostream>
using namespace std;

// Program to increment the value of a number using ++ (prefix/postfix) operator overloading
//						by Aniruddha

class A
{
	int i;
	public:
		A(): i(5) {}
		A(int x): i(x) {}
		A operator ++ ()
		{
			A temp;
			temp.i = ++i;
			return temp;
		}
		A operator ++ (int)
		{
			A temp;
			temp.i = ++i;
			return temp;
		}
		void show()
		{
			cout<<"i = "<<i<<endl;
		}
};

void display(A &a,A &b)
{
	cout<<"a : ";
	a.show();
	cout<<"b : ";
	b.show();
}
int main()
{
	A a = 10,b;
	display(a,b);
	cout<<"After prefix increment :\n";
	b = ++a;
	display(a,b);
	cout<<"After postfix increment :\n";
	b = a++;
	display(a,b);
	cout<<"After increment of a :\n";
	a++;
	display(a,b);
	return 0;
}

/* Sample Output:
a : i = 10
b : i = 5
After prefix increment :
a : i = 11
b : i = 11
After postfix increment :
a : i = 12
b : i = 12
After increment of a :
a : i = 13
b : i = 12
*/
