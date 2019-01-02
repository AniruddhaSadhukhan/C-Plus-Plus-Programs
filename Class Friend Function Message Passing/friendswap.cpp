#include<iostream>
using namespace std;

/* Program to exchange values between two classes using friend exchange( ) function*/
//				by Aniruddha

class B;

class A
{
	int a;
	public:
		void input()
		{
			cout<<"Enter a : ";
			cin>>a;
		}
		void show()
		{
			cout<<"\na = "<<a;
		}
		friend void exchange(A &,B &);
};

class B
{
	int b;
	public:
		void input()
		{
			cout<<"Enter b : ";
			cin>>b;
		}
		void show()
		{
			cout<<"\nb = "<<b;
		}
		friend void exchange(A &,B &);
};

void exchange(A &x,B &y)
{
	x.a = x.a + y.b - (y.b = x.a);
}

int main()
{
	A a;
	B b;
	a.input();
	b.input();
	cout<<"After exchange : ";
	exchange(a,b);
	a.show();
	b.show();
	return 0;
}
/*Sample Output:
Enter a : 5
Enter b : 10
After exchange : 
a = 10
b = 5
*/
