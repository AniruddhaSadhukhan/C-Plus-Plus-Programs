#include<iostream>
using namespace std;

/*Program to highlight the difference between 
overloaded assignment operator and copy constructor. */
//			by Aniruddha

class Test
{
	public:
		Test() {}
		Test(const Test &t)
		{
			cout<<"Copy constructor called\n";
		}
		Test operator = (const Test &t)
		{
			cout<<"Assignment operator called\n";
		}
};


int main()
{
	Test t1,t2;
	t2 = t1;
	Test t3 = t1;	
	return 0;
}

/* Sample Output:
Assignment operator called
Copy constructor called
*/
