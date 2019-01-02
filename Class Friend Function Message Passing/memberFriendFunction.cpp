#include<iostream>
using namespace std;

/* Program to show a member function of a 
class can be friend function of another class  */
//				by Aniruddha

class Two;
class One
{
	int a;
	public:
		One()
		{
			a=10;
		}
		void add(Two &ob);
		
};


class Two
{
	int b;
	public:
		Two()
		{
			b=20;
		}
		friend void  One::add(Two &ob);
};

void One::	add(Two &ob)	//cant be defined after One as it is declared friend in Two
{
	cout<<(a + ob.b);
}
 
int main()
{
	One ob1;
	Two ob2;
	ob1.add(ob2);
	return 0;
}
/*Sample Output:
30
*/
