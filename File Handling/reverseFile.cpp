#include<iostream>
#include<fstream>
using namespace std;

/*Write a C++ program to write text in the file and read the text file 
from the end of file. Display the contents of file in reverse order.*/
//		by Aniruddha

int main()
{	
	ofstream out;
	
	out.open("text.txt");
	if(out.is_open())
	{
		out<<"Aniruddha";
	}
	out.close();
	
	ifstream in;
	in.open("text.txt"); 
	if (in.fail())
	{
		cout<<"\nFile open failure";
		return 0;
	}
	
	in.seekg(0,ios::end);
	int b=in.tellg();
	char c;
	for (int i=1;i<=b;i++)
	{
		in.seekg(-i,ios::end);
		in>>c;
		cout<<c;
	}
	in.close();
	return 0;
}

/*Sample Output
ahddurinA
*/
