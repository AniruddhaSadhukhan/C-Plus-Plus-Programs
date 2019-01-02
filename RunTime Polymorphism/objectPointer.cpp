#include<iostream>
using namespace std;

/*Write a C++ program to declare an object pointer to
 the class. Invoke member functions using pointer*/
//		by Aniruddha

class Num
{
	int x;
	public: 
		Num(int a): x(a) {}
		void show()
		{
			cout<<x<<endl;
		}
};

int main()
{	
	Num ob(10);
	Num *ptr = &ob;
	ptr->show();
	return 0;	
}

/*Sample Output
10
*/
