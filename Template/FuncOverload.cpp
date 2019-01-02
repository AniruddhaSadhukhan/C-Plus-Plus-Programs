#include<iostream>
using namespace std;

//Write a Template function to implement overloading of Template function.
//		by Aniruddha

template < class T > //declare before use of template variable

void show(T a)
{
	cout<<"Template "<<a<<endl;
}

void show(int a)
{
	cout<<"Integer "<<a<<endl;
}

int main()
{
	show(7);
	show(7.5);
	show('d');
	return 0;
}

/*Output
Integer 7
Template 7.5
Template d

*/
