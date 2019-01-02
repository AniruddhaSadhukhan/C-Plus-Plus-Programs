#include<iostream>
using namespace std;

/*  Program to add two objects of time using a class Time and display result */
//				by Aniruddha

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
		
		Time Timeadd(Time t)
		{
			Time temp;
			temp.s=(s+t.s)%60;
			temp.m=(m+t.m+(s+t.s)/60)%60;
			temp.h=(h+t.h+(m+t.m+(s+t.s)/60)/60);
			return temp;
		}
		
		void display()
		{
			cout<<h<<" : "<<m<<" : "<<s<<endl;
		}
};


int main()
{
	Time t1(4,55,40),t2(5,40,55),t3;
	t3=t1.Timeadd(t2);
	cout<<"First time  : ";
	t1.display();
	cout<<"Second time : ";
	t2.display();
	cout<<"Added time  : ";
	t3.display();
	return 0;
}
/*Sample Output:
First time  : 4 : 55 : 40
Second time : 5 : 40 : 55
Added time  : 10 : 36 : 35

*/
