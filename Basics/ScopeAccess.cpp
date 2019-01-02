#include<iostream>
using namespace std;

//Program to understand the use of Scope Access Operator
//		by Aniruddha

int a=5;
int main()
{	
	int a=10;	
	{
		int a=15;
		cout<<"a="<<a<<endl;
		cout<<"::a="<<::a<<endl;
	}		
	cout<<"a="<<a<<endl;
	cout<<"::a="<<::a<<endl;
	return 0;	
}

/*Sample Output
a=15
::a=5
a=10
::a=5
*/
