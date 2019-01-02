#include<iostream>
using namespace std;

/*
Program to display address of various datatypes in 
hexadecimal and unsigned integer formats and 
display the value of x (x=84) in hexadecimal 
and octal number formats.
*/
//		by Aniruddha

int main()
{	
	int a = 5;	
	char b = 'c';		
	cout<<"Address of int a = "<<&a<<endl;		//hex format
	cout<<"Address of int a = "<<(long)&a<<endl;	//integer format
	cout<<"Address of char b = "<<(void *)&b<<endl;	//hex format
	cout<<"Address of char b = "<<(long)&b<<endl;	//integer format
	
	cout<<"Hex of 84 : "<<hex<<84<<endl;
	cout<<"Oct of 84 : "<<oct<<84<<endl;
	return 0;	
}

/*Sample Output
Address of int a = 0x7fff6d75fdf4
Address of int a = 140735029837300
Address of char b = 0x7fff6d75fdf3
Address of char b = 140735029837299
Hex of 84 : 54
Oct of 84 : 124

*/
