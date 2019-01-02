#include<iostream>
#include<string.h>
using namespace std;

/*Program to implement a class String that could work as 
a user defined data type. Include constructors that will 
enable us to create an uninitialized String and initialized 
String. Include the member function to do the following task:
a. Find the position of a specific letter.
b. Concatenate two strings.
c. Display a desired string.	*/
//		by Aniruddha

class String
{
	char *name;
	int l;
	public:
		String()
		{
			l=0;
			name=new char[1];
		}
		String(char *s)
		{
			l = strlen(s);
			name=new char[l+1];
			strcpy(name,s);
		}
		void display()
		{
			cout<<name<<endl;
		}
		void join(String &a,String &b)
		{
			l=a.l+b.l;
			name=new char[l+1];
			strcpy(name,a.name);
			strcat(name,b.name);
		}
		void find(char c)
		{
			for(int i=0;name[i]!='\0';i++)
			{
				if(name[i]==c)
				{
					cout<<"Position:"<<i+1;
					return;
				}
			}
			cout<<"Not Found"<<endl;
		}
};

int main()
{	
	String s1,s2("Ani"),s3("ruddha");
	
	s2.display();
	s3.display();
	s1.join(s2,s3);
	s1.display();
	s1.find('r');
}

/*Sample Output
Ani
ruddha
Aniruddha
Position:4
*/
