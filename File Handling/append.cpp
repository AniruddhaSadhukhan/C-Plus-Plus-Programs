#include<iostream>
#include<fstream>
using namespace std;

/*Write a C++ program to append a file*/
//		by Aniruddha

int main()
{	
	string name;
	int age;
	ofstream out("text.txt",ios::app);
	out<<"\nAppending data";
	out.close(); // File is closed
	ifstream in ("text.txt");
	while(getline(in,name))
		cout<<name<<endl;
	in.close();
	return 0;	
}

/*Sample Output
Ani	21

Appending data

*/
