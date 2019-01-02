#include<iostream>
using namespace std;

//Program to declare reference variable to another variable 
//and display the assigned value using both the variables.
//		by Aniruddha

int main()
{	
	int a=5;	
	int &x=a;		
	cout<<"a = "<<a<<" Ref of a ="<<x<<endl;
	return 0;	
}

/*Sample Output
a = 5 Ref of a =5
*/
