#include<iostream>
#include<fstream>
using namespace std;

/*Write a C++ program to read and display contents of file. Use eof( ) function.*/
//		by Aniruddha

int main()
{	
	string name;
	int age;
	char c;
	ifstream in ("text.txt");
	while(in.eof()==0)
	{
		in>>c;
		cout<<c;
	}
	in.close();
	return 0;		
}

/*Sample Output
Aniruddhaa
*/
