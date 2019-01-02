#include<iostream>
#include<cmath>
using namespace std;

/* Write a C++ program to find the area of triangle,
rectangle and circle using constructor overloading.  */
//			by Aniruddha

class area
{
	public:
		area(float a,float b,float c)
		{
			float s=(a+b+c)/2.0;
			cout<<"Area of triangle = "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
		}

		area(float a,float b)
		{
			cout<<"Area of rectangle = "<<a*b<<endl;
		}

		area(float a)    
		{
			cout<<"Area of circle = "<<3.14*a*a<<endl;
		}
};

int main()
{
	area circle(20);
	area rectangle(10,20);
	area triangle(10,20,11);
	return 0;
}
/*Sample Output:
Area of circle = 1256
Area of rectangle = 200
Area of triangle = 31.9756
*/
