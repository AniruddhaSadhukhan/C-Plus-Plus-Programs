#include<iostream>
using namespace std;

//Program to find GCD using inline function
//		by Aniruddha

//It is too long to be inline,compiler will ignore the 
//inline request and compile the function as normal one
inline int gcd(int a,int b)
{
	if(b==0)
		return a;
	else return gcd(b,a%b);
}

int main()
{	
	int a,b;	
			
	cout<<"Enter 2 numbers : ";
	cin>>a>>b;
	cout<<"GCD : "<<gcd(a,b)<<endl;
	return 0;	
}

/*Sample Output
Enter 2 numbers : 30 36
GCD : 6
*/
