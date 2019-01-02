#include<iostream>
#include<cmath>
using namespace std;

//Write a Template function for finding the root of a quadratic equation

template < class T > //declare before use of template variable

void quadratic(T a,T b,T c)
{
	T d = b*b - 4*a*c;
	if(d==0)
		cout<<"Equal Roots : "<<(-b/(2*a))<<endl;
	else if(d>0)
	{
		float r=sqrt(d);
		cout<<"Real Roots :"<<(-b+r)/(2*a)<<" & "<<(-b-r)/(2*a)<<endl;
	}
	else
	{
		float i=sqrt(-d)/(2*a);
		float r=-b/(2*a);
		cout<<"Imaginary Roots :"<<r<<"+ i"<<i<<" & "<<r<<"- i"<<i<<endl;
	}
	
}

int main()
{
	quadratic(1,-5,6);
	return 0;
}

/*Output
Real Roots :3 & 2
*/
