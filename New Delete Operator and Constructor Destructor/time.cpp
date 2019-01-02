#include<iostream>
using namespace std;

/*Program to create a Class “Time” to implement time 
using default, parameterized and copy constructor */
//			by Aniruddha

class Time
{
	int h,m,s;
	public:
		Time()
		{
			h=m=s=0;
		}
		
		Time(int hr,int min,int sec)
		{
			h=hr;m=min;s=sec;
		}
		
		Time(const Time &ob)	//ref must be passed or else it will continue calling itself to copy
		{
			h=ob.h;
			m=ob.m;
			s=ob.s;
		}
		
		void display()
		{
			cout<<h<<" : "<<m<<" : "<<s<<endl;
		}
};

int main()
{
	Time t1;				//default constructor calling
	t1.display();
	
	Time t2(10,20,30);		//implicit constructor calling
	t2.display();
	
	Time t3(t2);		//calling copy constructor
	t3.display();
	
	return 0;
}
/*Sample Output:
0 : 0 : 0
10 : 20 : 30
10 : 20 : 30
*/
