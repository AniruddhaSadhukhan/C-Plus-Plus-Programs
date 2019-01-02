#include<iostream>
using namespace std;

//Write a C++ program for exception handling Divide by zero
//		by Aniruddha

template < class T > //declare before use of template variable

class Divide
{
	T a,b;
	public:
		Divide(T x,T y):a(x),b(y)
		{
			try{
				if(b!=0)
					cout<<a/b<<endl;
				else throw false;
			}catch(bool x)
			{
				cout<<"Divide by zero"<<endl;
			}
		}

};

int main()
{
	Divide<float> a(10.5,0.0);
	Divide<int> b(10,2);
	return 0;
}


/*Sample Output
Divide by zero
5


*/
