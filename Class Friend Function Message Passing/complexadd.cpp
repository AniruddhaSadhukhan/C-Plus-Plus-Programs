#include<iostream>
using namespace std;

/* Program to add two objects of complex number using 
a class Complex and store the result in another object.  */
//				by Aniruddha

class Complex
{
	double r,i;
	public:
		Complex()
		{
			r=i=0;
		}
		
		Complex(double x,double y)
		{
			r=x;i=y;
		}
		
		void display()
		{
			cout<<r<<"+ i"<<i<<endl;
		}
		
		Complex Complexadd(Complex c)
		{
			Complex temp;
			temp.r = r + c.r;
			temp.i = i + c.i;
			return temp;
		}
};

int main()
{
	Complex c1(55,40),c2(5,40),c3;
	c3=c1.Complexadd(c2);
	cout<<"First Complex number  : ";
	c1.display();
	cout<<"Second Complex number : ";
	c2.display();
	cout<<"Added Complex number  : ";
	c3.display();
	return 0;
}
/*Sample Output:
First Complex number  : 55+ i40
Second Complex number : 5+ i40
Added Complex number  : 60+ i80
*/
