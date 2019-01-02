#include<iostream>
using namespace std;

//Program to understand Default Argument
//		by Aniruddha


//a function with default argument
//it can be called with 2,3,4 arguments
void sum(int a,int b,int c=0,int d=0)
{
	cout<<(a+b+c+d)<<endl;
}

/*Once default value is used for an argument,
all subsequent arguments must have default value
Eg: Invalid => void sum(int a,int b,int c=0,int d)
*/


int main()
{	
	sum(5,10);
	sum(5,10,15);
	sum(5,10,15,30);
	return 0;
}

/*Sample Output
15
30
60
*/
