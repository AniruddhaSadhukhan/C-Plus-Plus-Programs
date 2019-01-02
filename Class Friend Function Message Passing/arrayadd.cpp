#include<iostream>
using namespace std;

/* Program to declare three classes. Declare integers 
array as data member in each class. Perform addition 
of two data member arrays into array of third class 
using friend sum( ) function.  */
//				by Aniruddha

class B;
class C;

class A
{
	int a[5];
	public:
		void input()
		{
			cout<<"Enter 5 numbers : ";
			for(int i=0;i<5;i++)	cin>>a[i];
		}
		
		friend C sum(A,B,C);
};

class B
{
	int b[5];
	public:
		void input()
		{
			cout<<"Enter 5 numbers : ";
			for(int i=0;i<5;i++)	cin>>b[i];
		}
		
		friend C sum(A,B,C);
};

class C
{
	int c[5];
	public:
		void show()
		{
			cout<<"Array after addition : ";
			for(int i=0;i<5;i++)	cout<<c[i]<<" ";
			cout<<endl;
		}
		
		friend C sum(A,B,C);
};

C sum(A a1,B b1,C c1)
{
	for(int i=0;i<5;i++)	
		c1.c[i] = a1.a[i] + b1.b[i] ;
	return c1;
}

int main()
{
	A a;
	B b;
	C c;
	a.input();
	b.input();
	c = sum(a,b,c);
	c.show();
	return 0;
}
/*Sample Output:
Enter 5 numbers : 5 10 20 30 40
Enter 5 numbers : 50 60 70 80 90
Array after addition : 55 70 90 110 130 

*/
