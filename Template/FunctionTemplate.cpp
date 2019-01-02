#include<iostream>
using namespace std;

//Write a C++ program to implement Function Template.
//		by Aniruddha

template < class T, class T2 > //declare before use of template variable

T add(T a, T2 b)
{
	return a+b;
}

int main()
{
	cout<<add(5,7.5)<<endl;
	cout<<add(7.5,8)<<endl;
	cout<<add('a',3)<<endl;
	return 0;
}

/*Sample Output
12
15.5
d
*/
