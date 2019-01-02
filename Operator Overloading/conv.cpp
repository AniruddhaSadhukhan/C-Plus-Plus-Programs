#include<iostream>
#include<cstring>
#include<cstdio>	//for snprintf()

using namespace std;

/* Write a C++ program to implement type conversions:
i. Basic Type to Class type
ii. Class Type to Basic Type
iii. One class type to another class type	*/
//		by Aniruddha

class Test
{
	int i;
	public:
		Test(): i(0) {}
		Test(int j): i(j) {}
		operator int()
		{
			return i;
		}
		void show()
		{
			cout<<i<<endl;
		}
};

class Date
{
	char d[11];
	public:
		Date() {}
		Date(char *e) 	{ strcpy(d,e); }
		void show()	{ cout<<d<<endl;}
};

class DMY
{
	int d,m,y;
	public:
		DMY()	{ d=m=y=0;}
		DMY(int dt,int mt,int yr): d(dt),m(mt),y(yr)	{}
		void show()
		{
			cout<<d<<" "<<m<<" "<<y<<endl;
		}
		operator Date()
		{
			char tmp[5],dt[11];
			//itoa(d,dt,10); //10 denotes decimal base
			snprintf(dt,sizeof dt,"%d",d);
			strcat(dt,"-");
			//itoa(m,tmp,10);
			snprintf(tmp,sizeof tmp,"%d",m);
			strcat(dt,tmp);
			strcat(dt,"-");
			//itoa(y,tmp,10);
			snprintf(tmp,sizeof tmp,"%d",y);
			strcat(dt,tmp);
			return (Date(dt));
		}
};

int main()
{
	Test t1;
	t1 = 5; 	//basic type to class type
	t1.show();
	int n = t1;	//class type to basic type 
	cout<<n<<endl;
	
	Date d1;
	DMY d2(21,7,1997);
	d1 = d2;	//class type to another class type
	d1.show();
	d2.show();
	return 0;
}

/* Sample Output:
5
5
21-7-1997
21 7 1997
*/
