#include<iostream>
using namespace std;

/*Program to add & subtract two objects of Complex Number using the concept 
of + operator overloading with and without friend function. */
//						by Aniruddha

class Complex
{
	int r,i;
	public:
		Complex(): r(10),i(5) {}
		Complex(int x,int y): r(x),i(y) {}
		Complex operator + (Complex a)
		{
			Complex temp;
			temp.r = r + a.r;
			temp.i = i + a.i;
			return temp;
		}
		
		friend Complex operator - (Complex a,Complex b)
		{
			Complex temp;
			temp.r = a.r - b.r;
			temp.i = a.i - b.i;
			return temp;
		}

		void show()
		{
			cout<<r<<" + "<<i<<"i"<<endl;
		}
};


int main()
{
	Complex a(10,5),b(5,15),c;
	cout<<"a = 10+5i    b = 5+15i\n";
	c = a + b;
	cout<<"a + b = ";c.show();
	c = a - b;
	cout<<"a - b = ";c.show();	
	return 0;
}

/* Sample Output:
a = 10+5i    b = 5+15i
a + b = 15 + 20i
a - b = 5 + -10i

*/
