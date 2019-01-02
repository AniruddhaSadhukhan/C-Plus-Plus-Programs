#include<iostream>
using namespace std;

//Write a C++ program to illustrate the use of exception handling.
//		by Aniruddha

template < class T > //declare before use of template variable

class Sub
{
	T a,b;
	public:
		void in(T x,T y)
		{
			a=x,b=y;
		}
		void subs()
		{
			try{
				if(a>b)
					cout<<a-b<<endl;
				else throw false;
			}catch(bool x)
			{
				cout<<"Invalid"<<endl;
			}
		}

};

int main()
{
	Sub<int> a,b;
	a.in(10,5);
	b.in(5,10);
	a.subs();
	b.subs();
	return 0;
}


/*Sample Output
5
Invalid

*/
