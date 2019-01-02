#include<iostream>
using namespace std;

/* Program to declare friend function in two 
classes named Complex1 and Complex2. Calculate 
the addition of complex numbers of both the 
classes using friend complexadd( ) function*/
//				by Aniruddha

class Complex2;		//forward declaration
class Complex1
{
	double r,i;
	public:
		Complex1()
		{
			r=i=0;
		}
		
		Complex1(double x,double y)
		{
			r=x;i=y;
		}
		void display()
		{
			cout<<r<<"+ i"<<i<<endl;
		}
		friend void add(Complex1 c1,Complex2 c2);
};

class Complex2
{
	double r,i;
	public:
		Complex2()
		{
			r=i=0;
		}
		
		Complex2(double x,double y)
		{
			r=x;i=y;
		}
		void display()
		{
			cout<<r<<"+ i"<<i<<endl;
		}
		friend void add(Complex1 c1,Complex2 c2);
};

void add(Complex1 c1,Complex2 c2)
{
	int r,i;
	r=c1.r+c2.r;
	i=c1.i+c2.i;
	cout<<"Addition of two complex numbers : "<<r<<" + i"<<i<<endl;
}

int main()
{
	Complex1 c1(10,20);
	c1.display();
	Complex2 c2(30,40);
	c2.display();
	add(c1,c2);
	return 0;
}
/*Sample Output:
10+ i20
30+ i40
Addition of two complex numbers : 40 + i60
*/
