#include<iostream>
#include<cmath>
using namespace std;

/* Write a C++ program to implement destructor and show 
how objects are deleted in reverse order of their creation */
//			by Aniruddha

class Test
{
	static int count;
	int code;
	public:
		Test()
		{
			count++;
			code=count;
			cout<<"Object created : "<<code<<endl;
		}
		~Test()
		{
			cout<<"Object destroyed : "<<code<<endl;
		}	
};
int Test::count = 0; 
int main()
{
	Test t1,t2;
	{
		cout<<"Entering inner scope "<<endl;
		Test t3,t4;
		cout<<"Exiting inner scope "<<endl;
	}
	return 0;
}
/*Sample Output:
Object created : 1
Object created : 2
Entering inner scope 
Object created : 3
Object created : 4
Exiting inner scope 
Object destroyed : 4
Object destroyed : 3
Object destroyed : 2
Object destroyed : 1
*/
