#include<iostream>
using namespace std;

//Program to find power using default argument
//		by Aniruddha

void power(int m ,int n=5)
{
	int res=1;
	
	cout<<m<<"^"<<n<<" = ";
	
	while(n!=0)
	{
		res=res*m;
		n--;
	}
	
	cout<<res<<endl;
}

int main()
{	
	int m;	
			
	cout<<"m = ";
	cin>>m;
	
	power(m);
	return 0;	
}

/*Sample Output
m = 2
2^5 = 32
*/
