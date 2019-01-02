#include<iostream>
using namespace std;

//Program to exchange of value of two variables without using third
//variable and /or arithmetic operator.
//		by Aniruddha

int main()
{	
	int a,b;	
			
	cout<<"Enter 2 numbers : ";
	cin>>a>>b;
	a=a^b^(b=a);
	cout<<"a = "<<a<<"  b = "<<b<<endl;	
	return 0;
}

/*Sample Output
Enter 2 numbers : 5 10
a = 10  b = 5

*/
