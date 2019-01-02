#include<iostream>
using namespace std;

//Program to understand inline and macro
//		by Aniruddha

/*
When the compiler sees a function call,it jumps 
to the function.After executing the function it 
jumps back to the caller.While these can save 
memory space, it takes some extra time.To save 
execution time in short function,we can elect 
to put the code in function body directly inline 
with the code in the calling problem i.e. each time 
there is a function call in the source file,the 
actual code is inserted,instead of jump to a function.

Long functions are better off as normal one.

inline  keyword is actually just a request to the compiler.

Sometimes the compiler will ignore the request and 
compile the function as a normal function.It might 
decide the function is too long for inline,for instance. 

inline functions largely take place of macros.They serve 
same purpose but provide better type checking and 
do not need special care with parentheses,as macros do

The inline function is expanded by compiler
while macros are expanded by preprocessor

*/

#define sqr(n) ((n)*(n))	//macro

inline double sqri(double a)	//inline function
{
	return a*a;
}

int main()
{	
	int a;	
			
	cout<<"Enter a : ";
	cin>>a;
	
	cout<<"a^2 by macro            = "<<sqr(a)<<endl;
	cout<<"a^2 by inline function  = "<<sqri(a)<<endl;
	return 0;
}

/*Sample Output
Enter a : 5+5
a^2 by macro            = 25
a^2 by inline function  = 25
*/



