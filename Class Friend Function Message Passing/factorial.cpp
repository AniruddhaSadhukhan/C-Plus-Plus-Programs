#include<iostream>
using namespace std;

/* Program to read a number through member 
function and to calculate the factorial 
of the number using friend function */
//				by Aniruddha
class Num
{
	int n;
	public :
		void input()
		{
			cout<<"Enter number : ";
			cin>>n;
		}
		friend void factorial(Num a);
};

void factorial(Num a)
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
	factorial(ob);
	return 0;
}
/*Sample Output:
Enter number : 5
Factorial : 120
*/
