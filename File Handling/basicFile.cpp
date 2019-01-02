#include<iostream>
#include<fstream>
using namespace std;

/*Write a C++ program to write and read text in a file. Use ofstream and ifstream classes.*/
//		by Aniruddha

int main()
{	
	string name;
	int age;
	ofstream out("text.txt");
	cout<<"\nName:";
	cin>>name;
	cout<<"Age:";
	cin>>age;
	out<<name<<"\t";
	out<<age <<"\n";
	out.close(); // File is closed
	ifstream in ("text.txt");
	in>>name;
	in>>age;
	cout<<"\nName:"<<name<<"\n";
	cout<<"Age:"<<age;
	in.close();
	return 0;		
}

/*Sample Output
Name:Ani
Age:21

Name:Ani
Age:21

**text.txt**
Ani	21
*/
