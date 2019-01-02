#include<iostream>
using namespace std;

/*Write a C++ program to count the number 
of objects created using static member function.*/
//				by Aniruddha

class test
{
	public:
		static int count;
		test()
		{
			count++;
		}
	
};			

int test :: count = 0;

int main()
{
	test a,b,c,d;
	cout<<"Object created : "<<d.count;
	return 0;
}
/*Sample Output:
Object created : 4
*/
