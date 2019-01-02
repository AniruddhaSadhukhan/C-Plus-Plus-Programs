#include<iostream>
using namespace std;

/*Program to implement a Class Float that contains one 
float data member. Overload all the arithmetic operators 
so that they can operate on the objects of Float */
//						by Aniruddha

class Float
{
	float i;
	public:
		Float(): i(5) {}
		Float(float x): i(x) {}
		Float operator + (Float a)
		{
			Float temp;
			temp.i = i + a.i;
			return temp;
		}
		
		Float operator - (Float a)
		{
			Float temp;
			temp.i = i - a.i;
			return temp;
		}

		Float operator / (float a)
		{
			Float temp;
			temp.i = i / a;
			return temp;
		}
		
		friend Float operator* (float a,Float b)
		{
			Float temp;
			temp.i = a * b.i;
			return temp;
		}
		
		void show()
		{
			cout<<i<<endl;
		}
};


int main()
{
	Float a = 10.6,b = 5.3,c;
	cout<<"a = 10.6    b = 5.3\n";
	c = a + b;
	cout<<"a + b = ";c.show();
	c = a - b;
	cout<<"a - b = ";c.show();	
	c = a / 5.3;
	cout<<"a / 5.3 = ";c.show();	
	c = 10.6 * b;
	cout<<"10.6 * b = ";c.show();
	return 0;
}

/* Sample Output:
a = 10.6    b = 5.3
a + b = 15.9
a - b = 5.3
a / 5.3 = 2
10.6 * b = 56.18
*/
