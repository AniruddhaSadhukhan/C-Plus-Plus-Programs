#include<iostream>
using namespace std;

/* Write a C++ program to create a class Complex to 
implement complex numbers using default and 
parameterized constructor and copy constructor */
//				by Aniruddha

class Complex
{
	double r,i;
	public:
		Complex()
		{
			cout<<"Default constructor called: ";
			r=i=0;
		}
		
		Complex(double x,double y)
		{
			cout<<"Parameterised constructor called: ";
			r=x;i=y;
		}
		
		Complex(const Complex &ob)	//ref must be passed or else it will continue calling itself to copy
		{
			cout<<"Copy constructor called: ";
			r=ob.r;
			i=ob.i;
		}
		
		void display()
		{
			cout<<r<<"+ i"<<i<<endl;
		}
};

int main()
{
	cout<<"Complex c1 : ";
	Complex c1;				//default constructor calling
	c1.display();
	
	cout<<"Complex c2(10,20) : ";
	Complex c2(10,20);		//implicit constructor calling
	c2.display();
	
	cout<<"Complex c3 = Complex(30.0,40.0) : ";
	Complex c3=Complex(30,40);	//explicit constructor calling
	c3.display();
	
	cout<<"Complex c4(c2) : ";
	Complex c4(c2);		//calling copy constructor
	c4.display();
	
	cout<<"Complex c5 = c2 : ";
	Complex c5=c2;		//calling copy constructor
	c5.display();
	
	cout<<"Complex c6;c6=c2 : ";
	Complex c6;c6=c2;	//NOT calling copy constructor
	c6.display();
	
	return 0;
}
/*Sample Output:
Complex c1 : Default constructor called: 0+ i0
Complex c2(10,20) : Parameterised constructor called: 10+ i20
Complex c3 = Complex(30.0,40.0) : Parameterised constructor called: 30+ i40
Complex c4(c2) : Copy constructor called: 10+ i20
Complex c5 = c2 : Copy constructor called: 10+ i20
Complex c6;c6=c2 : Default constructor called: 10+ i20
*/
