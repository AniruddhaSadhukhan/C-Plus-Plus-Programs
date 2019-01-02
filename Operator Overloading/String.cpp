#include<iostream>
using namespace std;

/*Program to implement a class called String that could 
work as a user defined data type and do the following 
String operation using operator overloading (+ and = =): 
i. To concatenate two strings ii. To compare two Strings.*/
//		by Aniruddha

class String
{
	string s;
	public:
		String(): s("") {}
		String(string a): s(a) {}
		void display()
		{
			cout<<s<<endl;
		}
		String operator +(String &a)
		{
			return s+a.s;
		}
		int operator == (String &a)
		{
			return s==a.s;
		}
};

int main()
{	
	String s1("Aniruddha "),s2("Sadhukhan"),s3;
	s1.display();
	s2.display();
	s3 = s1+s2;
	s3.display();
	int f = s1==s2;
	if(f)
		cout<<"Same String\n";
	else cout<<"Different String\n";
		
}

/*Sample Output
Aniruddha 
Sadhukhan
Aniruddha Sadhukhan
Different String
*/
