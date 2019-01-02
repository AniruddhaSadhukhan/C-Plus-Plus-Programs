#include<iostream>
using namespace std;

/*program to overload operators like *, <<, >> using friend function.
 The following overloaded operators should work for a class vector*/
//						by Aniruddha

class Vector
{
	int r,i;
	public:
		Vector(): r(10),i(5) {}
		Vector(int x,int y): r(x),i(y) {}
		
		friend istream & operator >> (istream &ain, Vector &ob)
		{
			ain>>ob.r;
			ain>>ob.i;
			return ain;
		}

		friend ostream & operator << (ostream &aout, Vector &ob)
		{
			aout<<ob.r<<" "<<ob.i<<endl;
			return aout;
		}
		
		friend Vector operator* (int a,Vector b)
		{
			Vector temp;
			temp.i = a * b.i;
			temp.r = a * b.r;
			return temp;
		}
};


int main()
{
	Vector a;
	cout<<"Enter two numbers : ";
	cin>>a;
	cout<<"Two numbers are   : ";
	cout<<a;
	a = 2 * a;
	cout<<"After multiplying by 2,they are : "<<a;
	return 0;
}

/* Sample Output:
Enter two numbers : 20 50
Two numbers are   : 20 50
After multiplying by 2,they are : 40 100
*/
