#include<iostream>
#include<fstream>
using namespace std;

/*Write a C++ program to open a file in binary mode. Write and read the data.*/
//		by Aniruddha

int main()
{	
	string name;
	int age;
	ofstream out("text.txt",ios::out | ios::binary);
	cout<<"\nName:";
	cin>>name;
	cout<<"Age:";
	cin>>age;
	out<<name<<"\t";
	out<<age <<"\n";
	out.close(); // File is closed
	ifstream in ("text.txt",ios::out | ios::binary);
	in>>name;
	in>>age;
	cout<<"\nName:"<<name<<"\n";
	cout<<"Age:"<<age;
	in.close();
	return 0;	
}

/*Sample Output
Name:Aniruddha
Age:20
*/
