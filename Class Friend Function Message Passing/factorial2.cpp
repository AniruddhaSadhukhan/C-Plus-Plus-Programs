#include<iostream>
using namespace std;

/* Program to read a number through member 
function and to calculate the factorial 
of the number using friend function */
//				by Aniruddha
class Num;

class Calculate		//at first class with member function will be there
{
	public:
	void factorial(Num &a);
};

class Num		//second class declaring the function as friend will be there
{
	int n;
	public :
		void input()
		{
			cout<<"Enter number : ";
			cin>>n;
		}
		friend void Calculate:: factorial(Num &a);
};



void Calculate::factorial(Num &a)	//last,the function declaration will be there
{
	long long int res=1;
	while (a.n!=1)
		res*=a.n--;
	cout<<"Factorial : "<<res;
}

int main()
{
	Num ob;
	ob.input();
	Calculate ob2;
	ob2.factorial(ob);
	return 0;
}
/*Sample Output:
Enter number : 5
Factorial : 120
*/
