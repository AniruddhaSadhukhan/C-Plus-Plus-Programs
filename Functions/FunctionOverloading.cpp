#include<iostream>
#include<cmath>
using namespace std;

//Program to understand function overloading
//		by Aniruddha

void area(float a,float b,float c)
{
	float s=(a+b+c)/2.0;
	cout<<"Area of triangle = "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
}

void area(float a,float b)
{
	cout<<"Area of rectangle = "<<a*b<<endl;
}

void area(float a)    
{
	cout<<"Area of circle = "<<3.14*a*a<<endl;
}

int main()
{	
	area(5);
	area(5,10);
	area(5,10,12);
	return 0;
}

/*Sample Output
Area of circle = 78.5
Area of rectangle = 50
Area of triangle = 24.5446

*/
