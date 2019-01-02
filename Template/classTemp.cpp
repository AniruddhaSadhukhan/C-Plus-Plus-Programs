#include<iostream>
using namespace std;

//Write a C++ program to implement Class Template.
//		by Aniruddha

template < class T > //declare before use of template variable

class Num
{
	T a,b;
	public:
		Num(T x, T y);
		/*:a(x),b(y) 
		{
			cout<<a<<" "<<b<<endl;
		}*/

};
template < class T >
Num<T>::Num(T x, T y):a(x),b(y) 
{
	cout<<a<<" "<<b<<endl;
}
int main()
{
	Num <int> n1(7,8);
	Num <float> n2(7.2,2.8);
	return 0;
}

/*Sample Output
7 8
7.2 2.8
*/
