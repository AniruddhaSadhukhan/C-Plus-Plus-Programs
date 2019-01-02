#include<iostream>
#include<fstream>
using namespace std;

/*Write a C++ program to open multiple files for 
writing and reading purpose. Use open ( ) function.*/
//		by Aniruddha

int main()
{	
	ofstream out;
	out.open ("name.txt"); 
	out <<"My name is:\n"; 
	out <<"Aniruddha Sadhukhan\n"; 
	out.close();
	out.open ("age.txt");
	out <<"My age is:\n"; 
	out <<"Age: 21\n";
	out.close(); 

	ifstream in;
	in.open ("name.txt"); 
	string text;
	while (getline(in,text))
	{
		cout<<text<<"\n";
	}
	in.close();
	in.open ("age.txt");
	while (getline(in,text))
	{
		cout<<text<<"\n";
	}
	in.close();
	return 0;	
}

/*Sample Output
My name is:
Aniruddha Sadhukhan
My age is:
Age: 21

**name.txt**
My name is:
Aniruddha Sadhukhan

**age.txt**
My age is:
Age: 21
*/
