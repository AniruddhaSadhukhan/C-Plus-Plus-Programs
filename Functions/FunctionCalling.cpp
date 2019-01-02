#include<iostream>
using namespace std;

//Program to show difference between call by value,address,and reference
//		by Aniruddha

void exchangeCallByValue(int a,int b)
{
	a=a+b-(b=a);
	cout<<"Inside function after swapping: a="<<a<<"  b="<<b<<endl;
}

void exchangeCallByAddress(int *a,int *b)
{
	*a=*a+*b-(*b=*a);
}

void exchangeCallByReference(int &a,int &b)
{
	a=a+b-(b=a);
}
int main()
{	
	int a,b;	
		
	cout<<"Enter two numbers: ";
	cin>>a>>b;
		
	cout<<"\nCall by Value"<<endl;
	cout<<"a="<<a<<"  b="<<b<<endl;
	exchangeCallByValue(a,b);
	cout<<"Outside function after swapping: a="<<a<<"  b="<<b<<endl;
	
	cout<<"\nCall by Address"<<endl;
	cout<<"a="<<a<<"  b="<<b<<endl;
	exchangeCallByAddress(&a,&b);
	cout<<"After swap: a="<<a<<"  b="<<b<<endl;
	
	cout<<"\nCall by Reference"<<endl;
	cout<<"a="<<a<<"  b="<<b<<endl;
	exchangeCallByReference(a,b);
	cout<<"After swap: a="<<a<<"  b="<<b<<endl;
	
	return 0;		
}


/*Sample Output
Enter two numbers: 5 10

Call by Value
a=5  b=10
Inside function after swapping: a=10  b=5
Outside function after swapping: a=5  b=10

Call by Address
a=5  b=10
After swap: a=10  b=5

Call by Reference
a=10  b=5
After swap: a=5  b=10

*/
